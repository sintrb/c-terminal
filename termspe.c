/**
 * GNU GENERAL PUBLIC LICENSE V2
 */

#include "termspe.h"

// ����
void term_clear(void)
{
  printf("\033[2J");
}

// ��ת��굽r��c��
void term_goto(int r, int c);
{
  printf("\033[%d;%df",r,c);
}

// �رչ����ʾ
void term_curoff(void)
{
  printf("\033[?25l");
}

// ���ñ���ɫǰ��ɫ
// bg����ɫ��40:��, 41:���, 42:��, 43:��ɫ, 44:��ɫ, 45:��ɫ, 46:����, 47:��ɫ
// fgǰ��ɫ��30:��, 31:��, 32:��, 33:��, 34:��ɫ, 35:��ɫ, 36:����, 37:��ɫ
void term_color(unsigned char bg, unsigned char fg)
{
  printf("\033[%d;%dm", bg, fg);
}

// �ر���ɫ
void term_coloroff()
{
  printf("\033[0m");
}

// ������λ��
void term_savecur(void)
{
	printf("\033[s");
}

// �ָ����λ��
void term_resumecur(void)
{
	printf("\033[u");
}

