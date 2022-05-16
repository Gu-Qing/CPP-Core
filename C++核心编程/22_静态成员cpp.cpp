#include <iostream>
using namespace std;

/*
* 静态成员函数：
* 所有对象共享同一个函数
* 静态成员函数只能访问静态成员变量
*/
class staticTest {
public :
	static void func() {
		m_A = 100;
		//静态成员函数不可以访问非静态成员变量
		// 因为静态成员函数是大家都共享一份，所以无法判断非静态成员是属于哪个特定的类
		// 因此不可以访问
		//m_B = 20; 
		cout << "Static void func() m_A = " << m_A << endl;
	}

	static int m_A; //静态成员变量
	int m_B;

	//静态成员函数也是由访问权限的
private :
	static void func2() {
		cout << "Static void func2()" << endl;
	}
};

int staticTest::m_A = 0; //类外赋值

void test0022() {
	//通过对象进行访问
	staticTest s;
	s.func();
	//通过类名访问
	staticTest::func();
	//staticTest::func2(); //类外访问不到私有的静态成员函数
}
int test22() {

	test0022();

	return 0;
}