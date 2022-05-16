#include <iostream>
using namespace std;

//目前阶段的占位参数，还用不到
//占位参数也可以有默认参数
void func3(int a, int = 10) {
	cout << "this is test" << endl;
}

int test09() {
	/*
	* 函数占位参数：
	* 返回值类型 函数名(数据类型) {}
	*/
	func3(30);
	func3(10, 20); //没有默认参数的时候必须填补占位参数

	return 0;
}