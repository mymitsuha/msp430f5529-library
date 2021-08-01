#ifndef _FONT_H_
#define _FONT_H_
/*
说明:中文汉字编码 16*16 行列式编码,每32个字节组成一个汉字,
     前16个字节是上半部分,后16个字节是下半部分,字节顺序
*/
const unsigned char CHINESE_16X16[][32] =
{
/*--  文字:  三  --*/
/*--  仿宋11;  此字体下对应的点阵为：宽x高=16x15   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=16x16  --*/
0x00,0x00,0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x8C,0x84,0x8C,0x08,0x00,0x00,0x00,
0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,

/*--  文字:  峡  --*/
/*--  仿宋11;  此字体下对应的点阵为：宽x高=16x15   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=16x16  --*/
0x00,0xE0,0xE2,0xFE,0xFC,0xF0,0x50,0xD0,0xFE,0xFE,0xF2,0xF0,0x50,0x00,0x00,0x00,
0x00,0x07,0x07,0x47,0x67,0x77,0x3A,0x1F,0x07,0x07,0x1D,0x39,0x61,0x61,0x40,0x00,

/*--  文字:  大  --*/
/*--  仿宋11;  此字体下对应的点阵为：宽x高=16x15   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=16x16  --*/
0x00,0x40,0x40,0x40,0x40,0x40,0xF0,0xFE,0xDE,0x40,0x40,0x60,0x60,0x40,0x00,0x00,
0x00,0x40,0x60,0x30,0x1C,0x0F,0x07,0x01,0x03,0x0F,0x3C,0x30,0x20,0x20,0x20,0x00,

/*--  文字:  学  --*/
/*--  仿宋11;  此字体下对应的点阵为：宽x高=16x15   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=16x16  --*/
0x00,0x40,0x70,0xB4,0xBC,0xB8,0xA6,0xAE,0xB8,0xFC,0xFE,0x72,0x70,0x10,0x00,0x00,
0x00,0x04,0x04,0x04,0x14,0x34,0x27,0x3F,0x3F,0x02,0x02,0x02,0x02,0x02,0x00,0x00,
/*--  文字:  飞  --*/
/*--  仿宋11;  此字体下对应的点阵为：宽x高=16x15   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=16x16  --*/
0x00,0x08,0x08,0x08,0x0C,0x0C,0x04,0xFC,0xFC,0xE0,0xB8,0x98,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x1C,0x38,0x30,0x3C,0x3C,0x00,0x00,

/*--  文字:  思  --*/
/*--  仿宋11;  此字体下对应的点阵为：宽x高=16x15   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=16x16  --*/
0x00,0x00,0x00,0xFE,0xFE,0xA4,0xB4,0xFC,0xFC,0xF4,0xFE,0xFE,0x00,0x00,0x00,0x00,
0x00,0x10,0x1C,0x0E,0x0E,0x1C,0x3B,0x37,0x26,0x38,0x3A,0x26,0x0E,0x0C,0x00,0x00,

/*--  文字:  卡  --*/
/*--  仿宋11;  此字体下对应的点阵为：宽x高=16x15   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=16x16  --*/
0x00,0x80,0x80,0x80,0x80,0x80,0xFE,0xFE,0x92,0x90,0xD8,0x58,0x40,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x03,0x02,0x06,0x04,0x00,0x00,0x00,0x00,

/*--  文字:  尔  --*/
/*--  仿宋11;  此字体下对应的点阵为：宽x高=16x15   --*/
/*--  高度不是8的倍数，现调整为：宽度x高度=16x16  --*/
0x00,0x00,0xC0,0xE0,0xF8,0x9E,0x16,0xF2,0xF0,0x90,0x70,0x78,0x18,0x10,0x00,0x00,
0x00,0x11,0x19,0x0E,0x07,0x13,0x31,0x3F,0x3F,0x01,0x03,0x07,0x06,0x04,0x00,0x00,

};

const unsigned char *FONT_CHINESE_TABLE[] =
{
  "三",
  "峡",
  "大",
  "学",
  "飞",
  "思",
  "卡",
  "尔",
};
#endif
