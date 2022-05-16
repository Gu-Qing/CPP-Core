#include <iostream>
using namespace std;

int g_a = 10;

const int c_g_a = 10; //全局常量
/*
* 全局区中：全局变量、静态变量（static）、常量（字符串常量，const修饰的全局变量）
* 非全局区：局部变量、const修饰的局部变量
*/
int test01() {

	//局部变量
	int a = 10;
	cout << "局部变量的地址：" << (int)&a << endl;
	cout << "全局变量的地址：" << (int)&g_a << endl;

	//静态变量
	static int s_a = 10;
	cout << "静态变量的地址：" << (int)&s_a << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址：" << (int)&"hello" << endl;

	//const修饰的变量
	const int c_l_a = 10;
	cout << "const修饰的全局变量（常量）的地址：" << (int)&c_g_a << endl;
	cout << "const修饰的局部变量（常量）的地址：" << (int)&c_l_a << endl;



	system("pause");

	return 0;
}