#include <iostream>
using namespace std;

//class Java {
//public :
//	void header() {
//		cout << "��ҳ��������" << endl;
//	}
//	void footer() {
//		cout << "ע������..." << endl;
//	}
//	void content() {
//		cout << "Java" << endl;
//	}
//};
//class Python {
//public:
//	void header() {
//		cout << "��ҳ��������" << endl;
//	}
//	void footer() {
//		cout << "ע������..." << endl;
//	}
//	void content() {
//		cout << "Python" << endl;
//	}
//};

//�̳�ʵ��
//�̳еĺô��������ظ�����
//�﷨�� class ���� : �̳з�ʽ ����
//���� == ������
//���� == ���ࡢ����
class BasePage {
public :
	void header() {
		cout << "��ҳ��������" << endl;
	}
	void footer() {
		cout << "ע������..." << endl;
	}
};

class Java : public BasePage {
public :
	void content() {
		cout << "java" << endl;
	}
};

class Python : public BasePage {
public :
	void content() {
		cout << "python" << endl;
	}
};

void test0037() {
	Java java;
	cout << "Javaҳ��: " << endl;
	java.header();
	java.footer();
	java.content();
	cout << "--------------------" << endl;
	Python py;
	py.header();
	py.footer();
	py.content();
}

int test37() {

	test0037();

	system("pause");

	return 0;
}