#include <iostream>
using namespace std;

/*
* C++����һ����̳ж����
* class ���� : �̳з�ʽ ����1, �̳з�ʽ ����2...
* ��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
* ʵ�ʿ����в�����ʹ�ö�̳�
*/

class B1 {
public :
	int m_A;

	B1() {
		m_A = 100;
	}
};
class B2 {
public:
	int m_A;

	B2() {
		m_A = 200;
	}
};

class S : public B1, public B2 {
public :

	int m_C;
	int m_D;

	S() {
		m_C = 300;
		m_D = 400;
	}
};

void test0042() {
	S s;
	cout << "sizeof(Son) = " << sizeof(s) << endl;

	//�������г���ͬ����Ա����Ҫ��������
	cout << "B1 m_A = " << s.B1::m_A << endl;
	cout << "B2 m_A = " << s.B2::m_A << endl;
}

int test42() {

	test0042();

	system("pause");

	return 0;
}