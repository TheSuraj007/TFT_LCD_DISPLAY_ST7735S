
#ifndef __FONTS_H__
#define __FONTS_H__

#include <stdint.h>

typedef struct {
    const uint8_t width;
    uint8_t height;
    const uint8_t column;
    const uint8_t *data;
} FontDef;


extern FontDef Font_8x9;
extern FontDef Font_24x15;

#endif // __FONTS_H__
