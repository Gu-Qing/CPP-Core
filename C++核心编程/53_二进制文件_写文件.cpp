#include <iostream>
#include <fstream>
using namespace std;

class P {

public :

	char m_Name[64]; //��ò�Ҫ��string������һЩ����Ԥ֪������
	int m_Age;
};

int test53() {
	//���������� �Ҵ��ļ�
	ofstream ofs("person.txt", ios::out | ios::binary);
	//���ļ�
	//ofs.open("person.txt", ios::out | ios::binary);
	
	//д�ļ�  �ᷢ��txt�ļ��������룬����û�й�ϵ����Ϊ�Ƕ����Ƶķ�ʽ�������ܿ�������
	P p = { "Lisi", 18 };
	//��Ҫд������ݵĵ�ַת��const char *
	ofs.write((const char*)&p, sizeof(P));

	//�ر��ļ�
	ofs.close();

	system("pause");

	return 0;
}