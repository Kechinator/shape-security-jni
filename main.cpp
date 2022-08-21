#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>

#include "clangObf.cpp"
#include "base64.h"

const char* format_string = "{\"nonce\": \"%s\", \"sig\": [\"%s\", \"%s\", \"%s\", \"%x\"]}";

thread_local int32_t dword_3E6B4 = 0;

std::string urlencode(const std::string& input)
{
  std::string ret = input;
  std::replace(ret.begin(), ret.end(), '+', '-');
  std::replace(ret.begin(), ret.end(), '/', '_');
  return ret;
}

void fillRandomNonce(uint8_t* out)
{
    srand(time(NULL));
    for (int i = 0; i < 32; ++i)
    {
        int r = rand();
        // r = 0x1c;
        uint8_t byteVal = r & 0xff;
        out[i] = byteVal;
    }
}

std::string getNonceEncoded(uint8_t* nonceBytes)
{
    static uint8_t lookup[] = 
    {
        0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 
        0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x70, 0x71, 0x72, 0x73, 0x74, 
        0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x41, 0x42, 0x43, 0x44, 
        0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 
        0x4F, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 
        0x59, 0x5A, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
        0x38, 0x39
    };

    char encoded[32 + 1];
    for (int i = 0; i < 32; ++i)
    {
        uint8_t byteVal = nonceBytes[i];
        auto lookedUp= lookup[byteVal - byteVal / sizeof(lookup) * sizeof(lookup)];
        //printf("%c 0x%x", lookedUp, lookedUp);
        encoded[i] = lookedUp;
    }
    //printf("\n");

    encoded[32] = '\0';
    return encoded;
}


int doit(const std::string& funcArgOne, const std::string& funcArgTwo, const std::string& fingerprintArg, const std::string& mntValuesArg, const std::string& storageValuesArg, uint32_t signatureConstArg, char* signatureArgOut, char* nonceArgOut)
{
      // alloc space for json signature
    char json_sig[0x500] = { 0, };

    uint8_t randomNonceBytes[32] = { 0 };
    fillRandomNonce(randomNonceBytes);

    std::string nonceEncoded = getNonceEncoded(randomNonceBytes);
    std::string nonceb64encoded = base64_encode(randomNonceBytes, sizeof(randomNonceBytes));

    char nonce[1000];
    long timeval = time(NULL);
    // timeval = 1592882938;
    sprintf(nonce, "%ld-%s", timeval, nonceEncoded.c_str());
    
    sprintf(json_sig,
        format_string,
        nonce,
        fingerprintArg.c_str(),
        mntValuesArg.c_str(),
        storageValuesArg.c_str(),
        signatureConstArg);

    int json_sig_len = strlen(json_sig);
    std::cout << "Signature to Obfuscate: (len: " << json_sig_len << ")\n";
    std::cout << json_sig << std::endl;

    uint8_t out[1000];

    // xor function arg one into random nonce bytes
    for (int i = 0; i < funcArgOne.length(); ++i)
    {
        randomNonceBytes[i] ^= funcArgOne.c_str()[i];
    }
    shuffle1((__int64)randomNonceBytes, (__int64) json_sig, (__int64)out, (unsigned __int64)strlen(json_sig));

    hexdump(out, strlen(json_sig));
    std::string b64encoded = base64_encode(out, strlen(json_sig));
    printf("base64 encoded: %s\n", b64encoded.c_str());

    std::string urlencoded = urlencode(b64encoded);
    printf("base64 encoded + urlencoded: %s\n", urlencoded.c_str());

    printf("nonce b64 encoded: %s\n", nonceb64encoded.c_str());

    if (signatureArgOut != nullptr)
        strncpy(signatureArgOut, urlencoded.c_str(), 1000);

    if (nonceArgOut != nullptr)
        strncpy(nonceArgOut, nonceb64encoded.c_str(), 1000);

    return 1;
}

int main(int argc, char** argv)
{
    std::string funcArgOne = "";
    std::string funcArgTwo = "";
    std::string fingerprint = "";
    std::string mntValues = "";
    std::string storageValues = "";
    uint32_t signatureConst = 0;

    dword_3E6B4 = 0;

    return doit(funcArgOne, funcArgTwo, fingerprint, mntValues, storageValues, signatureConst, nullptr, nullptr);
}
