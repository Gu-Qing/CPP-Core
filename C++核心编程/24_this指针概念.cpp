#include <iostream>
using namespace std;

/*
* C++通过提供特殊的对象指针，this指针指向被调用的成员函数所属的对象
* 1.this指针是隐含每一个非静态成员函数内的一种指针
* 2.this指针不需要定义，直接使用即可
* this指针的用途：
* 1.当形参和成员变量同名时，可用this指针来区分
* 2.在类的非静态成员函数中返回对象本身，可用return *this
*/

class Users {

private :
	int age;
public :
	Users(int age) {
		//this指针指向的是被调用的成员函数 所属的对象
		this->age = age;
	}
	int getAge() {
		return this->age;
	}

	Users& UserAddAge(Users& u) {
		this->age += u.age;
		//this是指向p2的指针，而*this指向的是p2这个对象本体
		return *this;
	}
};

void test0024() {
	Users u(18);
	cout << u.getAge() << endl;

	Users u1(10);
	Users u2(10);

	//链式编程思想
	u2.UserAddAge(u1).UserAddAge(u1).UserAddAge(u1);
	cout << "u2's age = " << u2.getAge() << endl;

}

int test24() {

	test0024();

	system("pause");

	return 0;
}