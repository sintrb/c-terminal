#include "termspe.h"



int main()
{
	
	term_clear();	// ����
	term_color(47, 31);	// ���ñ���ɫΪ��ɫ ������ɫΪ���
	printf("Hello World\n");
	term_coloroff();	// �ر���ɫ
	
	term_goto(5,8);	// ��ת��5��8��λ��
	printf("I'm Row=5 Col=8");
	
	
	
	
	
	
	
	
	return 0;
}
