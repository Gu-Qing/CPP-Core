#include <iostream>
using namespace std;

void printA(const int& value) {
	//value = 1000;
	cout << "Value: " << value << endl;
}

int test07() {
	/*
	* 常量引用：
	* 使用场景：用来修饰形参，防止误操作
	*/
	int a = 10;
	//int& ref = 10; //引用必须引一块合法的内存空间
	//加上const之后，编译器将代码修改：int temp = 10; const int& ref = temp;
	const int& ref = 10; 
	//ref = 20; //加入const之后不可以修改

	int a1 = 100;
	printA(a1);
	cout << "a1 = " << a1 << endl;


	system("pause");

	return 0;
}