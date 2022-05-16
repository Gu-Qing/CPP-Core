#include <iostream>
using namespace std;

//class Java {
//public :
//	void header() {
//		cout << "首页、公开课" << endl;
//	}
//	void footer() {
//		cout << "注册中心..." << endl;
//	}
//	void content() {
//		cout << "Java" << endl;
//	}
//};
//class Python {
//public:
//	void header() {
//		cout << "首页、公开课" << endl;
//	}
//	void footer() {
//		cout << "注册中心..." << endl;
//	}
//	void content() {
//		cout << "Python" << endl;
//	}
//};

//继承实现
//继承的好处：减少重复代码
//语法： class 子类 : 继承方式 父类
//子类 == 派生类
//父类 == 基类、超类
class BasePage {
public :
	void header() {
		cout << "首页、公开课" << endl;
	}
	void footer() {
		cout << "注册中心..." << endl;
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
	cout << "Java页面: " << endl;
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