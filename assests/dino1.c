#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_PICTURE_COMPRESS
#define LV_ATTRIBUTE_IMG_PICTURE_COMPRESS
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_PICTURE_COMPRESS uint8_t picture_compress_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0xfe, 0xfe, 0x00, 0x00, 
  0x00, 0xc6, 0xc2, 0x00, 0x00, 
  0x00, 0xce, 0xce, 0x00, 0x00, 
  0x00, 0xc7, 0xce, 0x00, 0x00, 
  0x00, 0xc7, 0xcc, 0x00, 0x00, 
  0x03, 0xc1, 0x0c, 0x00, 0x00, 
  0x03, 0xc1, 0x0c, 0x00, 0x00, 
  0x07, 0x00, 0x0c, 0x00, 0x00, 
  0x04, 0x00, 0x0c, 0x00, 0x00, 
  0x1c, 0x00, 0x0e, 0x00, 0x00, 
  0x78, 0x00, 0x03, 0x80, 0x00, 
  0x78, 0x00, 0x03, 0x80, 0x00, 
  0xe0, 0x00, 0x01, 0x80, 0x00, 
  0xe0, 0x00, 0x01, 0x80, 0x00, 
  0x80, 0x00, 0x01, 0xe0, 0x00, 
  0x80, 0x00, 0x00, 0x60, 0x00, 
  0x80, 0x00, 0x00, 0x60, 0x00, 
  0x83, 0xc0, 0x00, 0x7c, 0x00, 
  0x83, 0xc0, 0x00, 0x64, 0x00, 
  0x87, 0xe0, 0x00, 0x64, 0x00, 
  0x87, 0xe0, 0x00, 0x04, 0x00, 
  0x9c, 0x3c, 0x00, 0x04, 0x00, 
  0x98, 0x0f, 0x00, 0x7c, 0x00, 
  0x98, 0x0f, 0x00, 0x7f, 0x80, 
  0xf8, 0x01, 0xc0, 0x7f, 0x80, 
  0xf8, 0x01, 0xc0, 0x00, 0x80, 
  0x00, 0x00, 0xc0, 0x3f, 0xf0, 
  0x00, 0x00, 0xc0, 0x3f, 0xf0, 
  0x00, 0x00, 0xc0, 0x00, 0x10, 
  0x00, 0x00, 0xc0, 0x00, 0x10, 
  0x00, 0x00, 0xc0, 0x00, 0x10, 
  0x00, 0x00, 0xc0, 0x00, 0x10, 
  0x00, 0x00, 0xc0, 0x00, 0x10, 
  0x00, 0x00, 0xc0, 0x00, 0x10, 
  0x00, 0x00, 0xc7, 0x00, 0x10, 
  0x00, 0x00, 0xc7, 0x00, 0x10, 
  0x00, 0x00, 0xc0, 0x00, 0x10, 
  0x00, 0x00, 0xf0, 0x00, 0x70, 
  0x00, 0x00, 0xf0, 0x00, 0x70, 
  0x00, 0x00, 0x3f, 0xff, 0xe0, 
};

const lv_img_dsc_t picture_compress = {
  .header.always_zero = 0,
  .header.w = 36,
  .header.h = 40,
  .data_size = 209,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = picture_compress_map,
};
