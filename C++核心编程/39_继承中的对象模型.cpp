#include <iostream>
using namespace std;

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //������˽�еĳ�Ա������Ȼ���ʲ������������ɻᱻ�̳���ȥ
};
class Son : public Base {
public:
	int m_D;
};

int test39() {
	/*
	* ���ÿ�����Ա������ʾ���߲鿴����ģ��
	* 1.��ת�̷�
	* 2.��ת�ļ�·���� cd ����·��
	* 3.�鿴�ļ��� dir
	* 4.���룺cl /d1 reportSingleClassLayoutSon "39_�̳��еĶ���ģ��.cpp"
	*/

	//�����е����зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	cout << "sizeof(Son) = " << sizeof(Son) << endl;

	system("pause");

	return 0;
}