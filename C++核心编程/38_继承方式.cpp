#include <iostream>
using namespace std;

//�����̳�
class Base1 {
public :
	int m_A;
protected :
	int m_B;
private :
	int m_C;
};

//�����̳�
class Son1 : public Base1 {
public :
	void func() {
		m_A = 10; //�����еĹ���Ȩ�޳�Ա����������Ȼ�ǹ���Ȩ��
		m_B = 20; //�����еı���Ȩ�޳�Ա����������Ȼ�Ǳ���дȨ��
		//m_C = 30; //�����е�˽��Ȩ�޳�Ա��������ʲ���
	}
};

void test0038() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 200; //����Son1�У�m_B�Ǳ���Ȩ�ޣ�������ʲ���
}

//�����̳�
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2 {
public:
	void func() {
		m_A = 10; //�����еĹ���Ȩ�޳�Ա�������б�Ϊ����Ȩ��
		m_B = 20; //�����еı���Ȩ�޳�Ա����������Ȼ�Ǳ���дȨ��
		//m_C = 30; //�����е�˽��Ȩ�޳�Ա��������ʲ���
	}
};
void test0138() {
	Son2 s1;
	//s1.m_A = 100; //Son2�У�m_A��Ϊ�˱���Ȩ�ޣ������޷�����
	//s1.m_B = 200; //����Son2�У�m_B�Ǳ���Ȩ�ޣ�������ʲ���
}

//˽�м̳�
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 : private Base3 {
public:
	void func() {
		m_A = 10; //�����еĹ���Ȩ�޳�Ա�������б�Ϊ˽��Ȩ��
		m_B = 20; //�����еı���Ȩ�޳�Ա�������б�Ϊ˽��Ȩ��
		//m_C = 30; //�����е�˽��Ȩ�޳�Ա��������ʲ���
	}
};

void test0238() {
	Son3 s1;
	//s1.m_A = 100; //Son3�У�m_A��Ϊ��˽��Ȩ�ޣ������޷�����
	//s1.m_B = 200; //����Son3�У�m_B��˽��Ȩ�ޣ�������ʲ���
}

class GrandSon3 : public Son3 {
public :
	void func() {
		//m_A = 10; //�����е�˽��Ȩ�޳�Ա��������ʲ���
		//m_B = 20; //�����е�˽��Ȩ�޳�Ա��������ʲ���
	}
};

int test38() {

	system("pause");

	return 0;
}