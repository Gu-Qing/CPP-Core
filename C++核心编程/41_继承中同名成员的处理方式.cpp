#include <iostream>
using namespace std;

/*
* 1.����������ֱ�ӷ��ʵ�������ͬ����Ա����
* 2.����������������Է��ʵ�����ͬ����Ա
* 3.�������븸��ӵ��ͬ���ĳ�Ա��������������ظ�����ͬ����Ա��������������ɷ���
*/

class Fath {
public :
	int m_A = 0;
	static int m_B;

	void func() {
		cout << "Fath's func()" << endl;
	}
	void func2(int a) {
		cout << "Fath's func2()" << a << endl;
	}

	static void func3() {
		cout << "Fath's static func3()" << endl;
	}
};

int Fath::m_B = 100;

class Daughter : public Fath{
public :
	int m_A = 0;
	static int m_B;

	void func() {
		cout << "Daughter's func()" << endl;
	}
	void func2() {
		cout << "Daughter's func2()" << endl;
	}

	static void func3() {
		cout << "Daughter's static func3()" << endl;
	}
};

int Daughter::m_B = 200;


int test41() {

	Daughter d;
	cout << "Daughter's m_B = " << d.m_A << endl;
	//���ͨ�����������ʸ����е�ͬ����Ա����Ҫ��������
	cout << "Fath's m_B = " << d.Fath::m_A << endl;
	//���ø����еĳ�Ա����ͬ��
	d.func();
	d.Fath::func();
	//���Ҫ���������б����ص�ͬ����Ա��������Ҫ��������(��̬��Ա����ͬ��)
	//d.func2(100);
	d.Fath::func2(100);

	cout << "---------------------------" << endl;

	//ͨ���������ͬ����̬��Ա����
	cout << "Daughter�µ�static m_B = " << d.m_B << endl;
	cout << "Fath�µ�static m_B = " << d.Fath::m_B << endl;
	//ͨ����������ͬ����̬��Ա����
	cout << "Daughter�µ�static m_B = " << Daughter::m_B << endl;
	//��һ��::����ͨ��������ʽ���ʣ��ڶ���::������ʸ����������µ�����
	cout << "Fath�µ�static m_B = " << Daughter::Fath::m_B << endl;

	//ͨ���������ͬ����̬��Ա����
	d.func3();
	d.Fath::func3();
	//ͨ����������ͬ����̬��Ա����
	Daughter::func3();
	Daughter::Fath::func3();

	return 0;
}