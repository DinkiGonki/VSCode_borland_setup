void _in(int _time)
{
	Wind(33, 3, 78, 9, 0, 20);
	gotoxy(12, 2); cout << "1. ����� ��.";
	gotoxy(2, 3); cout << "�६� ࠧ����� = " << _time << " ᥪ㭤" << endl;
    gotoxy(2, 4); cout << "�ࠩ�: 1 �㡫� �� 1 ������" << endl;
    if((_time % 60) >= 1) _time = _time / 60 + 1; //if half minute more, plus 1 minutes
    else _time = _time / 60;
    gotoxy(2, 5); cout << "����� ����� = " << _time << endl;
    gotoxy(2, 6); cout << "�⮣���� �⮨����� = " << _time * 1 << " RUB" << endl; 
}
void _other(int _time)
{
	Wind(33, 12, 78, 16, 0, 5);
	gotoxy(12, 1); cout << "2. ��㣮� ������.";
	gotoxy(2, 2); cout << "�६� ࠧ����� = " << _time << " ᥪ㭤" << endl;
	gotoxy(2, 3); cout << "�ࠩ�: 1 �㡫� �� 1 ������" << endl;
    if((_time % 60) >= 1) _time = _time / 60 + 1; //if half minute more, plus 1 minutes
    else _time = _time / 60;
    gotoxy(2, 4); cout << "����� ����� = " << _time << endl;
    gotoxy(2, 5); cout << "�⮣���� �⮨����� = " << _time * 3 << " RUB" << endl; 

}
void _gor_number(int _time)
{
	Wind(33, 19, 78, 24, 0, 6);
	gotoxy(12, 1); cout << "3. �� ��த᪮� �����.";
	gotoxy(2, 2); cout << "�६� ࠧ����� = " << _time << " ᥪ㭤" << endl;
	gotoxy(2, 3); cout << "�ࠩ�: 1 �㡫� �� 1 ������" << endl;
    if((_time % 60) >= 1) _time = _time / 60 + 1; //if half minute more, plus 1 minutes
    else _time = _time / 60;
    gotoxy(2, 4); cout << "����� ����� = " << _time << endl;
    gotoxy(2, 5); cout << "�⮣���� �⮨����� = " << _time * 5 << " RUB" << endl; 
}
