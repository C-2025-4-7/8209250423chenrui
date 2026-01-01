#include <iostream>
using namespace std;
int gcd(int a, int b);  
void gcd_lcm(int a, int b, int& gcdr, int& lcmr);  
int main()
{
	int m, n;
	cout << "请输入两个自然数 m 和 n: ";
	cin >> m >> n;
	if (m <= 0 || n <= 0)
	{
		cout << "错误：请输入正整数！" << endl;
		return 0;
	}
	int gcd1 = gcd(m, n);
	cout << "(1) 最大公约数 = " << gcd1 << endl;
	int gcd2, lcm;
	gcd_lcm(m, n, gcd2, lcm);
	cout << "(2) 最大公约数 = " << gcd2 << endl;
	cout << "   最小公倍数 = " << lcm << endl;
	return 0;
}
// 函数(1)：求最大公约数（使用辗转相除法/欧几里得算法）
int gcd(int a, int b) 
{
	int temp;
	while (b != 0)
	{
		temp= b;
		b = a % b;
		a = temp;
	}
	return a;
}
// 函数(2)：同时求最大公约数和最小公倍数（使用引用参数）
void gcd_lcm(int a, int b, int& gcdr, int& lcmr) {
	int a0 = a, b0 = b;  
	int temp;
	while (b != 0) 
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	gcdr = a;
	lcmr = a0 / gcdr * b0;
}


#include <iostream>
#include <iomanip>
using namespace std;
bool is_prime(int num);
int main() 
{
	int a;
	cout << "请输入一个整数，判断它是否为素数：" << endl;
	cin >> a;
	if (is_prime(a))
	{
		cout << a << "是素数" << endl;
	}
	else
	{
		cout << a << "不是素数" << endl;
	}
	int n = 0;      
	int num = 2;        
	int primes[200];    
	cout << "前200个素数：" << endl;
	while (n < 200)
	{
		if (is_prime(num))
		{
			primes[n] = num;
			n++;
		}
		num++;
	}
	for(int i=0;i< 200; i++)
	{
		cout << setw(6) << primes[i];  
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}
bool is_prime(int num) 
{
	if (num <= 1)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	if (num % 2 == 0) 
	{
		return false;
	}
	int max=num-1;
	for (int i = 3; i <= max; i += 2) 
	{
		if (num % i == 0) 
		{
			return false;  
		}
	}

	return true;  
}

#include <iostream>
#include <iomanip>      
#include "mytemperature.h"  
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	cout << "Celsius       Fahrenheit     |  Fahrenheit       Celsius" << endl;
	double cel1 = 40.0;
	double fah1= 120.0;
	for (int i = 0; i < 10; i++)
	{
		double fah_from_cel = celsius_to_fah(cel1);
		double cel_from_fah = fahrenheit_to_cels(fah1);
		cout << setw(6) << cel1 << "       "
			<< setw(9) << fah_from_cel << "       | "
			<< setw(9) << fah1 << "       "
			<< setw(8) << cel_from_fah << endl;
		cel1 -= 1.0;      
		fah1 -= 10.0;  
	}
	cout << "\n温度转换" << endl;
	int choice;
	double temperature;
	do 
	{
		cout << "\n请选择转换类型：" << endl;
		cout << "1. 摄氏转华氏" << endl;
		cout << "2. 华氏转摄氏" << endl;
		cout << "0. 退出" << endl;
		cout << "请输入选择（0-2）: ";
		cin >> choice;
		if (choice == 1 || choice == 2) 
		{
			cout << "请输入温度值: ";
			cin >> temperature;
			if (choice == 1)
			{
				double r = celsius_to_fah(temperature);
				cout << temperature << " °C = " << r << " °F" << endl;
			}
			else {
				double r = fahrenheit_to_cels(temperature);
				cout << temperature << " °F = " << r << " °C" << endl;
			}
		}
		else if (choice != 0) 
		{
			cout << "无效选择，请重新输入！" << endl;
		}
	} while (choice != 0);
	cout << "感谢使用温度转换程序！" << endl;
	return 0;
}


