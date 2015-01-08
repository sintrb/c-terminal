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
void term_goto(int r, int c)
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

// �������n��
void term_down(int n)
{
	printf("\033[%dB", n);
}

// �������n��
void term_up(int n)
{
	printf("\033[%dA", n);
}

// �������b��
void term_left(int n)
{
	printf("\033[%dD", n);
}

// �������n��
void term_right(int n)
{
	printf("\033[%dC", n);
}

// ������
void term_highlight()
{
	printf("\033[1m");
}

// �»���
void term_underline()
{
	printf("\033[4m");
}

// ��˸
void term_flash()
{
	printf("\033[5m");
}

// ����
void term_invert()
{
	printf("\033[7m");
}

// ����
void term_blank()
{
	printf("\033[8m");
}
