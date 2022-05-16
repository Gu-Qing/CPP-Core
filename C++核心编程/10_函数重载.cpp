#include <iostream>
using namespace std;

void over() {
	cout << "over的调用" << endl;
}
void over(int a) {
	cout << "over的调用，参数：" << a << endl;
}
void over(double a) {
	cout << "over的调用，参数：" << a << endl;
}
void over(int a, double b) {
	cout << "over的调用，参数：" << a  << ' ' << b << endl;
}
void over(double b, int a) {
	cout << "over的调用，参数：" << b << ' ' << a << endl;
}
//函数的返回值不可以作为函数重载的条件，会报错
//int over(double b, int a) {
//	cout << "over的调用，参数：" << b << ' ' << a << endl;
//}

void fun(int& a) { //int &a = 10; 不合法
	cout << "fun(int &a)调用" << endl;
}

void fun(const int& a) { //const int &a = 10; 合法
	cout << "fun(const int& a)调用" << endl;
}

void fun2(int a) {
	cout << "fun2(int a)调用" << endl;
}
void fun2(int a, int b = 20) {
	cout << "fun2(int a, int b = 20)调用" << endl;
}

int test10() {
	/*
	* 函数重载：
	* 作用：函数名可以相同，提高复用性
	* 函数重载满足条件：
	* 1.同一个作用于下
	* 2.函数名称相同
	* 3.函数参数类型不同or个数不同or顺序不同
	* 注意：函数发返回值不可以作为函数重载的条件
	* 
	* 注意事项：
	* 1.引用作为重载条件
	* 2.函数重载碰到默认参数
	*/

	over();
	over(10);
	over(3.14);
	over(10, 3.14);
	over(3.14, 10);
	cout << "------------------" << endl;
	int a = 10;
	fun(a); //如果是一个变量传入，默认会调用引用参数的重载函数
	fun(10); //直接传入常量，默认调用const int& a
	cout << "------------------" << endl;

	//fun2(10); //当调用的函数重载碰到默认参数，出现二义性，出错，避免
	fun2(10, 20); 

	system("pause");

	return 0;
}