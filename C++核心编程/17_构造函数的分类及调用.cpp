#include <iostream>
using namespace std;

class Person1 {

public :
	Person1() {
		cout << "Person1���޲ι��캯��" << endl;
	}
	Person1(int a) {
		age = a;
		cout << "Person1���вι��캯��" << endl;
	}
	//�������캯��
	Person1(const Person1& p) {
		age = p.age; //������������ϵ����Կ������Լ�����
		cout << "Person1�Ŀ������캯��" << endl;
	}

	~Person1() {
		cout << "Person1����������" << endl;
	}

	int getAge() {
		return age;
	}

private :
	int age;
};

void test002() {
	Person1 p1;
	Person1 p2(10);
	Person1 p3(p2);
	cout << p2.getAge() << endl;
	cout << p3.getAge() << endl;
	/*
	* ����Ĭ�Ϲ��캯����ʱ�򣬲��ܼ�()
	* ��Ϊ����()֮�����������Ϊ��һ������������
	*/
	Person1 p4();//void func()

	cout << "---------------------" << endl;

	//2.��ʾ��
	Person1 p5;
	Person1 p6 = Person1(10); //�вι���
	Person1 P7 = Person1(p6); //��������

	//��������
	Person1(10); //��ǰִ�н�����ϵͳ���������յ���������
	cout << "aaa" << endl;

	/*
	* ��Ҫ���ÿ������캯������ʼ����������
	* ����������Ϊ Person1 p7 = Person1 p7;
	* �����ض���
	*/
	//Person1(p7);

	//3.��ʽ��
	Person1 p8 = 10; //Person1 p8 = Person(10);
	Person1 p9 = p8; //��������
}

int test17() {

	test002();

	system("pause");

	return 0;
}