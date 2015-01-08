#ifndef _TERMSPE_H
#define _TERMSPE_H
#include <stdio.h>

// 清屏
void term_clear(void);

// 跳转光标到x列,y行
void term_goto(int x, int y);

// 关闭光标显示
void term_curoff(void);

// 设置背景色前景色
// bg背景色：40:黑, 41:深红, 42:绿, 43:黄色, 44:蓝色, 45:紫色, 46:深绿, 47:白色
// fg前景色：30:黑, 31:红, 32:绿, 33:黄, 34:蓝色, 35:紫色, 36:深绿, 37:白色
void term_color(unsigned char bg, unsigned char fg);

// 关闭颜色
void term_coloroff(void);

// 保存光标位置
void term_savecur(void);

// 恢复光标位置
void term_resumecur(void);

#endif // _TERMSPE_H
