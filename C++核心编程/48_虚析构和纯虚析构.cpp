#include <iostream>
using namespace std;

/*
* ��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
* ������ǣ��������е�����������Ϊ��������������
* 
* �������ʹ����������ԣ�
* 1.���Խ������ָ���ͷ�������������
* 2.����Ҫ�о���ĺ���ʵ��
* �������ʹ�������������
* 1.����������һ�������࣬�޷�ʵ��������
*/

class Animal47 {
public :
	Animal47() {
		cout << "Animal�Ĺ��캯��" << endl;
	}
	//���麯��
	virtual void speak() = 0;
	//������������� ����ָ���ͷ��������ʱ�ͷŲ��ɾ�������
	//virtual ~Animal47() {
	//	cout << "Animal����������" << endl;
	//}
	// 
	//Ҳ����ʹ�ô�����������������
	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal47() = 0;
};

//��������ʵ�֣�����Ҫʵ��
Animal47 :: ~Animal47() {
	cout << "Animal�Ĵ�������" << endl;
}

class Cat47 : public Animal47 {
private :
	string* name;
public :

	Cat47() {
		cout << "Cat�Ĺ��캯��" << endl;
		this->name = new string("");
	}
	Cat47(string name) {
		cout << "Cat�Ĺ��캯��" << endl;
		this->name = new string(name);
	}
	virtual void speak() {
		cout << *this->name << "Cat speak" << endl;
	}
	void setName(string name) {
		*(this->name) = name;
	}
	string getName() {
		return *(this->name);
	}

	~Cat47(){
		if (name != NULL) {
			cout << "Cat����������" << endl;
			delete name;
			name = NULL;
		}
	}
};

void test0048() {
	Animal47 *an = new Cat47;
	an->speak();
	delete an;
	an = new Cat47("Tom");
	an->speak();
	//����ָ����������ʱ�򣬲�����������е���������
	//������������ж������ԣ�������ڴ�й©
	delete an;
}

int test48() {

	test0048();

	system("pause");

	return 0;
}