#include <iostream>
using namespace std;

/*
* ͨ���������麯����ʵ����û������ģ����Կ��Խ��麯����Ϊ���麯��
* virtual ����ֵ���� ������(�����б�) = 0;
* ���������˴��麯����Ҳ�ͳ�Ϊ������
* ��������ص㣺
* 1.�޷�ʵ��������
* 2.���������д�������еĴ��麯��������Ҳ���ڳ�����
*/
//���麯���ͳ�����
class AbstractBase {
public :
	//ֻҪ��һ�����麯�������ǳ�����
	virtual void func() = 0;
};

class ExtendBase1 : public AbstractBase{
public :
	//����д���麯����Ҳ�ǳ�����
};

class ExtendBase2 : public AbstractBase {
public :
	virtual void func() {
		cout << "ExtendBase2" << endl;
	}
};

void test0046() {

	//�ᱨ��������ʵ��������
	//new AbstractBase;
	//AbstractBase ab; 

	//ExtendBase1 eb;

	AbstractBase *aBase = new ExtendBase2;
	aBase->func();
}

int test46() {

	test0046();

	system("pause");

	return 0;
}