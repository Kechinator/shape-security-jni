#pragma once
extern thread_local int32_t dword_3E6B4;
void fillConst1(uint8_t* outData, uint8_t* inData)
{
	uint8_t v2; // w11
	int v3; // w13
	int v4; // w14

	*(_DWORD*)outData = ((unsigned __int16)(inData[8] | (unsigned __int16)(inData[9] << 8)) | (inData[10] << 16)) & 0xFFFFFF | (inData[11] << 24);
	*(_DWORD*)(outData + 4) = ((unsigned __int16)(inData[28] | (unsigned __int16)(inData[29] << 8)) | (inData[30] << 16)) & 0xFFFFFF | (inData[31] << 24);
	*(_QWORD*)(outData + 8) = 0x14279E1A9C4244A2LL;
	*(_DWORD*)(outData + 16) = *(_DWORD*)inData;
	*(_DWORD*)(outData + 20) = *(_DWORD*)(inData + 12);
	*(_QWORD*)(outData + 24) = 0xDA87DFC004AD9CD8LL;
	*(_DWORD*)(outData + 32) = 0xA9AE6A6D;
	v2 = inData[25];
	*(_DWORD*)(outData + 36) = ~(~(inData[24] | ((unsigned __int8)v2 << 8)) & ~(inData[26] << 16)) & 0xFFFFFF | (inData[27] << 24);
	v3 = *(_DWORD*)(inData + 16);
	*(_DWORD*)(outData + 40) = v3;
	*(_DWORD*)(outData + 44) = *(_DWORD*)(inData + 4);

    v4 = (unsigned __int16)(inData[20] | (unsigned __int16)(inData[21] << 8)) | (inData[22] << 16);
	*(_DWORD*)(outData + 48) = v4 & 0xFFFFFF | (inData[23] << 24);
	*(_QWORD*)(outData + 52) = 0x2E1F1E1241286005LL;
	*(_DWORD*)(outData + 60) = 0x854AA1C;
	dword_3E6B4 = (v4 ^ (v2 | v3)) - (v2 | v3);
}