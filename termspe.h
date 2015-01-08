#ifndef _TERMSPE_H
#define _TERMSPE_H
#include <stdio.h>

// 清屏
void term_clear(void);

// 跳转光标到r行c列
void term_goto(int r, int c);

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

// 光标下移n行
void term_down(int n);

// 光标上移n行
void term_up(int n);

// 光标左移b列
void term_left(int n);

// 光标右移n列
void term_right(int n);

// 开高亮
void term_highlight();

// 下划线
void term_underline();

// 闪烁
void term_flash();

// 反显
void term_invert();

// 消隐
void term_blank();


#endif // _TERMSPE_H
