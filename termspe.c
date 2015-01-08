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
void term_goto(int r, int c)
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

// 光标下移n行
void term_down(int n)
{
	printf("\033[%dB", n);
}

// 光标上移n行
void term_up(int n)
{
	printf("\033[%dA", n);
}

// 光标左移b列
void term_left(int n)
{
	printf("\033[%dD", n);
}

// 光标右移n列
void term_right(int n)
{
	printf("\033[%dC", n);
}

// 开高亮
void term_highlight()
{
	printf("\033[1m");
}

// 下划线
void term_underline()
{
	printf("\033[4m");
}

// 闪烁
void term_flash()
{
	printf("\033[5m");
}

// 反显
void term_invert()
{
	printf("\033[7m");
}

// 消隐
void term_blank()
{
	printf("\033[8m");
}
