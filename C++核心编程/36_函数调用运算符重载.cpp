#include <iostream>
#include <string>
using namespace std;

/*
* �������������()Ҳ��������
* ���غ�ʹ�õķ�ʽ�ǳ��������ã����Ҳ�ơ��º�����
* �º���û�й̶�д�����ǳ����
*/
class MyPrint {
public :
	//���غ������������
	void operator() (string test) {
		cout << test << endl;
	}
};

void MyTest02(string test) {
	cout << test << endl;
}

void test0036() {
	MyPrint myPrint;
	myPrint("test");
	MyTest02("helloworld");
}

//�º���û�й̶�д��
class MyAdd {
public :
	int operator() (int num1, int num2) {
		return num1 + num2;
	}
};

int MyAdd02(int a, int b) {
	return a + b;
}

void test0136() {
	MyAdd add;
	cout << add(10, 20) << endl;;
	cout << MyAdd02(10, 20) << endl;
	
	//������������MyAdd()��������������(100, 100)�ǵ��������ص�()
	cout << MyAdd() (100, 100) << endl;
}

int test36() {

	test0036();
	test0136();

	system("pause");

	return 0;
}