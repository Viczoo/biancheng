#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	srand((int)time(NULL));//随机种子
	for (int i = 0; i < 30; i++)
	{
		int num1 = rand() % 100;//随机生成0-100里的整数
		int num2 = rand() % 100;//随机生成0-100里的整数
		int num3 = rand() % 100;//随机生成0-100里的整数
		int num4 = rand() % 100;//随机生成0-100里的整数
		int num = 1 + rand() % 2;//随机生成1或2分别表示整数和分数
		int f;
		if (num = 1)
		{
			f = num1 % 4 + 1;
			cout << num1;
			switch (f)
			{
			case 1:cout << "+"; break;
			case 2:cout << "-"; break;
			case 3:cout << "×"; break;
			case 4:cout << "÷"; break;
			}
			if(f = 4 && num2 != 0)
			cout << num2 << "=" << endl;
		}
		if(num=2)
		{
			int a = num1;
			int b = num2;
			if (num1 > num2)//判断是否为真分数
			{
				int e = a;
				a = b;
				b = e;
			}
			if(b != 0)
			cout << "("<< a << "/" << b <<") ";
			f = num1 % 4 + 1;
			switch (f)
			{
			case 1:cout << "+  "; break;
			case 2:cout << "-  "; break;
			case 3:cout << "× "; break;
			case 4:cout << "÷ "; break;
			}
			int c = num3;
			int d = num4;
			if (num3 > num4)
			{
				int k = c;
				c = d;
				d = k;
			}
			if(d != 0 && c != 0)
			cout <<"("<< c << "/" << d <<")"<<"="<<endl;
		}
	}
}

