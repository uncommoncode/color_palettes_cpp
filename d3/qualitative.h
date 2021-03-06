#pragma once
#include <stdint.h>

namespace color_palettes {
typedef uint32_t rgb888_t;
namespace d3 {
// These color palettes were developed by Mike Bostock et. al. (https://github.com/d3/d3-color/ and https://github.com/d3/d3)
namespace qualitative {
const rgb888_t kCategory10[10] = {0x1f77b4,0xff7f0e,0x2ca02c,0xd62728,0x9467bd,0x8c564b,0xe377c2,0x7f7f7f,0xbcbd22,0x17becf};
const rgb888_t kCategory20[20] = {0x1f77b4,0xaec7e8,0xff7f0e,0xffbb78,0x2ca02c,0x98df8a,0xd62728,0xff9896,0x9467bd,0xc5b0d5,0x8c564b,0xc49c94,0xe377c2,0xf7b6d2,0x7f7f7f,0xc7c7c7,0xbcbd22,0xdbdb8d,0x17becf,0x9edae5};
const rgb888_t kCategoryC20[20] = {0x3182bd,0x6baed6,0x9ecae1,0xc6dbef,0xe6550d,0xfd8d3c,0xfdae6b,0xfdd0a2,0x31a354,0x74c476,0xa1d99b,0xc7e9c0,0x756bb1,0x9e9ac8,0xbcbddc,0xdadaeb,0x636363,0x969696,0xbdbdbd,0xd9d9d9};
const rgb888_t kCategoryB20[20] = {0x393b79,0x5254a3,0x6b6ecf,0x9c9ede,0x637939,0x8ca252,0xb5cf6b,0xcedb9c,0x8c6d31,0xbd9e39,0xe7ba52,0xe7cb94,0x843c39,0xad494a,0xd6616b,0xe7969c,0x7b4173,0xa55194,0xce6dbd,0xde9ed6};
} // namespace qualitative
} // namespace d3
} // namespace color_palettes