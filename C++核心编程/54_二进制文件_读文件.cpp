#include <iostream>
#include <fstream>
using namespace std;


class P1 { //�ṹ��д��ʱ��һ��

public:

	char m_Name[64]; //��ò�Ҫ��string������һЩ����Ԥ֪������
	int m_Age;
};

int main() {
	//����������
	ifstream ifs;

	//���ļ� �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
	}
	else {
		//���ļ�
		P1 p;
		ifs.read((char*)&p, sizeof(P1));
		cout << "������ " << p.m_Name << "�����䣺" << p.m_Age << endl;
	}

	//�ر��ļ�
	ifs.close();

	system("pause");

	return 0;
}