#include<conio.h>
#include<iostream.h>
#include<math.h>
// ��।������ ᮡ�⢥���� �㭪樨 - ����஥��� ���� � ⥭��
void Wind(int x1, int y1, int x2, int y2, int z1, int z2)
{
	// ⥭� - ������ ���� 梥� z1
	window(x1, y1, x2, y2); textbackground(z1); clrscr();
	// ���孥� ���� ��������� 梥� z2
	window(x1 - 1, y1 - 1, x2 - 1, y2 - 1); textbackground(z2); clrscr();
}

void main( void )
{
	// ����� ��६����
	float x, y, a, b;
	// ����⮢� ०�� 梥⭮� 80 � 25
	textmode(3);
	// ��࠭ ������� ��� 梥⮬
	window(1, 1, 80, 25); textbackground(7); clrscr();
	// ����ந�� ���� � �����/�뢥�� ��६����
	textcolor(14);
	Wind(10, 4, 70, 10, 0, 1);
	gotoxy(20, 2); cout << "�ࠪ��᪠� ࠡ�� 7";
	gotoxy(5, 6); cout << "���᫥��� ��⥬���᪨� �㭪権 � ��ࠦ����";
	textcolor(15);
	Wind(20, 15, 55, 15, 0, 1);
	// ���樠����஢��� ��㬥��
	gotoxy(3, 4); cout << "������ x > 0 "; cin >> x;
	// ���᫨�� ���祭�� �㭪樨
	a = ;	// ���᫥��� �᫨⥫�
	b = ;	// ���᫥��� �������⥫�
	y = a / b;
	// �뢥�� १����
	gotoxy(12, 6); cout << "y(" << x << ") = " << y;
	getch();
}