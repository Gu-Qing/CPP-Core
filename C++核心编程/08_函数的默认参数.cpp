#include <iostream>
using namespace std;

//������������ݣ������Լ������ݣ����û�У�����Ĭ��ֵ
/*
* ע��
* 1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󶼱�����Ĭ��ֵ
* 2.������������ʵ����ֻ����һ����Ĭ�ϲ��� [error:�ض���Ĭ�ϲ���]
*/
int func(int a, int b = 20, int c = 30) {
	return a + b + c;
}

int func2(int a = 10, int b = 20);
//int func2(int a, int b);


int test08() {
	cout << func(10, 30) << endl;

	//�����������ʵ�ַֿ�д����Ĭ�ϲ���д����ʵ���У�����main�������棬ֻ��һ�������ͻᱨ��
	cout << func2(50) << endl;

	system("pause");

	return 0;
}

int func2(int a, int b) {
	return a + b;
}
//int func2(int a = 10, int b = 20) {
//	return a + b;
//}