#include <iostream>
using namespace std;

/*
* ��Ա��������Ϊ˽�У�
* 1.�Լ����ƶ�д��Ȩ��
* 2.����д���Լ�����ݵ���Ч��
*/
class Test {
private :
	string m_Name; //�ɶ���д
	int m_Age; //ֻ��
	string m_Lover; //ֻд
public :
	void setName(string name) {
		m_Name = name;
	}
	string getName() {
		return m_Name;
	}
	void setAge(int age) {
		m_Age = 0;
		if (age < 0 || age > 150) {
			cout << "Error!" << endl;
			return;
		}
		m_Age = age;
	}
	int getAge() {
		return m_Age;
	}
	void setLover(string lover) {
		m_Lover = lover;
	}
};

int test15() {

	Test t;
	t.setName("Lisi");
	t.setLover("Fyy");
	t.setAge(151);

	cout << t.getName() << " " << t.getAge() << " " << endl;

	t.setAge(11);

	cout << t.getName() << " " << t.getAge() << " " << endl;

	system("pause");

	return 0;
}