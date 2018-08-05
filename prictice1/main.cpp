#include<iostream>
#include<string>
#include<string.h>
#include<vld.h>
using namespace std;

bool FindSameval(int *arr, int len, int *brr)
{
	if (len < 0 && brr == NULL&&arr == NULL)return false;
	for (int i = 0; i < len - 1; ++i)
	{
		if (arr[i] > len)
		{
			cout << "不符合算法要求" << endl;
			return false;
		}
	}
	for (int j =0; j < len - 1; ++j)
	{
		while (arr[j] != j)
		{
			if (arr[j] == arr[arr[j]])
			{
				*brr = arr[j];
				cout << *brr << endl;
				return true;
			}
			int temp = arr[j];
			arr[j] = arr[temp];
			arr[temp] = temp;
		}
	}
	return false;
}
int main()
{
	int a[10] = { 2,3,4,5,6,3,2,3,4,10 };
	int n = sizeof(a) / sizeof(a[0]);
	int *b =(int*)malloc(sizeof(int)*n);
	if (FindSameval(a, n, b))
	{
		cout << "找到相同元素" << endl;
	}
	else
	{
		cout << "没有找到" << endl;
	}
}

//class A
//{
//public:
//	A() { cout << "A()..." << endl; }
//	 virtual ~A() { cout << "~A()..." << endl; }
//
//public:
//	 void func1()
//	{
//		cout << "A::func1()" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	B() { cout << "B()..." << endl; }
//	~B() { cout << "~B()..." << endl; }
//
//public:
//	virtual void func1()
//	{
//		cout << "B::func1()" << endl;
//	}
//};
//
//int main()
//{
//	A *pb = new B;
//	pb->func1();
//	delete pb;
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	string s;
//	cin >> s;
//	for (int i = 0; i < s.length(); ++i)
//	{
//		cout << s[i] << endl;
//	}
//	string::iterator it = s.begin();
//	for (; it != s.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//
//	
//	//cout << s[1] << endl;
//	return 0;
//}