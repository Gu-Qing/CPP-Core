#include <iostream>
using namespace std;

//Ŀǰ�׶ε�ռλ���������ò���
//ռλ����Ҳ������Ĭ�ϲ���
void func3(int a, int = 10) {
	cout << "this is test" << endl;
}

int test09() {
	/*
	* ����ռλ������
	* ����ֵ���� ������(��������) {}
	*/
	func3(30);
	func3(10, 20); //û��Ĭ�ϲ�����ʱ������ռλ����

	return 0;
}