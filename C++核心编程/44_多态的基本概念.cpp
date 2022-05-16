#include <iostream>
using namespace std;

/*
* Animal�ڲ��ṹ��
* ����virtual֮���൱���ڲ�����һ��4�ֽڵ�ָ�룺
* Animal���vfptr��v-virtual,f-function,ptr-pointer. �麯��(��)ָ�롿
* ���ָ��ָ�� Animal���vftable��v-virtual,f-function.�麯����
* �������ڲ���¼�麯���ĵ�ַ��&Animal1::speak()��
*/
class Animal1 {
public :
	//��������ǰ����virtual��ʾΪ�麯��
	virtual void speak() {
		cout << "Animal Speak" << endl;
	}
};

/*
* Cats���ڲ��ṹ
* Cats���vfptr ---> Cats���vftable[&Animal::speak]
* ��������д�˸�����麯���������е��麯������滻��������麯����ַ
* Cats���vfptr ---> Cats���vftable[&Cat::speak]
*/
class Cats : public Animal1 {
public:
	void speak() {
		cout << "Cat Speak" << endl;
	}
};

class Dogs : public Animal1 {
public:
	void speak() {
		cout << "Dog Speak" << endl;
	}
};

//��ַ��󶨣��ڱ���׶ξ�ȷ���˺�����ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ�

//��̬��̬����������
//1��Ҫʵ�ֶ�̬��̬����Ҫ�м̳й�ϵ
//2��������д������ֵ���β��б���������Ҫ��ͬ��������麯��

//��̬��̬��ʹ�ã�
//�����ָ������� ִ���������

/*
* �������ָ�������ָ���������ʱ���ͷ�����̬��
* Animal &animal = cat; //������cat�Ķ��󣬾Ͷ�̬��cat�麯�����еĵ�ַ
* animal.speak();
*/
void doSpeak(Animal1& animal) { //Animal1 &animal = cat;
	animal.speak();
}

int test44() {

	Cats cat;
	doSpeak(cat);

	Dogs dog;
	doSpeak(dog);

	//����virtual֮��Animal�ͱ�Ϊ��4�ֽ�
	cout << "sizeof(Animal) = " << sizeof(Animal1) << endl; //4
	
	system("pause");

	return 0; 
}