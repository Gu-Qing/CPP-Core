#include <iostream>
using namespace std;

//值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//地址传递
void mySwap02(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//引用传递。优点：简化指针修改实参
void mySwap03(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//1.不要返回局部变量的引用
int& return01() {
	int a = 10;
	return a;
}

int& return02() {
	static int a = 10; //静态变量，全局区上的数据在程序结束后系统释放
	return a;
}

int test05() {
	int a = 10, b = 20;

	cout << "Before exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	mySwap01(a, b); //值传递，形参不会修饰实参
	cout << "After exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "----------------------------" << endl;

	
	cout << "Before exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	mySwap02(&a, &b); //地址传递，形参会修饰实参
	cout << "After exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "----------------------------" << endl;
	
	cout << "Before exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	mySwap03(a, b); //引用传递，形参会修饰实参
	cout << "After exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "----------------------------" << endl;

	/*
	* 引用作函数返回值：
	* 1.不要返回局部变量的引用
	* 2.函数的调用可以作为左值
	*/

	int& ref = return01();
	cout << "ref = " << ref << endl; //编译器作了保留
	cout << "ref = " << ref << endl; //已释放

	int& ref2 = return02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	//2.函数的调用可以作为左值
	return02() = 1000; //函数的返回值是引用，这个函数调用就可以作为左值
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}