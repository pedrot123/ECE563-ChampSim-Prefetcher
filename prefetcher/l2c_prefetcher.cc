#include "cache.h"

void CACHE::l2c_prefetcher_initialize()
{

}

uint32_t CACHE::l2c_prefetcher_operate(uint64_t, uint64_t, uint8_t, uint8_t, uint32_t metadata_in)
{
    return metadata_in;
}

uint32_t CACHE::l2c_prefetcher_cache_fill(uint64_t, uint32_t, uint32_t, uint8_t, uint64_t, uint32_t metadata_in)
{
    return metadata_in;
}

void CACHE::l2c_prefetcher_final_stats()
{

}
