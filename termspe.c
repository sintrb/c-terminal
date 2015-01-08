/**
 * GNU GENERAL PUBLIC LICENSE V2
 */

#include "termspe.h"

// 清屏
void term_clear(void)
{
  printf("\033[2J");
}

// 跳转光标到r行c列
void term_goto(int r, int c);
{
  printf("\033[%d;%df",r,c);
}

// 关闭光标显示
void term_curoff(void)
{
  printf("\033[?25l");
}

// 设置背景色前景色
// bg背景色：40:黑, 41:深红, 42:绿, 43:黄色, 44:蓝色, 45:紫色, 46:深绿, 47:白色
// fg前景色：30:黑, 31:红, 32:绿, 33:黄, 34:蓝色, 35:紫色, 36:深绿, 37:白色
void term_color(unsigned char bg, unsigned char fg)
{
  printf("\033[%d;%dm", bg, fg);
}

// 关闭颜色
void term_coloroff()
{
  printf("\033[0m");
}

// 保存光标位置
void term_savecur(void)
{
	printf("\033[s");
}

// 恢复光标位置
void term_resumecur(void)
{
	printf("\033[u");
}

