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
		cout<<printtext("Выберите режим работы (укажите цифру):\n");
		cout<<printtext("1. Работа со статическим классом памяти\n");
		cout<<printtext("2. Работа с динамическим классом памяти\n");
        cout<<printtext("Выберите режим работы (укажите цифру):\n");
		cout<<printtext("1. Работа со статическим классом памяти\n");
		cout<<printtext("2. Работа с динамическим классом памяти\n");
        cout<<printtext("Выберите режим работы (укажите цифру):\n");
		cout<<printtext("1. Работа со статическим классом памяти\n");
		cout<<printtext("2. Работа с динамическим классом памяти\n");
		cin>>temp;
		if ((temp == 1) || (temp==2))
		{
			system("CLS");
			flag = true;
			break;
		}
		else
		{
			cout<<printtext("Выбран не существующий режим работы!!! Попробуйте снова\n");
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
			cout<<printtext("Введите переменную 'a' типа float: ");
			cin>>aa; 
			
			if(cin.good()) 
			{ 
				cin.ignore(10, '\n'); 
				break; 
			} 
			
			cin.clear(); 
			cout << printtext("Неправильный формат ввода попробуйте заново  ") << endl; 
			cin.ignore(10, '\n');  
		}
		
		if (aa > FLT_MAX) 
		{
			cout<<printtext("Переполнение переменной 'a'");
			cout<<printtext("\nДля выхода из программы нажите ESC, для продолжения работы нажмите любую клавишу\n");
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
			cout<<printtext("Введите переменную 'b' типа int: ");
			cin>>bb; 
			
			if(cin.good()) 
			{ 
				cin.ignore(10, '\n'); 
				break; 
			} 
			
			cin.clear(); 
			cout << printtext("Неправильный формат ввода попробуйте заново  ") << endl; 
			cin.ignore(10, '\n');  
		}
		
		if (bb > INT_MAX) 
		{
			cout<<printtext("Переполнение переменной 'b'");
			cout<<printtext("\nДля выхода из программы нажите ESC, для продолжения работы нажмите любую клавишу\n");
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
			cout<<printtext("Введите переменную 'c' типа int: ");
			cin>>cc; 
			
			if(cin.good()) 
			{ 
				cin.ignore(10, '\n'); 
				break; 
			} 
			
			cin.clear(); 
			cout << printtext("Неправильный формат ввода попробуйте заново  ") << endl; 
			cin.ignore(10, '\n');  
		}

		if (cc > INT_MAX) 
		{
			cout<<printtext("Переполнение переменной 'c'");
			cout<<printtext("\nДля выхода из программы нажите ESC, для продолжения работы нажмите любую клавишу\n");
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
			cout<<printtext("Введите переменную 'd' типа double: ");
			cin>>dd; 
			
			if(cin.good()) 
			{ 
				cin.ignore(10, '\n'); 
				break; 
			} 
			
			cin.clear(); 
			cout << printtext("Неправильный формат ввода попробуйте заново ") << endl; 
			cin.ignore(10, '\n');  
		}

		if (dd > DBL_MAX) 
		{
			cout<<printtext("Переполнение переменной 'd'");
			cout<<printtext("\nДля выхода из программы нажите ESC, для продолжения работы нажмите любую клавишу\n");
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

		cout<<printtext("\nДля выхода из программы нажите ESC, для продолжения работы нажмите любую клавишу\n");
		if (getch()==ESC)
			flag = true;
		else 
		{
			flag = false;
			system("CLS");
		}
	}
}