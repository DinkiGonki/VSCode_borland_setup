#include<conio.h>
#include<iostream.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\13.h"
void main( void )
{
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	int i; char n; int _time;
m:
	Wind(4, 6, 29, 16, 0, 1);
	gotoxy(2, 2); cout << "����� �����";
	gotoxy(2, 4); cout << "1 - ����� ��";
	gotoxy(2, 5); cout << "2 - ��㣨� �������";
	gotoxy(2, 6); cout << "3 - �� ��த᪨� �����";
    gotoxy(1, 8); cout << "�६� ᮧ����(ᥪ) => "; cin >> _time;
	gotoxy(1, 10); cout << "�롥� ����� ��� => "; cin >> i;
	switch(i)
	{
		case  1: _in(_time); break;
		case  2: _other(_time); break;
		case  3: _gor_number(_time); break;
		default: gotoxy(2, 10); cout << "�訡��"; break;
	}
	Wind(4, 19, 27, 21, 0, 18);
	gotoxy(2, 2); cout << "�த������? - y/n ";
	if((n = getche()) == 'y' || n == 'Y')
		goto m;
	else
	{
		gotoxy(2, 2); clreol(); cout << "�� ᢨ�����!";
	}
	getch();
}
