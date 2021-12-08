#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_PICTURE_COMPRESS (2)
#define LV_ATTRIBUTE_IMG_PICTURE_COMPRESS (2)
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_PICTURE_COMPRESS (2) uint8_t picture_compress (2)_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x1c, 
  0x1c, 
  0x18, 
  0x18, 
  0x18, 
  0x3c, 
  0x7e, 
  0x5a, 
  0x5a, 
  0x5a, 
  0x5a, 
  0x58, 
  0x18, 
  0x18, 
  0x18, 
};

const lv_img_dsc_t picture_compress (2) = {
  .header.always_zero = 0,
  .header.w = 8,
  .header.h = 15,
  .data_size = 24,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = picture_compress (2)_map,
};
