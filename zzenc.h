#include <bits/stdint-uintn.h>
#include <stdint-gcc.h>
#include <stdlib.h>

#ifndef ZZENC_ZZENC_H
#define ZZENC_ZZENC_H

void zzenc(const uint8_t* input, int8_t* output, size_t num_bytes);
void zzdec(const int8_t* input, uint8_t* output, size_t num_bytes);

#endif //ZZENC_ZZENC_H
