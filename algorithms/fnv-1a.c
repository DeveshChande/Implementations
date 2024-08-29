#include <stdint.h>

// FNV-1a 32-bit hash function for strings
uint32_t fnv1a_32(const char *key, uint32_t len) {
    uint32_t hash = 2166136261u;
    uint32_t i;

    for (i = 0; i < len; i++) {
        hash ^= (uint8_t)key[i];
        hash *= 16777619;
    }

    return hash;
}

// FNV-1a 32-bit hash function for integers
uint32_t fnv1a_32_int(uint32_t num) {
    uint32_t hash = 2166136261u;
    uint8_t *bytes = (uint8_t *)&num;  // Treat the integer as an array of bytes

    for (size_t i = 0; i < sizeof(uint32_t); i++) {
        hash ^= bytes[i];
        hash *= 16777619;
    }

    return hash;
}
