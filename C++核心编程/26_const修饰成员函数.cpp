#include <iostream>
using namespace std;
/*
* ��������
* 1.��Ա�������const���Ϊ������
* 2.�������ڲ������޸ĳ�Ա����
* 3.��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
* 
* ������
* 1.��������ǰ��const��Ϊ������
* 2.������ֻ�ܵ��ó�����
*/

class FClass {
public : 
	//thisָ��ı��ʣ�ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//�ڳ�Ա�������const�����ε���thisָ�룬ָ���ֵҲ�������޸���
	void showFClass() const {//const FClass * const this;
		//this = NULL; //�������޸�ָ���ָ��
		//this->m_A = 100;
		this->m_B = 100;
	}

	void func() {
		cout << "func" << endl;
	}

	int m_A;
	mutable int m_B; //�����������ʹ�ڳ������У�Ҳ�����޸�
};

void test0026() {
	FClass f;
	f.showFClass();

}
void test0126() {
	const FClass f; //������
	//f.m_A = 100;
	f.m_B = 10; //�����������������Ҳ�����޸�
	f.showFClass();
	//f.func();  //��������ֻ�ܵ��ó�����,��Ϊ�ǳ����������޸ĳ�Ա����
}
int test26() {

	test0026();
	test0126();

	return 0;
}