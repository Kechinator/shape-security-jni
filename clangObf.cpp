#include "defs.h"
#include <cstdint>
#include "stdio.h"
#include <string>
#include <algorithm>

#include "fillConst1.h"
#include "bigobf1.h"

void hexdump(uint8_t* data, size_t len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i > 1 && i % 16 == 0)
			printf("\n");

		printf("%02x ", data[i]);
	}
	printf("\n");
}

int testConstReplaceObf1(void)
{
  	uint8_t constantReplaceIn[64] = { 0x5d, 0x6e, 0x7b, 0x53, 0x72, 0x79, 0x7d, 0x7d, 0x7d, 0x7d, 0x7d, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c };
    uint8_t constantReplaceOut[64] = {0};
    // output of constant replace
    uint8_t in[] = {0x7d, 0x7d, 0x7d, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xa2, 0x44, 0x42, 0x9c, 0x1a, 0x9e, 0x27, 0x14, 0x5d, 0x6e, 0x7b, 0x53, 0x1c, 0x1c, 0x1c, 0x1c, 0xd8, 0x9c, 0xad, 0x04, 0xc0, 0xdf, 0x87, 0xda, 0x6d, 0x6a, 0xae, 0xa9, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x72, 0x79, 0x7d, 0x7d, 0x1c, 0x1c, 0x1c, 0x1c, 0x05, 0x60, 0x28, 0x41, 0x12, 0x1e, 0x1f, 0x2e, 0x1c, 0xaa, 0x54, 0x08};

    fillConst1(constantReplaceOut, constantReplaceIn);
    printf("Constant replace out:\n");
    printf("---------------------------------------------\n");
    hexdump(constantReplaceOut, sizeof(constantReplaceOut));
    printf("---------------------------------------------\n");

    uint8_t obfuscateOut[64] = {0};
    bigobf1((uint32_t*)constantReplaceOut, (uint32_t*)obfuscateOut);

    printf("Obfuscate out:\n");
    printf("---------------------------------------------\n");
    hexdump(obfuscateOut, sizeof(obfuscateOut));
    printf("---------------------------------------------\n");
    return 1;
}


__int64 __fastcall shuffle1(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // x0
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 j; // x8
  __int64 v11; // x9
  char v12; // w10
  int v13; // w8
  __int64 v14; // x10
  char v15; // w11
  __int64 v16; // x22
  char v17; // [xsp+23h] [xbp-BDh]
  int i; // [xsp+24h] [xbp-BCh]
  char v19; // [xsp+2Ah] [xbp-B6h]
  char v20[64]; // [xsp+38h] [xbp-A8h] BYREF
  char v21[64]; // [xsp+78h] [xbp-68h] BYREF
  // int v22; // [xsp+9Ch] [xbp-44h]
  // __int64 v23; // [xsp+B8h] [xbp-28h]

  fillConst1((uint8_t*)v21, (uint8_t*)a1);

  // printf("------------------------------\n");
  // printf("After fillConst1:\n");
  // hexdump((uint8_t*)v21, 64);
  // printf("------------------------------\n\n\n");

  if ( !a4 )
  {
    v17 = 1;
    goto LABEL_9;
  }
  for ( i = 2; ; i = 1 )
  {
    v13 = i == 1 ? 2 : 1;
    if ( v13 != 1 )
      break;
    v17 = 0;
LABEL_9:
    v19 = v17;
  }
  if ( (v19 & 1) == 0 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      // printf("------------------------------\n");
      // printf("Input bigobf1:\n");
      // hexdump((uint8_t*)v21, 64);
      // printf("------------------------------\n");
      bigobf1((_DWORD*)v21, (_DWORD*)v20);
      // printf("------------------------------\n");
      // printf("Output bigobf1:\n");
      // hexdump((uint8_t*)v20, 64);
      // printf("------------------------------\n\n\n");


      if ( a4 < 0x41 )
        break;
      for ( j = 0LL; j != 64; ++j )
      {
        v11 = j + v16;
        v12 = v20[j] ^ *(_BYTE *)(a2 + j + v16);
        if ( j + v16 )
          v12 ^= *(_BYTE *)(a2 + v11 - 1);
        *(_BYTE *)(a3 + v11) = v12;
      }
      a4 -= 64LL;
      v16 += 64LL;
      *(int*)(v21 + 36) += 58;
      if ( !a4 )
        goto LABEL_3;
    }
    v9 = (unsigned int)v16 & 0xFFFFFFC0;
    v8 = 0LL;
    do
    {
      v14 = v8 + v9;
      v15 = v20[v8] ^ *(_BYTE *)(a2 + v8 + v9);
      if ( v8 + v9 )
        v15 ^= *(_BYTE *)(a2 + (((v14 << 32) - 0x100000000LL) >> 32));
      *(_BYTE *)(a3 + v14) = v15;
      ++v8;
    }
    while ( v8 != a4 );
  }
LABEL_3:
  return result;
}

void doShuffle(uint8_t* nonce, const char* s, uint8_t* out, bool isPMode)
{
    shuffle1((__int64)nonce, (__int64) s, (__int64)out, (unsigned __int64)strlen(s));
}
