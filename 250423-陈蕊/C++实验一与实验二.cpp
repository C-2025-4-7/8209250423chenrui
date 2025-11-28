#include<iostream>
using namespace std;
int main()
{
	int k = 0;//没有定义k
	int i = k + 1;
	cout << i++ << endl;
	i = 1;//i重定义
	cout << i++ << endl;
	cout << "Welcome to C++!" << endl;
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	double r, h;
	const double PI = 3.14159265358979323846;
	cout << "请输入圆锥的底面半径：" << endl;
	cin >> r;
	cout << "请输入圆锥的高：" << endl;
	cin >> h;
	double v = (1.0 / 3.0) * PI * r * r * h;
	cout << "圆锥的体积是：" << v << endl;
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
}


#include <iostream>  
#include <iomanip>                                  
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe   
	cout << "output in unsigned int  type:" << testUnint << endl;//<<oct;         
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;  //为什么结果为-2？
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "16进制输出" << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "8进制输出" << endl;
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8进制输出
	cout << dec;
	cout << " 实数转int测试 " << endl;
	double realNumbers[] = { 3.14, -3.14, 123.456, -123.456 };

	for (int i = 0; i < 4; i++)
	{
		cout << "实数: " << realNumbers[i] << " 转换为int: " << static_cast<int>(realNumbers[i]) << endl;
	}
	system("pause");                                             
	return 0;
}


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe
	cout << "output in nusigned int type:" << endl;//<<oct;
	cout << "output in nusigned char type:"<<static_cast<char>(testUnint) << endl;
	cout << "output in nusigned short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in nusigned int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in nusigned double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in nusigned double type:" <<setprecision(4)<< static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	system("pause");
	return 0;
}


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cout << "请输入华氏温度：" << endl;
	cin >> a;
	float b = (a - 32) * 5 / 9;
	cout << fixed << setprecision(2);
	cout <<a<<"℉  ="  << b<<"℃" << endl;
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个字符：" << endl;
	char fu;
	cin >> fu;
	if (fu >= 'a' && fu <= 'z')
	{
		cout << char(fu - ('a' - 'A')) << endl;
	}
	else
	{
		cout << int(fu) + 1 << endl;
	}
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	double x,y;
	cout << "请输入一个大于0小于10的数：" << endl;
	cin >> x;
	if (0 < x&&x < 1)
	{
		y = 3 - 2 * x;
		cout << y << endl;
	}
	else if (1 <= x&&x < 5)
	{
		y = 2/ (4 * x) + 1;                                                  //不能有连续的比较
		cout << y << endl;
	}
	else if (5 <= x&&x < 10)
	{
		y = x * x;
		cout << y << endl;
	}
	else
	{
		cout << "输入错误" << endl;
	}
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边：" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		double z = a + b + c;
		cout << "三角形的周长是：" << z << endl;
		if (a == b || b == c || a == c)
		{
			cout << "该三角形是等腰三角形。" << endl;
		}
	}
	else
	{
		cout << "不能构成三角形。" << endl;
	}
	return 0;
}



#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f, g;
	cout << "请输入两个数：" << endl;
	cin >> a >> b;
	c = a + b;
	cout << "a+b=" << c << endl;
	d = a * b;
	cout << "a*b=" << d << endl;
	e = a - b;
	cout << "a-b=" << e << endl;
	if (b != 0)
	{
		f = a / b;
		cout << "a/b=" << f << endl;
		g = a % b;
		cout << "a%b=" << g << endl;
	}
	else
	{
		cout << "除数不能为零！" << endl;
		return 0;
	}
}


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	int b = 0, c = 0, d = 0, e = 0;
	cout << "请输入一行字符: ";
	getline(cin, a);
	for (char ch : a)
	{
		if (isalpha(ch))
		{
			b++;
		}
		else if (isdigit(ch))
		{
			d++;
		}
		else if (isspace(ch))
		{
			c++;
		}
		else {
			e++;
		}
	}
	cout << "英文字母: " << b << endl;
	cout << "空格: " << c << endl;
	cout << "数字字符: " << d << endl;
	cout << "其他字符: " << e << endl;

	return 0;
}


#include <iostream>
using namespace std;
int max(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int min(int a, int b)
{
	return (a * b) / max(a, b);
}
int main()
{
	int a, b;

	cout << "请输入两个正整数: ";
	cin >> a >> b;
	if (a <= 0 || b <= 0)
	{
		cout << "输入必须为正整数！" << endl;
		return 1;
	}

	cout << "最大公约数: " << max(a, b) << endl;
	cout << "最小公倍数: " << min(a, b) << endl;

	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		{
			for (int j = 0; j <= 5 - i; j++)
				cout << " ";
		}
		{
			for (int j = 0; j <= i; j++)
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}
	

        #include<iostream>
        using namespace std;
        int main()
        {
			double a, x, y;
            cout << "请输入一个非负数：" << endl;
            cin >> a;
			if (a < 0)
			{
				cout << "输入错误" << endl;
				return 0;
			}
            if (a == 0)
            {
				cout << "x=0" << endl;
            }
			else
			{
				x = a;
				for (;; )
				{
					y = 0.5 * (x + a / x);
					if (x - y >= 1e-10|| y - x >= 1e-10)
						x = y;
					else
						break;
				}
				cout << "x= " << x << endl;
			}
            return 0;
        }
		

#include<iostream>
using namespace std;
int main()
{
	int n = 1, a = 1, sum=0;
	for ( n = 1; ; n++)
	{
		for(int i=n-1;i<n;i++)
		{
			a = 2 * a;
		}
		sum = sum + a;
		if (sum > 100)
			break;
	}
	cout << "一共会买" << n << "天" << endl;
	cout << "平均每天花费" << 0.8 * sum / n << "元" << endl;
	return 0;
}


























