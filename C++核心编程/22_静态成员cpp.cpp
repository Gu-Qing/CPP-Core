#include <iostream>
using namespace std;

/*
* ��̬��Ա������
* ���ж�����ͬһ������
* ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
*/
class staticTest {
public :
	static void func() {
		m_A = 100;
		//��̬��Ա���������Է��ʷǾ�̬��Ա����
		// ��Ϊ��̬��Ա�����Ǵ�Ҷ�����һ�ݣ������޷��жϷǾ�̬��Ա�������ĸ��ض�����
		// ��˲����Է���
		//m_B = 20; 
		cout << "Static void func() m_A = " << m_A << endl;
	}

	static int m_A; //��̬��Ա����
	int m_B;

	//��̬��Ա����Ҳ���ɷ���Ȩ�޵�
private :
	static void func2() {
		cout << "Static void func2()" << endl;
	}
};

int staticTest::m_A = 0; //���⸳ֵ

void test0022() {
	//ͨ��������з���
	staticTest s;
	s.func();
	//ͨ����������
	staticTest::func();
	//staticTest::func2(); //������ʲ���˽�еľ�̬��Ա����
}
int test22() {

	test0022();

	return 0;
}