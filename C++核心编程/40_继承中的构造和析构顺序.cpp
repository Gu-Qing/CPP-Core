#include <iostream>
using namespace std;

class Father {
public :
	Father() {
		cout << "Father的构造函数" << endl;
	}
	~Father() {
		cout << "Father的析构函数" << endl;
	}
};
class Son : public Father{
public:
	Son() {
		cout << "Son的构造函数" << endl;
	}
	~Son() {
		cout << "Son的析构函数" << endl;
	}
};

int test40() {

	//先调用父类的构造函数，再调用子类的构造函数。析构相反。
	Son s;

	return 0;
}