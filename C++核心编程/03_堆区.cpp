#include <iostream>
using namespace std;

int* func1() {
	//C++������new�������ڶ�����������
	//new���ص��Ǹ��������͵�ָ��
	int *p = new int(10);
	return p;
}

void test1() {
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;
	//������ͷŶ��������ݣ�ʹ��delete�ؼ����ͷ�
	delete p;

	//cout << *p << endl; //�ѱ��ͷţ��ٷ��ʾ��ǷǷ�����
}

void test2() {
	int *arr = new int[10]; //�������Դ��10��Ԫ�ص�����

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	//�ͷ�������Ҫ����[]
	delete[] arr;
}

int test03() {
	/*
	* ������
	* �ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱϵͳ�Զ�����
	* C++����Ҫ����new�ڶ��������ڴ�
	*/
	test1();
	test2();


	return 0;
}