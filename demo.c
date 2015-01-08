#include "termspe.h"



int main()
{
	
	term_clear();	// 清屏
	term_color(47, 31);	// 设置背景色为白色 字体颜色为深红
	printf("Hello World\n");
	term_coloroff();	// 关闭颜色
	
	term_goto(5,8);	// 跳转到5行8列位置
	printf("I'm Row=5 Col=8");
	
	
	
	
	
	
	
	
	return 0;
}
