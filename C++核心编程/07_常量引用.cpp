#include <iostream>
using namespace std;

void printA(const int& value) {
	//value = 1000;
	cout << "Value: " << value << endl;
}

int test07() {
	/*
	* �������ã�
	* ʹ�ó��������������βΣ���ֹ�����
	*/
	int a = 10;
	//int& ref = 10; //���ñ�����һ��Ϸ����ڴ�ռ�
	//����const֮�󣬱������������޸ģ�int temp = 10; const int& ref = temp;
	const int& ref = 10; 
	//ref = 20; //����const֮�󲻿����޸�

	int a1 = 100;
	printA(a1);
	cout << "a1 = " << a1 << endl;


	system("pause");

	return 0;
}