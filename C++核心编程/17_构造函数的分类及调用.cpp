#include <iostream>
using namespace std;

class Person1 {

public :
	Person1() {
		cout << "Person1的无参构造函数" << endl;
	}
	Person1(int a) {
		age = a;
		cout << "Person1的有参构造函数" << endl;
	}
	//拷贝构造函数
	Person1(const Person1& p) {
		age = p.age; //将传入的人身上的属性拷贝到自己身上
		cout << "Person1的拷贝构造函数" << endl;
	}

	~Person1() {
		cout << "Person1的析构函数" << endl;
	}

	int getAge() {
		return age;
	}

private :
	int age;
};

void test002() {
	Person1 p1;
	Person1 p2(10);
	Person1 p3(p2);
	cout << p2.getAge() << endl;
	cout << p3.getAge() << endl;
	/*
	* 调用默认构造函数的时候，不能加()
	* 因为加上()之后编译器会认为是一个函数的声明
	*/
	Person1 p4();//void func()

	cout << "---------------------" << endl;

	//2.显示法
	Person1 p5;
	Person1 p6 = Person1(10); //有参构造
	Person1 P7 = Person1(p6); //拷贝构造

	//匿名对象
	Person1(10); //当前执行结束后，系统会立即回收掉匿名函数
	cout << "aaa" << endl;

	/*
	* 不要利用拷贝构造函数，初始化匿名对象
	* 编译器会认为 Person1 p7 = Person1 p7;
	* 报错，重定义
	*/
	//Person1(p7);

	//3.隐式法
	Person1 p8 = 10; //Person1 p8 = Person(10);
	Person1 p9 = p8; //拷贝构造
}

int test17() {

	test002();

	system("pause");

	return 0;
}