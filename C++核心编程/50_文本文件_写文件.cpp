#include <iostream>
#include <fstream>
using namespace std;

int test50() {
	//����������
	ofstream ofs; 

	//ָ���򿪷�ʽ
	ofs.open("test1.txt", ios::out); //���к�����ڵ�ǰ�ļ������ļ����ҵ�test1.txt�ļ�

	//д����
	ofs << "����������" << endl;
	ofs << "���䣺��" << endl;
	ofs << "���䣺18" << endl;

	ofs.close();
	
	system("pause");

	return 0;
}