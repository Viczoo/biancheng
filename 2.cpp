#include <iostream>
#include<stdlib.h>
#include <ctime>
#include <cmath>
using namespace std;

void main()
{
    int i, j;
	int daYinShu;
	int b[1000], c[1000], d[1000];
	int e, min, max, pj;
    int aa;//各参数为定义量
	int bb;//各参数为定义量
	int cc;//各参数为定义量
	int s;//各参数为定义量
    srand((unsigned)time(NULL));
    cout << "请输入你想打印的题数：" << endl;
    cin >> daYinShu;
    cout << "请输入随机数的范围值，min与max的值分别为：" << endl;
    cin >> min >> max;
    pj = max - min;//通过用户输入的最大值最小值，得到范围域
	cout << "是否需要乘除？(回答1或0):" << endl;
    cin >> aa;
	/*cout<< "请选择需要整数还是分数？（整数1分数2）" << endl;
	cin >> num;
	int num1 = rand() % 100;//随机生成0-100里的整数
	int num2 = rand() % 100;//随机生成0-100里的整数
	int num3 = rand() % 100;//随机生成0-100里的整数
	int num4 = rand() % 100;//随机生成0-100里的整数
	int f;
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
		}*/
    if (aa == 1)
    {
        cout << "是否需要除法要得到余数？(回答1或0)：" << endl;
        cin >> bb;
        cout << endl;
    }
    cout << "是否需要负数?(回答1或0)：" << endl;
    cin >> cc;
    if (aa == 1)
    {
        for (i = 0; i < daYinShu; i++)//判断是否重复
        {
            b[i] = rand() % pj + min;
            c[i] = rand() % pj + min;
            d[i] = rand() % 4;
            for (j = 0; j < i; j++)
            {
                while (b[j] == b[i] && c[j] == c[i]&&d[i]==d[j])
                {
                    b[i] = rand() % pj + min;
                    c[i] = rand() % pj + min;
                    d[i] = rand() % 4;
                }
            }
        }
        for (i = 0; i < daYinShu; i++)
        {
            e = rand() % 2;
            switch (d[i])
            {
            case 0:
                cout << b[i] << " + " << c[i] << " = " << endl;
				break;
            case 1:
                if (cc == 0)
                {
                    if (b[i] < c[i])
                    {
                        s = b[i];
                        b[i] = c[i];
                        c[i] = s;
                    }
                    else
                        cout << b[i] << " - " << c[i] << " = " << endl;
					break;
                }
                else
                    cout << b[i] << " - " << c[i] << " = " << endl;
				break;
            case 2:
                if (e == 0)
                {
                    cout << b[i] << " * " << c[i] << " = " << endl;
					break;
                }
                else if (e == 1)
                {
                    cout << b[i] << " * （ - " << c[i] << " ） = " << endl;
					break;
                }
            case 3:
                if (c[i] == 0)//分母不能为零
                {
                    i--;
					break;
                }
                else if (bb == 1)
                {
                    if (b[i] % c[i] != 0)
                    {
                        cout << b[i] << " / " << c[i] << " = " << endl;
						break;
                    }
                    else
                    {
                        i--;
						break;
                    }
                }
                else if (bb == 0)
                {
                    if (b[i] % c[i] != 0)
                    {
                        cout << b[i] << " / " << c[i] << " = " << endl;
						break;
                    }
                    else
                    {
                        i--; 
						break;
                    }
                }
                break;
            }
        }
    }
    else
    {
        for (i = 0; i < daYinShu; i++)//判断是否重复
        {
            b[i] = rand() % pj + min;
            c[i] = rand() % pj + min;
            d[i] = rand() % 2;
            for (j = 0; j < i; j++)
            {
                while (b[j] == b[i] && c[j] == c[i])
                {
                    b[i] = rand() % pj + min;
                    c[i] = rand() % pj + min;
                    d[i] = rand() % 2;
                }
            }
        }
        for (i = 0; i < daYinShu; i++)
        {
            switch (d[i])
            {
            case 0:
                cout << b[i] << " + " << c[i] << " = " << endl;
				break;
            case 1:
                if (cc == 0)
                {
                    if (b[i] < c[i])
                    {
                        s = b[i];
                        b[i] = c[i];
                        c[i] = s;
                    }
                    else
                    {
                        cout << b[i] << " - " << c[i] << " = " << endl;
						break;
                    }
                }
                else
                {
                    cout << b[i] << " - " << c[i] << " = " << endl;
					break;
                }
            }
        }
    }
}