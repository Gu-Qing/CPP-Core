#include <iostream>
using namespace std;

class Father {
public :
	Father() {
		cout << "Father�Ĺ��캯��" << endl;
	}
	~Father() {
		cout << "Father����������" << endl;
	}
};
class Son : public Father{
public:
	Son() {
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son() {
		cout << "Son����������" << endl;
	}
};

int test40() {

	//�ȵ��ø���Ĺ��캯�����ٵ�������Ĺ��캯���������෴��
	Son s;

	return 0;
}