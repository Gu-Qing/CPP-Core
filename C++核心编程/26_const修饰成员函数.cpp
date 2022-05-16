#include <iostream>
using namespace std;
/*
* 常函数：
* 1.成员函数后加const后称为常函数
* 2.常函数内不可以修改成员属性
* 3.成员属性声明时加关键字mutable后，在常函数中依然可以修改
* 
* 常对象：
* 1.声明对象前加const称为常对象
* 2.常对象只能调用常函数
*/

class FClass {
public : 
	//this指针的本质：指针常量 指针的指向是不可以修改的
	//在成员函数后加const，修饰的是this指针，指向的值也不可以修改了
	void showFClass() const {//const FClass * const this;
		//this = NULL; //不可以修改指针的指向
		//this->m_A = 100;
		this->m_B = 100;
	}

	void func() {
		cout << "func" << endl;
	}

	int m_A;
	mutable int m_B; //特殊变量，即使在常函数中，也可以修改
};

void test0026() {
	FClass f;
	f.showFClass();

}
void test0126() {
	const FClass f; //常对象
	//f.m_A = 100;
	f.m_B = 10; //特殊变量，常对象中也可以修改
	f.showFClass();
	//f.func();  //常对象中只能调用常函数,因为非常函数可以修改成员属性
}
int test26() {

	test0026();
	test0126();

	return 0;
}