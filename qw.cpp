#include "lab1_static.h"
#include "lab1_dynamic.h"

using namespace std;

		char *printtext(char *str)
		{
			static char buffer[1024];
			CharToOem(str, buffer);
			return buffer;
		}

void main()
{
	float a;
	int b, c;
	double d;
	bool flag = false;
	short int temp;
	int ESC = 27;

	while (!flag)
	{
		cout<<printtext("�������� ����� ������ (������� �����):\n");
		cout<<printtext("1. ������ �� ����������� ������� ������\n");
		cout<<printtext("2. ������ � ������������ ������� ������\n");
        cout<<printtext("�������� ����� ������ (������� �����):\n");
		cout<<printtext("1. ������ �� ����������� ������� ������\n");
		cout<<printtext("2. ������ � ������������ ������� ������\n");
        cout<<printtext("�������� ����� ������ (������� �����):\n");
		cout<<printtext("1. ������ �� ����������� ������� ������\n");
		cout<<printtext("2. ������ � ������������ ������� ������\n");
		cin>>temp;
		if ((temp == 1) || (temp==2))
		{
			system("CLS");
			flag = true;
			break;
		}
		else
		{
			cout<<printtext("������ �� ������������ ����� ������!!! ���������� �����\n");
			system("pause");
		}

		system("CLS");
	}

	flag = false;

	while (!flag)
	{
		long float aa;
		long long bb;
		long long cc;
		long double dd;

		cout<<"\tsqrt(15*a) + b - a/4\n";
		cout<<"y = -----------------------------\n";
		cout<<"\t\tc*d-1\n\n";

		
		while(true) 
		{
			cout<<printtext("������� ���������� 'a' ���� float: ");
			cin>>aa; 
			
			if(cin.good()) 
			{ 
				cin.ignore(10, '\n'); 
				break; 
			} 
			
			cin.clear(); 
			cout << printtext("������������ ������ ����� ���������� ������  ") << endl; 
			cin.ignore(10, '\n');  
		}
		
		if (aa > FLT_MAX) 
		{
			cout<<printtext("������������ ���������� 'a'");
			cout<<printtext("\n��� ������ �� ��������� ������ ESC, ��� ����������� ������ ������� ����� �������\n");
			if (getch()==27)
				break;
			else 
			{
				system("CLS");
				continue;
			}
		}
		else a = float(aa);

		while(true) 
		{
			cout<<printtext("������� ���������� 'b' ���� int: ");
			cin>>bb; 
			
			if(cin.good()) 
			{ 
				cin.ignore(10, '\n'); 
				break; 
			} 
			
			cin.clear(); 
			cout << printtext("������������ ������ ����� ���������� ������  ") << endl; 
			cin.ignore(10, '\n');  
		}
		
		if (bb > INT_MAX) 
		{
			cout<<printtext("������������ ���������� 'b'");
			cout<<printtext("\n��� ������ �� ��������� ������ ESC, ��� ����������� ������ ������� ����� �������\n");
			if (getch()==27)
				break;
			else 
			{
				system("CLS");
				continue;
			}
		}
		else b = int(bb);

		while(true) 
		{
			cout<<printtext("������� ���������� 'c' ���� int: ");
			cin>>cc; 
			
			if(cin.good()) 
			{ 
				cin.ignore(10, '\n'); 
				break; 
			} 
			
			cin.clear(); 
			cout << printtext("������������ ������ ����� ���������� ������  ") << endl; 
			cin.ignore(10, '\n');  
		}

		if (cc > INT_MAX) 
		{
			cout<<printtext("������������ ���������� 'c'");
			cout<<printtext("\n��� ������ �� ��������� ������ ESC, ��� ����������� ������ ������� ����� �������\n");
			if (getch()==27)
				break;
			else 
			{
				system("CLS");
				continue;
			}
		}
		else c = int(cc);

		while(true) 
		{
			cout<<printtext("������� ���������� 'd' ���� double: ");
			cin>>dd; 
			
			if(cin.good()) 
			{ 
				cin.ignore(10, '\n'); 
				break; 
			} 
			
			cin.clear(); 
			cout << printtext("������������ ������ ����� ���������� ������ ") << endl; 
			cin.ignore(10, '\n');  
		}

		if (dd > DBL_MAX) 
		{
			cout<<printtext("������������ ���������� 'd'");
			cout<<printtext("\n��� ������ �� ��������� ������ ESC, ��� ����������� ������ ������� ����� �������\n");
			if (getch()==27)
				break;
			else 
			{
				system("CLS");
				continue;
			}
		}
		else d = double(dd);
		cout<<endl;

		if (temp == 1)
		{
			TCalc_static object(a,b,c,d);
			object.Calc();
		}
		else
			if (temp == 2)
			{
				TCalc_dynamic object(a,b,c,d);
				object.Calc();
			}

		cout<<printtext("\n��� ������ �� ��������� ������ ESC, ��� ����������� ������ ������� ����� �������\n");
		if (getch()==ESC)
			flag = true;
		else 
		{
			flag = false;
			system("CLS");
		}
	}
}