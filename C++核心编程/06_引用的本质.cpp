#include <iostream>
using namespace std;

//int& ref�����ã�ת��Ϊint* const ref = &a;
void func(int& ref) {
	ref = 100; //ref�����ã�ת��Ϊ *ref = 100
}

int test06() {

	//���õı�����C++�ڲ�ʵ����һ��ָ�볣��

	int a = 10;
	//�Զ�ת��Ϊ��int* const ref = &a;
	//ָ�볣��ָ��ָ�򲻿ɸģ���Ҳ�������ò��ɸ��ĵ�ԭ��
	int& ref = a; 
	ref = 20; //�ڲ�����ref�����ã��Զ�ת��Ϊ��*ref = 20

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	system("pause");

	return 0;
}