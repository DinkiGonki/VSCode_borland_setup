void y_10(char *name, int num)
{
	// ����� ��६����
	float x, y;
	// ��࠭ ������� 梥⮬
	window(1, 1, 80, 25); textbackground(10); clrscr();
	// ����ந�� ���� � �����/�뢥�� ��६����
	textcolor(14);
	Wind(7, 3, 77, 7, 0, 3);
	gotoxy(25, 2); cout << "�ࠪ��᪠� ࠡ�� " << num;
	gotoxy(10, 4); cout << name;
	textcolor(15);
	Wind(22, 13, 50, 16, 0, 4);
	// ���樠����஢��� ��㬥��
	gotoxy(3, 2); cout << "������ x (> 0) = "; cin >> x;
	// ���᫨�� ���祭�� �㭪樨
	
	y = exp(x) / log10(x);
	// �뢥�� १����
	Wind(40, 19, 79, 23, 0, 5);

	gotoxy(12, 3); cout << "y(" << x << ") = " << setprecision(8) << y;
    fil_num(name, num);
    fil_rez(x, y);
}
