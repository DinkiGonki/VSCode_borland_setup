#include<conio.h>
#include<iostream>
#include<iomanip.h>
#include<math.h>
void Wind (int x1, int y1, int x2, int y2, int z1, int z2)
{
	window(x1, y1, x2, y2); textbackground(z1); clrscr();
	window(x1 - 1, y2 - 1, x2 - 1, y2 - 1); textbackground(z2); clrscr();
}
void main (void)
{
	textmode (3);
	char *f; f = new char(20);
	char *s = "�ଠ�஢���� ���� / �뢮� ������ � C++";
	int n, num;
	float l,r;
	window(1, 1, 80, 25); textbackground(7); clrscr();
	textcolor(15);
	Wind(15, 5, 65, 10, 0, 2);
	gotoxy(5, 2); cout << "������� "; cin >> f;
	gotoxy(5, 4); cout << "����� ࠡ��� "; cin >> num;
	clrscr();
	cout.setf (ios::left);
	gotoxy(20, 2); cout << "�ਢ�� " << setw(20) <<f;
	gotoxy(5, 8); cout << "�ࠪ��᪠� ࠡ�� " <<num << " (8 c/c -" << oct << num << ", 16 c/c - " << hex << num << ")";
	getch();
}