#include <iostream>
using namespace std;
int count(int day);
int main() 
{
	int num = count(1);
	cout << "第1天猴子共摘了 " << num << " 个桃子" << endl << endl;
	return 0;
}
int count(int day) 
{
	if (day == 10) 
	{
		return 1;
	}
	return (count(day + 1) + 1) * 2;
}


#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int x = 0;
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		bool y = false;
		for (int j = 0; j < 10; j++)
		{
			if (arr[j] == a)
			{
				y = true;
				break;
			}
		}
		if (!y)
		{
			arr[x] = a;
			x++;
		}
	}
	cout << "The distinct numbers are：" ;
	if (x == 0)
	{
		cout << "无" << endl;
	}
	else
	{
		for (int i = 0; i < x; i++)
		{
			cout << arr[i];
			if (i < x - 1)
			{
				cout << ",";
			}
		}
	}
}



#include <iostream>
#include <iomanip>
using namespace std;
void bubblesort(double list[], int size);
int main()
{
	const int n = 10;
	double list[n];
	cout << "输入10个双精度数字: ";
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	bubblesort(list, n);
	cout << " 排序后 " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(2) << list[i];
		if (i < n - 1)
		{
			cout << ", ";
		}
	}
}
void bubblesort(double list[], int size)
{
	bool changed;
	do
	{
		changed = false;
		for (int j = 0; j < size - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}



using namespace std;
int main() 
{
	const int n = 100;
	bool L[n+1 ] = { false }; 
	for (int i = 1; i <= n; i++) 
	{
		for (int j = i; j <= n; j += i) 
		{
			L[j] = !L[j];
		}
	}
	cout << "开着的柜子有：" << endl;
	for (int i = 1; i <= n; i++) 
	{
		if (L[i]) 
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}



#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) 
{
	int i = 0, j = 0, k = 0;
	for (int count = 0; count < size1 + size2; count++) 
	{
		if (i < size1 && (j >= size2 || list1[i] <= list2[j]))
		{
			list3[k++] = list1[i++];
		}
		else 
		{
			list3[k++] = list2[j++];
		}
	}
}

int main() 
{
	const int max = 80;
	int list1[max], list2[max], list3[max * 2];
	int size1, size2;
	cout << "Enter list1: ";
	cin >> size1;
	for (int i = 0; i < size1; i++) 
	{
		cin >> list1[i];
	}
	cout << "Enter list2: ";
	cin >> size2;
	for (int i = 0; i < size2; i++) 
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is ";
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << " ";
	}
	cout << endl;
	return 0;
}



#include <iostream>
using namespace std;
int Length(const char s[]) 
{
	int len = 0;
	while (s[len] != '\0') 
	{
		len++;
	}
	return len;
}
int indexOf(const char s1[], const char s2[])
{
	int len1 = Length(s1);
	int len2 = Length(s2);
	if (len1 == 0 || len1 > len2) 
	{
		return -1;
	}
	for (int i = 0; i <= len2 - len1; i++) 
	{
		bool isMatch = true;
		for (int j = 0; j < len1; j++)
		{
			if (s2[i + j] != s1[j]) 
			{
				isMatch = false;
				break;
			}
		}
		if (isMatch) 
		{
			return i; 
		}
	}

	return -1; 
}

int main() 
{
	char s1[100], s2[100]; 
	cout << "Enter the first string: ";
	cin.getline(s1, 100);
	cout << "Enter the second string: ";
	cin.getline(s2, 100);
	int result = indexOf(s1, s2);
	if (result != -1) 
	{
		cout  << result << endl;
	}
	else 
	{
		cout  << result << endl;
	}

	return 0;
}


#include <iostream>
using namespace std;
void count(const char s[], int counts[]) 
{

	for (int i = 0; i < 26; i++) 
	{
		counts[i] = 0;
	}
	int idx = 0;
	while (s[idx] != '\0')
	{
		char ch = s[idx];
		if (ch >= 'A' && ch <= 'Z')
		{
			counts[ch - 'A']++;
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			counts[ch - 'a']++;
		}
		idx++;
	}
}

int main()
{
	char string[200]; 
	int letter[26]; 
	cout << "Enter a string: ";
	cin.getline(string, 200);
	count(string, letter);
	for (int i = 0; i < 26; i++) 
	{
		if (letter[i] > 0)
		{
			cout << (char)('a' + i) << ": " << letter[i] <<" times" << endl;
		}
	}

	return 0;
}



#include <iostream>
using namespace std;
int main() // C++中main函数需返回int类型，而非void
{ 
	int i = 5, j = 7; // 先定义普通变量
	int* pi, * pj;     // 声明指针变量
	pi = &i;          // pi指向i的地址
	pj = &j;          // pj指向j的地址
	cout << "i=" << i << "\t" << "j=" << j << "\t" << "pi=" << pi << "\t" << "pj=" << pj << endl;
	cout << "&i=" << &i << "\t" << "&j=" << &j << "\t" << "*pi=" << *pi << "\t" << "*pj=" << *pj << endl;
	return 0;
}



#include <stdio.h> // 引入printf所需头文件
int main()   //C语言程序，要了解
{
	int a[] = { 1,2,3 };
	int* p, i;
	p = a;    //将数组a首地址送给p
	for (i = 0; i < 3; i++)
		printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多
}



#include <iostream>
#include <cstring> 
using namespace std;
void f(char* st, int i) 
{
	char temp = st[i]; // 保存st[i]的原始值
	st[i] = '\0';      
	cout << st << endl;
	if (i > 1) 
	{      
		f(st, i - 1);
	}
	st[i] = temp;      // 递归返回后恢复原字符（可选，若不需要保留原字符串可省略）
}
int main() // C++中main需返回int
{ 
	char st[] = "abcd";
	f(st, 4); 
	return 0;
}



#include<iostream>
using namespace std;
int* f() 
{
	// 用new动态分配int数组，存储1,2,3,4
	int* list = new int[4] {1, 2, 3, 4}; 
	return list;
}
int main() 
{
	int* p = f();
	cout << p[0] << endl; 
	cout << p[1] << endl; 
	delete[] p; // 释放动态数组，避免内存泄漏
	p = nullptr; // 防止野指针
	return 0;
}



#include <iostream>
#include <cstring> 
using namespace std;
int indexof(const char* s1, const char* s2) 
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 == 0) 
	{
		return 0;
	}
	if (len2 < len1)
	{
		return -1;
	}
	for (int i = 0; i <= len2 - len1; i++) 
	{
		int j;
		for (j = 0; j < len1; j++) 
		{
			if (s2[i + j] != s1[j])
			{
				break; 
			}
		}
		if (j == len1) 
		{
			return i; 
		}
	}
	return -1;
}

