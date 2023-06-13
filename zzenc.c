#include "zzenc.h"

void zzenc(const uint8_t* input, int8_t* output, size_t num_bytes) {
    for (size_t i = 0; i < num_bytes; i++) {
        output[i] = (input[i] >> 7) ^ (input[i] << 1);
    }
}
void zzdec(const int8_t* input, uint8_t* output, size_t num_bytes) {
    for (size_t i = 0; i < num_bytes; i++) {
        int32_t value = input[i];
        output[i] = (value >> 1) ^ -(value & 1);
    }
}