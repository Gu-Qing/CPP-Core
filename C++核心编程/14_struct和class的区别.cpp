#include <iostream>
using namespace std;

//struct��class��Ψһ����Ĭ�ϵķ���Ȩ�޲�ͬ
//structĬ��Ȩ�ޣ�����
//privateĬ��Ȩ�ޣ�˽��
class C1{
	int m_A; //private
};
struct S1 {
	int m_A; //public
};
int test14() {

	S1 s1;
	C1 c1;
	
	s1.m_A = 100;
	cout << s1.m_A << endl;
	//c1.m_A = 100; //����

	system("pause");

	return 0;
}