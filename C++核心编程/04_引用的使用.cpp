#include <iostream>
using namespace std;

/*
* 引用：给变量起别名
* 数据类型 &别名 = 原名
* 注意事项：
* 1.引用必须初始化
* 2.初始化后，不可以改变
*/
int test04() {
	int a = 10;
	int c = 20;
	//int& b; //错误，必须要初始化
	int& b = a;

	b = c; //赋值操作，不是更改引用


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	a = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	b = 200;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}