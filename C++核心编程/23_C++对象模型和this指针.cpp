#include <iostream>
using namespace std;

//��Ա�����ͳ�Ա�����Ƿֿ��洢��
class User {
	int m_A; //�Ǿ�̬��Ա���� ������Ķ�����

	static int m_B; //��̬��Ա���� ��������Ķ�����

	void fun() {} //�Ǿ�̬��Ա���� ��������Ķ�����

	static void func2() {} //��̬��Ա���� ���������ϵĶ�����
};

void test0023() {
	User u; 
	//�ն���ռ�õ��ڴ�ռ�Ϊ 1
	//C++���������ÿ���ն���Ҳ����һ���ڴ�ռ�
	//��Ϊ�����ֿն���ռ�ڴ��λ�ã�ÿ���ն����ж�һ�޶����ڴ�ռ䣩
	cout << "sizeof(u) = " << sizeof(u) << endl;
}

void test0123() {
	User u;
	cout << "sizeof(u) = " << sizeof(u) << endl;
}

int test23() {

	test0023();
	test0123();

	system("pause");

	return 0;
}