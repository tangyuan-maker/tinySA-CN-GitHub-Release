#ifndef CHINESE_FONT_H
#define CHINESE_FONT_H
#include <stdint.h>
typedef struct { uint32_t codepoint; uint8_t width; uint8_t height; const uint8_t *data; } cn_glyph_t;
const cn_glyph_t *cn_font_find(uint32_t codepoint);
/* 12x12 high-contrast Noto Sans CJK SC glyphs, row-major packed MSB-first. */
#define CN_BITMAP_WIDTH 12
#define CN_BITMAP_HEIGHT 12
#define CN_FONT_WIDTH 13
#define CN_FONT_HEIGHT 12
#define CN_FONT_STR_HEIGHT 14
#endif
