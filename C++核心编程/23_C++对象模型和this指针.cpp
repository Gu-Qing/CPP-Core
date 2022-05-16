#include <iostream>
using namespace std;

//成员变量和成员函数是分开存储的
class User {
	int m_A; //非静态成员变量 属于类的对象上

	static int m_B; //静态成员变量 不属于类的对象上

	void fun() {} //非静态成员函数 不属于类的对象上

	static void func2() {} //静态成员函数 不属于类上的对象上
};

void test0023() {
	User u; 
	//空对象占用的内存空间为 1
	//C++编译器会给每个空对象也分配一个内存空间
	//是为了区分空对象占内存的位置（每个空对象都有独一无二的内存空间）
	cout << "sizeof(u) = " << sizeof(u) << endl;
}

void test0123() {
	User u;
	cout << "sizeof(u) = " << sizeof(u) << endl;
}

int test23() {

	test0023();
	test0123();

	system("pause");

	return 0;
}