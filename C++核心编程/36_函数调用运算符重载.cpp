#include <iostream>
#include <string>
using namespace std;

/*
* 函数调用运算符()也可以重载
* 重载后使用的方式非常像函数调用，因此也称“仿函数”
* 仿函数没有固定写法，非常灵活
*/
class MyPrint {
public :
	//重载函数调用运算符
	void operator() (string test) {
		cout << test << endl;
	}
};

void MyTest02(string test) {
	cout << test << endl;
}

void test0036() {
	MyPrint myPrint;
	myPrint("test");
	MyTest02("helloworld");
}

//仿函数没有固定写法
class MyAdd {
public :
	int operator() (int num1, int num2) {
		return num1 + num2;
	}
};

int MyAdd02(int a, int b) {
	return a + b;
}

void test0136() {
	MyAdd add;
	cout << add(10, 20) << endl;;
	cout << MyAdd02(10, 20) << endl;
	
	//匿名函数对象。MyAdd()：创建匿名对象，(100, 100)是调用了重载的()
	cout << MyAdd() (100, 100) << endl;
}

int test36() {

	test0036();
	test0136();

	system("pause");

	return 0;
}