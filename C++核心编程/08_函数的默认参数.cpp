#include <iostream>
using namespace std;

//如果传入了数据，就用自己的数据，如果没有，就用默认值
/*
* 注：
* 1.如果某个位置已经由了默认参数，那么从这个位置往后都必须有默认值
* 2.函数的声明和实现中只能有一个有默认参数 [error:重定义默认参数]
*/
int func(int a, int b = 20, int c = 30) {
	return a + b + c;
}

int func2(int a = 10, int b = 20);
//int func2(int a, int b);


int test08() {
	cout << func(10, 30) << endl;

	//如果是声明和实现分开写，而默认参数写在了实现中，且在main函数后面，只传一个参数就会报错
	cout << func2(50) << endl;

	system("pause");

	return 0;
}

int func2(int a, int b) {
	return a + b;
}
//int func2(int a = 10, int b = 20) {
//	return a + b;
//}