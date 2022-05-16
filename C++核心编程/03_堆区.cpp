#include <iostream>
using namespace std;

int* func1() {
	//C++中利用new操作符在堆区开辟数据
	//new返回的是该数据类型的指针
	int *p = new int(10);
	return p;
}

void test1() {
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;
	//如果像释放堆区的数据，使用delete关键字释放
	delete p;

	//cout << *p << endl; //已被释放，再访问就是非法操作
}

void test2() {
	int *arr = new int[10]; //创建可以存放10个元素的数组

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	//释放数组需要加上[]
	delete[] arr;
}

int test03() {
	/*
	* 堆区：
	* 由程序员分配释放，若程序员不释放，程序结束时系统自动回收
	* C++中主要利用new在堆区开辟内存
	*/
	test1();
	test2();


	return 0;
}