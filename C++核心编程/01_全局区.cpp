#include <iostream>
using namespace std;

int g_a = 10;

const int c_g_a = 10; //ȫ�ֳ���
/*
* ȫ�����У�ȫ�ֱ�������̬������static�����������ַ���������const���ε�ȫ�ֱ�����
* ��ȫ�������ֲ�������const���εľֲ�����
*/
int test01() {

	//�ֲ�����
	int a = 10;
	cout << "�ֲ������ĵ�ַ��" << (int)&a << endl;
	cout << "ȫ�ֱ����ĵ�ַ��" << (int)&g_a << endl;

	//��̬����
	static int s_a = 10;
	cout << "��̬�����ĵ�ַ��" << (int)&s_a << endl;

	//����
	//�ַ�������
	cout << "�ַ��������ĵ�ַ��" << (int)&"hello" << endl;

	//const���εı���
	const int c_l_a = 10;
	cout << "const���ε�ȫ�ֱ������������ĵ�ַ��" << (int)&c_g_a << endl;
	cout << "const���εľֲ��������������ĵ�ַ��" << (int)&c_l_a << endl;



	system("pause");

	return 0;
}