int main() 
{
	char s1[100], s2[100];
	cout << "请输入子串s1：";
	cin >> s1;
	cout << "请输入主串s2：";
	cin >> s2;
	int result = indexof(s1, s2);
	if (result == -1)
	{
		cout << "-1" << endl;
	}
	else 
	{
		cout << "s1是s2的子串，首次匹配的下标为：" << result << endl;
	}

	return 0;
}
*/


#include <iostream>
#include <cctype> 
using namespace std;
int parseHex(const char* const hexString) 
{
	int result = 0;
	const char* p = hexString; 
	while (*p != '\0') 
	{ 
		char c = toupper(*p); 
		int val;
		if (c >= '0' && c <= '9')
		{
			val = c - '0';
		}
		else if (c >= 'A' && c <= 'F')
		{
			val = 10 + (c - 'A');
		}
		else 
		{
			return 0;
		}
		result = result * 16 + val; 
		p++; 
	}
	return result;
}

int main() 
{
	const char* hex1 = "A5";
	cout << "parseHex(\"" << hex1 << "\") = " << parseHex(hex1) << endl;
	return 0;
}



#include <iostream>
using namespace std;
void sortArray(int* arr, int n) 
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}
int main() 
{
	int n;
	cout << "请输入数组元素个数：";
	cin >> n;
	int* arr = new int[n];
	cout << "请输入" << n << "个整数：";
	for (int i = 0; i < n; i++)
	{
		cin >> *(arr + i); 
	}
	cout << "原始数组：";
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
	sortArray(arr, n);
	cout << "排序后数组：";
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
	delete[] arr;
	arr = nullptr; 
	return 0;
}
