#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int test52() {
	//����������
	ifstream ifs;

	//���ļ��������ж��Ƿ�򿪳ɹ�
	ifs.open("test1.txt", ios::in);

	if (!ifs.is_open()) {
		cout << "�ļ���ʧ�ܣ�" << endl;
	}
	else {
		//������

		//��һ��
		char buf[1024] = { 0 }; //���ļ��е�����ȫ���ŵ��ַ�������
		while (ifs >> buf) { //ʹ���������������ÿһ�У�����ͷ�˻᷵�ؼ�
			cout << buf << endl;
		}

		//�ڶ���
		//char buf[1024] = { 0 };
		//while (ifs.getline(buf, sizeof(buf))) {
		//	cout << buf << endl;
		//}

		//������
		//string buf;
		//while (getline(ifs, buf)) {
		//	cout << buf << endl;
		//}
		
		//������  ���Ƽ� һ������Ч�ʱȽϵ�
		//char c;
		//while ( (c = ifs.get()) != EOF) {
		//	cout << c;
		//}
	}
	ifs.close();

	system("pause");

	return 0;
}