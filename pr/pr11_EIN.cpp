#include<conio.h>

#include<iostream.h>

#include<stdio.h>

int main(void) {
    clrscr();
    // ������� ��६����� � ����⠭�
    float a, b, z;
    char ch;
    FILE * f;
    #define ESC 27
    // ������ 䠩� ��� �����
    if ((f = fopen("fil_dat\\pr11_EIN.dat", "w")) == NULL) {
        fprintf(stderr, "�訡��! �� 㤠���� ������ 䠩�...\n");
        return 1;
    }
	cout << "�ਢ��, �� �ணࠬ��, ��।������\n�ன��� �� ��䨪 �㭪樨 y = 5x^2 - 7x + 2 �१ �������� ��� � ���न��⠬� (a, b).\n";
    start:
        // ���� ��㬥�⮢
		cout << "������ a: ";
		cin >> a;
		cout << "������ b: ";
		cin >> b;
		// �஢���� �� 0 �� �������⥫�
		if(5*a*a-7*a+2 == b) {
			cout << "[+] ��窠 � ���न��⠬� " << "(" << a << ":" << b << ")" << " �室�� � ��䨪 �㭪樨 y = 5x^2 - 7x + 2" << endl;
			fprintf (f, "[+] ��窠 � ���न��⠬� a = %f\tb = %f\t �室�� � ��䨪 �㭪樨 y = 5x^2 - 7x + 2", a, b);
		}
		// ����, �᫨ �������⥫� �� ࠢ�� 0
		else {
			cout << "[-] ��窠 � ���न��⠬� " << "(" << a << ":" << b << ")" << " �� �室�� � ��䨪 �㭪樨 y = 5x^2 - 7x + 2" << endl;
			fprintf (f, "[-] ��窠 � ���न��⠬� a = %f\tb = %f\t �� �室�� � ��䨪 �㭪樨 y = 5x^2 - 7x + 2", a, b);
		}
		cout << "\n��� �४�饭�� ����� Esc\n";
		cout << "��� �த������� ����� - ���� �������\n";
		
		if ((ch = getch()) != ESC){
			goto start;
		} else {
			fclose(f);
			//getch();
			cout << "\n���ᨡ� �� �ᯮ�짮����� ���� �ணࠬ��\n";
		}
		return 0;
}