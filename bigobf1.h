#pragma once
extern thread_local int32_t dword_3E6B4;
void __fastcall bigobf1(_DWORD *input, _DWORD *output)
{
  __int128 v2; // q0
  __int128 v3; // q1
  __int128 v4; // q2
  int v5; // w8
  int v6; // w11
  __int64 v7; // x8
  int v8; // w8
  int v9; // w10
  unsigned __int64 v10; // t2
  int v11; // w12
  int v12; // w11
  int v13; // w10
  unsigned __int64 v14; // t2
  unsigned int v15; // w8
  int v16; // w9
  int v17; // w10
  unsigned int v18; // w10
  unsigned __int64 v19; // t2
  int v20; // w11
  int v21; // w10
  int v22; // w9
  int v23; // w8
  unsigned int v24; // w10
  int v25; // w8
  int v26; // w8
  int v27; // w10
  int v28; // w9
  int v29; // w13
  int v30; // w9
  int v31; // w9
  int v32; // w10
  int v33; // w12
  int v34; // w8
  int v35; // w17
  int v36; // w15
  int v37; // w11
  int v38; // w14
  int v39; // w2
  int v40; // w16
  int v41; // w13
  int v42; // w6
  int v43; // w7
  unsigned int v44; // w3
  int v45; // w5
  unsigned int v46; // w19
  int v47; // w4
  int j; // [xsp+8h] [xbp-298h]
  bool v49; // [xsp+Fh] [xbp-291h]
  int v50; // [xsp+2Ch] [xbp-274h]
  unsigned int v51; // [xsp+30h] [xbp-270h]
  int v52; // [xsp+38h] [xbp-268h]
  int v53; // [xsp+3Ch] [xbp-264h]
  int v54; // [xsp+40h] [xbp-260h]
  int v55; // [xsp+44h] [xbp-25Ch]
  int v56; // [xsp+4Ch] [xbp-254h]
  int v57; // [xsp+50h] [xbp-250h]
  int v58; // [xsp+5Ch] [xbp-244h]
  int v59; // [xsp+70h] [xbp-230h]
  int v60; // [xsp+9Ch] [xbp-204h]
  int v61; // [xsp+C0h] [xbp-1E0h]
  int v62; // [xsp+C8h] [xbp-1D8h]
  int v63; // [xsp+CCh] [xbp-1D4h]
  int v64; // [xsp+D8h] [xbp-1C8h]
  int v65; // [xsp+E0h] [xbp-1C0h]
  unsigned int v66; // [xsp+E8h] [xbp-1B8h]
  unsigned int v67; // [xsp+ECh] [xbp-1B4h]
  int v68; // [xsp+F8h] [xbp-1A8h]
  int v69; // [xsp+100h] [xbp-1A0h]
  int v70; // [xsp+108h] [xbp-198h]
  int v71; // [xsp+10Ch] [xbp-194h]
  int v72; // [xsp+118h] [xbp-188h]
  int v73; // [xsp+120h] [xbp-180h]
  int v74; // [xsp+128h] [xbp-178h]
  int v75; // [xsp+12Ch] [xbp-174h]
  int v76; // [xsp+138h] [xbp-168h]
  unsigned int v77; // [xsp+13Ch] [xbp-164h]
  bool v78; // [xsp+147h] [xbp-159h]
  int v79; // [xsp+17Ch] [xbp-124h]
  int v80; // [xsp+180h] [xbp-120h]
  int v81; // [xsp+184h] [xbp-11Ch]
  int v82; // [xsp+18Ch] [xbp-114h]
  int v83; // [xsp+198h] [xbp-108h]
  int v84; // [xsp+1BCh] [xbp-E4h]
  int v85; // [xsp+1C0h] [xbp-E0h]
  int v86; // [xsp+1C4h] [xbp-DCh]
  int v87; // [xsp+1CCh] [xbp-D4h]
  int v88; // [xsp+1D0h] [xbp-D0h]
  int v89; // [xsp+1D4h] [xbp-CCh]
  int i; // [xsp+1E0h] [xbp-C0h]
  int v91; // [xsp+1F8h] [xbp-A8h]
  __int128 v92; // [xsp+230h] [xbp-70h]
  __int128 v93; // [xsp+240h] [xbp-60h]
  __int128 v94; // [xsp+250h] [xbp-50h]
  __int128 v95; // [xsp+260h] [xbp-40h]
  __int64 v96; // [xsp+278h] [xbp-28h]

  v2 = *(__int128_t *)input;
  v3 = *((__int128_t *)input + 1);
  v4 = *((__int128_t *)input + 2);
  v95 = *((__int128_t *)input + 3);
  v94 = v4;
  v93 = v3;
  v92 = v2;
  v31 = DWORD1(v2);
  v32 = v2;
  v33 = DWORD2(v2);
  v34 = HIDWORD(v2);
  v35 = HIDWORD(v3);
  v36 = DWORD2(v3);
  v37 = DWORD1(v3);
  v38 = v3;
  v39 = DWORD1(v4);
  v40 = v4;
  v41 = HIDWORD(v4);
  v42 = DWORD2(v4);
  v43 = v95;
  v44 = HIDWORD(v95);
  v45 = DWORD1(v95);
  v46 = 18;
  v47 = DWORD2(v95);
  do
  {
    v60 = v41;
    v59 = v37;
    v53 = v32;
    v52 = v34;
    v55 = v32 + v31;
    v51 = v33 & ~(v32 + v31) | (v32 + v31) & ~v33;
    v50 = 1;
    while ( v50 + 1 < 3 )
    {
      v8 = (v51 << 19) | (v51 >> 13);
      HIDWORD(v10) = (v8 + v52) ^ v53;
      LODWORD(v10) = HIDWORD(v10);
      v9 = v10 >> 18;
      v54 = v9 + v55;
      HIDWORD(v10) = (v9 + v55) ^ v8;
      LODWORD(v10) = HIDWORD(v10);
      v56 = v10 >> 29;
      v57 = v56 + v8 + v52;
      HIDWORD(v10) = v57 ^ v9;
      LODWORD(v10) = v57 ^ v9;
      v58 = v10 >> 22;
      v15 = ((v59 ^ (v36 + v35)) << 19) | ((v59 ^ (unsigned int)(v36 + v35)) >> 13);
      v16 = v15 + v38;
      HIDWORD(v10) = (v15 + v38) ^ v36;
      LODWORD(v10) = HIDWORD(v10);
      v17 = v10 >> 18;
      v87 = v17 + v36 + v35;
      HIDWORD(v10) = v87 ^ v15;
      LODWORD(v10) = v87 ^ v15;
      v5 = v10 >> 29;
      v80 = v5 + v16;
      HIDWORD(v10) = (v5 + v16) ^ v17;
      LODWORD(v10) = HIDWORD(v10);
      v84 = v10 >> 22;
      HIDWORD(v10) = v60 ^ (v40 + v39);
      LODWORD(v10) = HIDWORD(v10);
      v6 = v10 >> 13;
      HIDWORD(v10) = (v6 + v42) ^ v40;
      LODWORD(v10) = HIDWORD(v10);
      v29 = v10 >> 18;
      v86 = v29 + v40 + v39;
      HIDWORD(v10) = v86 ^ v6;
      LODWORD(v10) = v86 ^ v6;
      v30 = v10 >> 29;
      v89 = v30 + v6 + v42;
      HIDWORD(v10) = v89 ^ v29;
      LODWORD(v10) = v89 ^ v29;
      v82 = v10 >> 22;
      HIDWORD(v10) = v45 ^ (v44 + v43);
      LODWORD(v10) = HIDWORD(v10);
      v11 = v10 >> 13;
      HIDWORD(v10) = (v11 + v47) ^ v44;
      LODWORD(v10) = HIDWORD(v10);
      v12 = v10 >> 18;
      v88 = v12 + v44 + v43;
      HIDWORD(v10) = v88 ^ v11;
      LODWORD(v10) = v88 ^ v11;
      v85 = v10 >> 29;
      v13 = v85 + v11 + v47;
      HIDWORD(v10) = v13 ^ v12;
      LODWORD(v10) = v13 ^ v12;
      v81 = v10 >> 22;
      v20 = v5 + v57;
      HIDWORD(v10) = v13 ^ (v5 + v57);
      LODWORD(v10) = HIDWORD(v10);
      v21 = v10 >> 13;
      v22 = v21 + v30;
      HIDWORD(v10) = v22 ^ v5;
      LODWORD(v10) = v22 ^ v5;
      v23 = v10 >> 18;
      v61 = v23 + v20;
      HIDWORD(v10) = (v23 + v20) ^ v21;
      LODWORD(v10) = HIDWORD(v10);
      v62 = v10 >> 29;
      v63 = v62 + v22;
      HIDWORD(v10) = (v62 + v22) ^ v23;
      LODWORD(v10) = HIDWORD(v10);
      v64 = v10 >> 22;
      dword_3E6B4 = (v62 ^ HIDWORD(v10)) - HIDWORD(v10);
      v79 = 2;
      while ( 1 )
      {
        v25 = v79 == 1 ? 2 : 1;
        if ( v25 != 1 )
          break;
        HIDWORD(v19) = v81 ^ (v80 + v54);
        LODWORD(v19) = HIDWORD(v19);
        v18 = v19 >> 13;
        HIDWORD(v19) = (v18 + v82) ^ v80;
        LODWORD(v19) = HIDWORD(v19);
        v83 = v19 >> 18;
        v65 = v83 + v80 + v54;
        v66 = (8 * (v65 ^ v18)) | ((v65 ^ v18) >> 29);
        v67 = v66 + v18 + v82;
        for ( i = 1; i == 1; i = 2 )
        {
          HIDWORD(v14) = v67 ^ v83;
          LODWORD(v14) = v67 ^ v83;
          v68 = v14 >> 22;
          HIDWORD(v14) = v85 ^ (v84 + v58);
          LODWORD(v14) = HIDWORD(v14);
          v91 = v14 >> 13;
          HIDWORD(v14) = (v91 + v86) ^ v84;
          LODWORD(v14) = HIDWORD(v14);
          v26 = v14 >> 18;
          v69 = v26 + v84 + v58;
          HIDWORD(v14) = v69 ^ v91;
          LODWORD(v14) = v69 ^ v91;
          v70 = v14 >> 29;
          v71 = v70 + v91 + v86;
          HIDWORD(v14) = v71 ^ v26;
          LODWORD(v14) = v71 ^ v26;
          v72 = v14 >> 22;
          HIDWORD(v14) = v88 ^ (v87 + v56);
          LODWORD(v14) = HIDWORD(v14);
          v27 = v14 >> 13;
          HIDWORD(v14) = (v27 + v89) ^ v87;
          LODWORD(v14) = HIDWORD(v14);
          v28 = v14 >> 18;
          v73 = v28 + v87 + v56;
          HIDWORD(v14) = v73 ^ v27;
          LODWORD(v14) = v73 ^ v27;
          v74 = v14 >> 29;
          v75 = v74 + v27 + v89;
          HIDWORD(v14) = v75 ^ v28;
          LODWORD(v14) = v75 ^ v28;
          v76 = v14 >> 22;
          v77 = v46 - 2;
          v78 = v46 > 2;
          v50 = 2;
          v79 = 1;
        }
      }
    }
    v34 = v61;
    v47 = v62;
    v41 = v63;
    v37 = v64;
    v31 = v65;
    v44 = v66;
    v40 = v67;
    v38 = v68;
    v32 = v69;
    v45 = v70;
    v39 = v71;
    v36 = v72;
    v33 = v73;
    v43 = v74;
    v42 = v75;
    v35 = v76;
    v46 = v77;
  }
  while ( v78 );


  // printf("before assign shit:\n");
//   hexdump((uint8_t*) &v92, 64);

  int values[16] = {v69, v65, v73, v61, v68, v64, v72, v76, (int)v67, v71, v75, v63, v74, v70, v62, (int)v66};

  uint32_t fixedOut[16] = {0};
  for (int i = 0; i < 16; ++i)
  {
    // printf("%d: input: 0x%x + 0x%x = 0x%x\n", i, input[i], values[i], input[i] + values[i]);
    uint32_t res = input[i] + values[i];
    fixedOut[i] = res;
    dword_3E6B4 = res | HIBYTE(res);
  }

//   hexdump((uint8_t*)fixedOut, sizeof(fixedOut));
  memcpy(output, fixedOut, sizeof(fixedOut));


//   LODWORD(v92) = *input + v69;
//   DWORD1(v92) = input[1] + v65;
//   DWORD2(v92) = input[2] + v73;
//   HIDWORD(v92) = input[3] + v61;
//   LODWORD(v93) = input[4] + v68;
//   DWORD1(v93) = input[5] + v64;
//   DWORD2(v93) = input[6] + v72;
//   HIDWORD(v93) = input[7] + v76;
//   LODWORD(v94) = input[8] + v67;
//   DWORD1(v94) = input[9] + v71;
//   DWORD2(v94) = input[10] + v75;
//   HIDWORD(v94) = input[11] + v63;
//   LODWORD(v95) = input[12] + v74;
//   DWORD1(v95) = input[13] + v70;
//   DWORD2(v95) = input[14] + v62;
//   HIDWORD(v95) = input[15] + v66;

//   printf("after assign shit:\n");
//   hexdump((uint8_t*) &v92, 64);
// printf("--------------------\n");


//   *output = v92;
//   v7 = 1LL;

//   for (int i = 1; i < 16; ++i)
//   {
//     uint32_t res = *((_DWORD *)&v92 + i);
//     output[i] = res;
//     dword_3E6B4 = res | HIBYTE(res);
//   }

//   do
//   {
//     v24 = *((_DWORD *)&v92 + v7);
//     output[v7] = v24;
//     dword_3E6B4 = v24 | HIBYTE(v24);
//     v49 = v7 == 15;
//     ++v7;
//   }
//   while ( !v49 );
}