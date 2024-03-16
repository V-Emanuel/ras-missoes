#include "U8glib.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_DEV_0 | U8G_I2C_OPT_NO_ACK | U8G_I2C_OPT_FAST); // Fast I2C / TWI

// 'contorno_1 - 200ms', 128x64px
const unsigned char epd_bitmap_contorno_1 [] PROGMEM = {
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x84, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x88, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x84, 0x44, 0x00, 0x00, 0x78, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x80, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x9f, 0xff, 0x80, 0x00, 0x0c, 0xcc, 0xcc, 0xec, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x90, 0x00, 0xe0, 0x00, 0x18, 0xdc, 0xdc, 0xd6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x92, 0x00, 0x90, 0x00, 0x30, 0xfc, 0xfc, 0xd6, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x92, 0x00, 0x90, 0x00, 0x60, 0xec, 0xec, 0xd6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x90, 0x00, 0xe0, 0x00, 0xc0, 0xcc, 0xcc, 0xd6, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x92, 0x00, 0x80, 0x00, 0xc0, 0xcc, 0xcc, 0xc6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x88, 0x01, 0x00, 0x00, 0xfc, 0x78, 0x78, 0xc6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x84, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x83, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x02, 0x00, 0x00, 0xfc, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x04, 0x00, 0x00, 0xc0, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x08, 0x00, 0x00, 0xc0, 0xcc, 0xcc, 0xec, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x10, 0x00, 0x00, 0xf8, 0xdc, 0xdc, 0xd6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x3e, 0x00, 0x00, 0x0c, 0xfc, 0xfc, 0xd6, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x02, 0x00, 0x00, 0x0c, 0xec, 0xec, 0xd6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x04, 0x00, 0x00, 0x0c, 0xcc, 0xcc, 0xd6, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x08, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xc6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x10, 0x00, 0x00, 0x78, 0x78, 0x78, 0xc6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7c, 0x10, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xff, 0x21, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xfe, 0xa0, 0x40, 0x61, 0xe1, 0xe1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xfe, 0x68, 0x40, 0xe3, 0x33, 0x33, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0xfc, 0x27, 0x81, 0xe3, 0x33, 0x33, 0x33, 0xb0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x78, 0x42, 0x01, 0x63, 0x73, 0x73, 0x73, 0x59, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x20, 0x4c, 0x00, 0x63, 0xf3, 0xf3, 0xf3, 0x59, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x90, 0x00, 0x63, 0xb3, 0xb3, 0xb3, 0x58, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1f, 0xc7, 0x20, 0x00, 0x63, 0x33, 0x33, 0x33, 0x58, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0c, 0x38, 0x40, 0x00, 0x63, 0x33, 0x33, 0x33, 0x19, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x83, 0x80, 0x00, 0x61, 0xe1, 0xe1, 0xe3, 0x18, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x14, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xf7, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'contorno_2 - 500ms', 128x64px
const unsigned char epd_bitmap_contorno_2 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x44, 0x00, 0x00, 0x78, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1f, 0xff, 0x80, 0x00, 0x0c, 0xcc, 0xcc, 0xec, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xe0, 0x00, 0x18, 0xdc, 0xdc, 0xd6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x90, 0x00, 0x30, 0xfc, 0xfc, 0xd6, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x90, 0x00, 0x60, 0xec, 0xec, 0xd6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xe0, 0x00, 0xc0, 0xcc, 0xcc, 0xd6, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x80, 0x00, 0xc0, 0xcc, 0xcc, 0xc6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x01, 0x00, 0x00, 0xfc, 0x78, 0x78, 0xc6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x83, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x82, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x82, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x84, 0x02, 0x00, 0x00, 0xfc, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x84, 0x04, 0x00, 0x00, 0xc0, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x84, 0x08, 0x00, 0x00, 0xc0, 0xcc, 0xcc, 0xec, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x88, 0x10, 0x00, 0x00, 0xf8, 0xdc, 0xdc, 0xd6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x88, 0x3e, 0x00, 0x00, 0x0c, 0xfc, 0xfc, 0xd6, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x88, 0x02, 0x00, 0x00, 0x0c, 0xec, 0xec, 0xd6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x8f, 0x04, 0x00, 0x00, 0x0c, 0xcc, 0xcc, 0xd6, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x81, 0x08, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xc6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x81, 0x10, 0x00, 0x00, 0x78, 0x78, 0x78, 0xc6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x81, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x81, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7c, 0x10, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xff, 0x21, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xfe, 0xa0, 0x40, 0x61, 0xe1, 0xe1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xfe, 0x68, 0x40, 0xe3, 0x33, 0x33, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0xfc, 0x27, 0x81, 0xe3, 0x33, 0x33, 0x33, 0xb0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x78, 0x42, 0x01, 0x63, 0x73, 0x73, 0x73, 0x59, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x20, 0x4c, 0x00, 0x63, 0xf3, 0xf3, 0xf3, 0x59, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x90, 0x00, 0x63, 0xb3, 0xb3, 0xb3, 0x58, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1f, 0xc7, 0x20, 0x00, 0x63, 0x33, 0x33, 0x33, 0x58, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0c, 0x38, 0x40, 0x00, 0x63, 0x33, 0x33, 0x33, 0x19, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x83, 0x80, 0x00, 0x61, 0xe1, 0xe1, 0xe3, 0x18, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x14, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xf7, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'contorno 3 - 1000ms', 128x64px
const unsigned char epd_bitmap_contorno_3 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x44, 0x00, 0x00, 0x78, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1f, 0xff, 0x80, 0x00, 0x0c, 0xcc, 0xcc, 0xec, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xe0, 0x00, 0x18, 0xdc, 0xdc, 0xd6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x90, 0x00, 0x30, 0xfc, 0xfc, 0xd6, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x90, 0x00, 0x60, 0xec, 0xec, 0xd6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xe0, 0x00, 0xc0, 0xcc, 0xcc, 0xd6, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x80, 0x00, 0xc0, 0xcc, 0xcc, 0xc6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x01, 0x00, 0x00, 0xfc, 0x78, 0x78, 0xc6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x02, 0x00, 0x00, 0xfc, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x04, 0x00, 0x00, 0xc0, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x08, 0x00, 0x00, 0xc0, 0xcc, 0xcc, 0xec, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x10, 0x00, 0x00, 0xf8, 0xdc, 0xdc, 0xd6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x3e, 0x00, 0x00, 0x0c, 0xfc, 0xfc, 0xd6, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x02, 0x00, 0x00, 0x0c, 0xec, 0xec, 0xd6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x04, 0x00, 0x00, 0x0c, 0xcc, 0xcc, 0xd6, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x08, 0x00, 0x00, 0xcc, 0xcc, 0xcc, 0xc6, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x10, 0x00, 0x00, 0x78, 0x78, 0x78, 0xc6, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x80, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x80, 0x7c, 0x10, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x80, 0xff, 0x21, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x81, 0xfe, 0xa0, 0x40, 0x61, 0xe1, 0xe1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x83, 0xfe, 0x68, 0x40, 0xe3, 0x33, 0x33, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x82, 0xfc, 0x27, 0x81, 0xe3, 0x33, 0x33, 0x33, 0xb0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x84, 0x78, 0x42, 0x01, 0x63, 0x73, 0x73, 0x73, 0x59, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x84, 0x20, 0x4c, 0x00, 0x63, 0xf3, 0xf3, 0xf3, 0x59, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x84, 0x00, 0x90, 0x00, 0x63, 0xb3, 0xb3, 0xb3, 0x58, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x9f, 0xc7, 0x20, 0x00, 0x63, 0x33, 0x33, 0x33, 0x58, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x8c, 0x38, 0x40, 0x00, 0x63, 0x33, 0x33, 0x33, 0x19, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x83, 0x83, 0x80, 0x00, 0x61, 0xe1, 0xe1, 0xe3, 0x18, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x81, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x81, 0x14, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x81, 0xf7, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
  0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00
};

