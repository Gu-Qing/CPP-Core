#include <iostream>
using namespace std;

/*
* 1.子类对象可以直接访问到子类中同名成员函数
* 2.子类对象加作用域可以访问到父类同名成员
* 3.当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可访问
*/

class Fath {
public :
	int m_A = 0;
	static int m_B;

	void func() {
		cout << "Fath's func()" << endl;
	}
	void func2(int a) {
		cout << "Fath's func2()" << a << endl;
	}

	static void func3() {
		cout << "Fath's static func3()" << endl;
	}
};

int Fath::m_B = 100;

class Daughter : public Fath{
public :
	int m_A = 0;
	static int m_B;

	void func() {
		cout << "Daughter's func()" << endl;
	}
	void func2() {
		cout << "Daughter's func2()" << endl;
	}

	static void func3() {
		cout << "Daughter's static func3()" << endl;
	}
};

int Daughter::m_B = 200;


int test41() {

	Daughter d;
	cout << "Daughter's m_B = " << d.m_A << endl;
	//如果通过子类对象访问父类中的同名成员，需要加作用域
	cout << "Fath's m_B = " << d.Fath::m_A << endl;
	//调用父类中的成员函数同理
	d.func();
	d.Fath::func();
	//如果要访问鼠类中被隐藏的同名成员函数，需要加作用域(静态成员函数同理)
	//d.func2(100);
	d.Fath::func2(100);

	cout << "---------------------------" << endl;

	//通过对象访问同名静态成员属性
	cout << "Daughter下的static m_B = " << d.m_B << endl;
	cout << "Fath下的static m_B = " << d.Fath::m_B << endl;
	//通过类名访问同名静态成员属性
	cout << "Daughter下的static m_B = " << Daughter::m_B << endl;
	//第一个::代表通过类名方式访问，第二个::代表访问父类作用域下的属性
	cout << "Fath下的static m_B = " << Daughter::Fath::m_B << endl;

	//通过对象访问同名静态成员函数
	d.func3();
	d.Fath::func3();
	//通过类名访问同名静态成员函数
	Daughter::func3();
	Daughter::Fath::func3();

	return 0;
}