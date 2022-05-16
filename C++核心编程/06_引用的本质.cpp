#include <iostream>
using namespace std;

//int& ref是引用，转换为int* const ref = &a;
void func(int& ref) {
	ref = 100; //ref是引用，转换为 *ref = 100
}

int test06() {

	//引用的本质在C++内部实现是一个指针常量

	int a = 10;
	//自动转换为：int* const ref = &a;
	//指针常量指针指向不可改，这也就是引用不可更改的原因
	int& ref = a; 
	ref = 20; //内部发现ref是引用，自动转换为：*ref = 20

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	system("pause");

	return 0;
}