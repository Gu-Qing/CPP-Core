#include <iostream>
using namespace std;

/*
* ���ã������������
* �������� &���� = ԭ��
* ע�����
* 1.���ñ����ʼ��
* 2.��ʼ���󣬲����Ըı�
*/
int test04() {
	int a = 10;
	int c = 20;
	//int& b; //���󣬱���Ҫ��ʼ��
	int& b = a;

	b = c; //��ֵ���������Ǹ�������


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	a = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	b = 200;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}