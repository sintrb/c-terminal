#ifndef _TERMSPE_H
#define _TERMSPE_H
#include <stdio.h>

// ����
void term_clear(void);

// ��ת��굽x��,y��
void term_goto(int x, int y);

// �رչ����ʾ
void term_curoff(void);

// ���ñ���ɫǰ��ɫ
// bg����ɫ��40:��, 41:���, 42:��, 43:��ɫ, 44:��ɫ, 45:��ɫ, 46:����, 47:��ɫ
// fgǰ��ɫ��30:��, 31:��, 32:��, 33:��, 34:��ɫ, 35:��ɫ, 36:����, 37:��ɫ
void term_color(unsigned char bg, unsigned char fg);

// �ر���ɫ
void term_coloroff(void);

// ������λ��
void term_savecur(void);

// �ָ����λ��
void term_resumecur(void);

#endif // _TERMSPE_H
