#include <iostream>
using namespace std;

void over() {
	cout << "over�ĵ���" << endl;
}
void over(int a) {
	cout << "over�ĵ��ã�������" << a << endl;
}
void over(double a) {
	cout << "over�ĵ��ã�������" << a << endl;
}
void over(int a, double b) {
	cout << "over�ĵ��ã�������" << a  << ' ' << b << endl;
}
void over(double b, int a) {
	cout << "over�ĵ��ã�������" << b << ' ' << a << endl;
}
//�����ķ���ֵ��������Ϊ�������ص��������ᱨ��
//int over(double b, int a) {
//	cout << "over�ĵ��ã�������" << b << ' ' << a << endl;
//}

void fun(int& a) { //int &a = 10; ���Ϸ�
	cout << "fun(int &a)����" << endl;
}

void fun(const int& a) { //const int &a = 10; �Ϸ�
	cout << "fun(const int& a)����" << endl;
}

void fun2(int a) {
	cout << "fun2(int a)����" << endl;
}
void fun2(int a, int b = 20) {
	cout << "fun2(int a, int b = 20)����" << endl;
}

int test10() {
	/*
	* �������أ�
	* ���ã�������������ͬ����߸�����
	* ������������������
	* 1.ͬһ����������
	* 2.����������ͬ
	* 3.�����������Ͳ�ͬor������ͬor˳��ͬ
	* ע�⣺����������ֵ��������Ϊ�������ص�����
	* 
	* ע�����
	* 1.������Ϊ��������
	* 2.������������Ĭ�ϲ���
	*/

	over();
	over(10);
	over(3.14);
	over(10, 3.14);
	over(3.14, 10);
	cout << "------------------" << endl;
	int a = 10;
	fun(a); //�����һ���������룬Ĭ�ϻ�������ò��������غ���
	fun(10); //ֱ�Ӵ��볣����Ĭ�ϵ���const int& a
	cout << "------------------" << endl;

	//fun2(10); //�����õĺ�����������Ĭ�ϲ��������ֶ����ԣ���������
	fun2(10, 20); 

	system("pause");

	return 0;
}