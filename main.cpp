#include <iostream>

using namespace std;

int main()
{
   setlocale(LC_ALL, "Russian");
    int a,temp=0;
    cin >> a;
        switch (a / 1000000){
    case 1: cout << "������� "; break;
    case 2: cout << "��� �������� "; break;
    case 3: cout << "��� �������� "; break;
    case 4: cout << "������ �������� "; break;
    case 5: cout << "���� ��������� "; break;
    case 6: cout << "����� ��������� "; break;
    case 7: cout << "���� ��������� "; break;
    case 8: cout << "������ ��������� "; break;
    case 9: cout << "������ ��������� "; break;
    case 0: cout << ""; break;
        }
    a = a % 1000000;
    switch (a / 100000){
    case 0: cout << ""; break;
    case 1: cout << "��� "; break;
    case 2: cout << "������ "; break;
    case 3: cout << "������ "; break;
    case 4: cout << "��������� "; break;
    case 5: cout << "������� "; break;
    case 6: cout << "�������� "; break;
    case 7: cout << "������� "; break;
    case 8: cout << "��������� "; break;
    case 9: cout << "��������� "; break;
    }
    a=a%100000;
    if (a/10000 != 1){
    switch (a / 10000){
    case 2: cout << "�������� "; break;
    case 3: cout << "�������� "; break;
    case 4: cout << "����� "; break;
    case 5: cout << "��������� "; break;
    case 6: cout << "���������� "; break;
    case 7: cout << "��������� "; break;
    case 8: cout << "����������� "; break;
    case 9: cout << "��������� "; break;
    case 0: cout << ""; break;
    }
    a = a % 10000;
    switch (a/1000){
    case 0: cout << "����� "; break;
    case 1: cout << "���� ������ "; break;
    case 2: cout << "��� ������ "; break;
    case 3: cout << "��� ������ "; break;
    case 4: cout << "������ ������ "; break;
    case 5: cout << "���� ����� "; break;
    case 6: cout << "����� ����� "; break;
    case 7: cout << "���� ����� "; break;
    case 8: cout << "������ ����� "; break;
    case 9: cout << "������ ����� "; break;
    }
    }
    else{
            a = a% 100000;
        switch (a/1000){
    case 10: cout << "������ ����� "; break;
    case 11: cout << "����������� ����� "; break;
    case 12: cout << "���������� ����� "; break;
    case 13: cout << "���������� ����� "; break;
    case 14: cout << "������������ ����� "; break;
    case 15: cout << "���������� ����� "; break;
    case 16: cout << "����������� ����� "; break;
    case 17: cout << "���������� ����� "; break;
    case 18: cout << "������������ ����� "; break;
    case 19: cout << "������������ ����� "; break;
    }
    }
    a=a%1000;
    switch (a / 100){
    case 0: cout << ""; break;
    case 1: cout << "��� "; break;
    case 2: cout << "������ "; break;
    case 3: cout << "������ "; break;
    case 4: cout << "��������� "; break;
    case 5: cout << "������� "; break;
    case 6: cout << "�������� "; break;
    case 7: cout << "������� "; break;
    case 8: cout << "��������� "; break;
    case 9: cout << "��������� "; break;
    }
    a=a%100;
    if (a/10 != 1){
    switch (a / 10){
    case 2: cout << "�������� "; break;
    case 3: cout << "�������� "; break;
    case 4: cout << "����� "; break;
    case 5: cout << "��������� "; break;
    case 6: cout << "���������� "; break;
    case 7: cout << "��������� "; break;
    case 8: cout << "����������� "; break;
    case 9: cout << "��������� "; break;
    case 0: cout << ""; break;
    }
    a = a % 10;
    switch (a/1){
    case 0: cout << ""; break;
    case 1: cout << "����"; break;
    case 2: cout << "��� "; break;
    case 3: cout << "���"; break;
    case 4: cout << "������"; break;
    case 5: cout << "����"; break;
    case 6: cout << "�����"; break;
    case 7: cout << "����"; break;
    case 8: cout << "������"; break;
    case 9: cout << "������ "; break;
    }
    }
    else{
            a = a% 100;
        switch (a/1){
    case 10: cout << "������"; break;
    case 11: cout << "����������� "; break;
    case 12: cout << "����������  "; break;
    case 13: cout << "���������� "; break;
    case 14: cout << "������������ "; break;
    case 15: cout << "���������� "; break;
    case 16: cout << "����������� "; break;
    case 17: cout << "����������  "; break;
    case 18: cout << "������������ "; break;
    case 19: cout << "������������ "; break;
    }
    }
    return 0;
}
