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
    int aa;//������Ϊ������
	int bb;//������Ϊ������
	int cc;//������Ϊ������
	int s;//������Ϊ������
    srand((unsigned)time(NULL));
    cout << "�����������ӡ��������" << endl;
    cin >> daYinShu;
    cout << "������������ķ�Χֵ��min��max��ֵ�ֱ�Ϊ��" << endl;
    cin >> min >> max;
    pj = max - min;//ͨ���û���������ֵ��Сֵ���õ���Χ��
	cout << "�Ƿ���Ҫ�˳���(�ش�1��0):" << endl;
    cin >> aa;
	/*cout<< "��ѡ����Ҫ�������Ƿ�����������1����2��" << endl;
	cin >> num;
	int num1 = rand() % 100;//�������0-100�������
	int num2 = rand() % 100;//�������0-100�������
	int num3 = rand() % 100;//�������0-100�������
	int num4 = rand() % 100;//�������0-100�������
	int f;
	if(num=2)
		{
			int a = num1;
			int b = num2;
			if (num1 > num2)//�ж��Ƿ�Ϊ�����
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
			case 3:cout << "�� "; break;
			case 4:cout << "�� "; break;
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
        cout << "�Ƿ���Ҫ����Ҫ�õ�������(�ش�1��0)��" << endl;
        cin >> bb;
        cout << endl;
    }
    cout << "�Ƿ���Ҫ����?(�ش�1��0)��" << endl;
    cin >> cc;
    if (aa == 1)
    {
        for (i = 0; i < daYinShu; i++)//�ж��Ƿ��ظ�
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
                    cout << b[i] << " * �� - " << c[i] << " �� = " << endl;
					break;
                }
            case 3:
                if (c[i] == 0)//��ĸ����Ϊ��
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
        for (i = 0; i < daYinShu; i++)//�ж��Ƿ��ظ�
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