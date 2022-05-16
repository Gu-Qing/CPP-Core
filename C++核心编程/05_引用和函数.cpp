#include <iostream>
using namespace std;

//ֵ����
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//��ַ����
void mySwap02(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���ô��ݡ��ŵ㣺��ָ���޸�ʵ��
void mySwap03(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//1.��Ҫ���ؾֲ�����������
int& return01() {
	int a = 10;
	return a;
}

int& return02() {
	static int a = 10; //��̬������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	return a;
}

int test05() {
	int a = 10, b = 20;

	cout << "Before exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	mySwap01(a, b); //ֵ���ݣ��ββ�������ʵ��
	cout << "After exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "----------------------------" << endl;

	
	cout << "Before exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	mySwap02(&a, &b); //��ַ���ݣ��βλ�����ʵ��
	cout << "After exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "----------------------------" << endl;
	
	cout << "Before exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	mySwap03(a, b); //���ô��ݣ��βλ�����ʵ��
	cout << "After exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "----------------------------" << endl;

	/*
	* ��������������ֵ��
	* 1.��Ҫ���ؾֲ�����������
	* 2.�����ĵ��ÿ�����Ϊ��ֵ
	*/

	int& ref = return01();
	cout << "ref = " << ref << endl; //���������˱���
	cout << "ref = " << ref << endl; //���ͷ�

	int& ref2 = return02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	//2.�����ĵ��ÿ�����Ϊ��ֵ
	return02() = 1000; //�����ķ���ֵ�����ã�����������þͿ�����Ϊ��ֵ
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}