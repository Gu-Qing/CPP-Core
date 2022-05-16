#include <iostream>
using namespace std;
/*
* 1.使用一个已经创建完毕的对象来初始化一个新对象
* 2.值传递的方式给函数参数传值
* 3.值方式返回局部对象
* 
* 构造函数调用规则
* 如果用户定义有参构造函数，C++不再提供默认无参构造函数，但是会提供默认拷贝构造函数
* 如果用户定义拷贝构造函数，C++不会再提供其他构造函数
*/
class Person2 {
public :
	Person2() {
		cout << "Person默认构造函数" << endl;
	}
	Person2(int age) {
		m_age = age;
		cout << "Person的有参构造" << endl;
	}
	Person2(const Person2& p) {
		m_age = p.m_age;
		cout << "Person的拷贝构造函数" << endl;
	}

	~Person2() {
		cout << "Person的析构函数" << endl;
	}

	int getAge() {
		return m_age;
	}

private :
	int m_age;
};

void test003() {
	Person2 p1(20);
	Person2 p2(p1);

	cout << "p2的年龄：" << p2.getAge() << endl;
}

//值传递的方式给函数参数传值
void dow(Person2 p) {

}
void test004() {
	Person2 p;
	dow(p); //实参传给形参的时候就会调用拷贝构造函数
}

//值方式返回局部对象
Person2 dow2() {
	Person2 p1;
	cout << "dow2中p1的地址： " << (int)&p1 << endl;
	return p1;
}

void test005() {
	Person2 p = dow2();
	cout << "test005中p的地址： " << (int)&p << endl;;
}

int test18() {

	//test003();
	//test004();
	test005();

	system("pause");

	return 0;
}