int intervals[] = { 200, 500, 1000 }; //array de intervalos
const int epd_bitmap_allArray_LEN = 3; //tamanho do array de intervalos
const unsigned char* epd_bitmap_allArray[3] = { //array com as imagens que serão impressas no display
  epd_bitmap_contorno_1,
  epd_bitmap_contorno_2,
  epd_bitmap_contorno_3
};

#define LED_PIN 13 //pino de saída do led

void setup() {
  u8g.setFont(u8g_font_tpssb); //configurações do display
  u8g.setColorIndex(1);

  pinMode(LED_PIN, OUTPUT); //seta o pino do led
}

void loop() {
  u8g.firstPage();


  for (int i = 0; i < epd_bitmap_allArray_LEN; i++) {
    for (int j = 0; j < 5; j++) {
      drawBitmap(i); //imprime a frequência de tempo do led
      digitalWrite(LED_PIN, HIGH); //pino de saída do led
      delay(intervals[i]); //espera o intervalo de tempo da vez
      digitalWrite(LED_PIN, LOW); //apaga o led
      delay(intervals[i]); //espera novamente o intervalo de tempo da vez
    }
  }

}

//função que realiza a troca da imagem de acordo com a frequência da vez
void drawBitmap(int i) {
  u8g.firstPage();
  do {
    u8g.drawBitmapP(0, 0, 128 / 8, 64, epd_bitmap_allArray[i]);
  } while (u8g.nextPage());
}
