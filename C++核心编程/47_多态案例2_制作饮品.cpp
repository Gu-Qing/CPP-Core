#include <iostream>
using namespace std;

class AbstractDringking {
public :
	//��ˮ
	virtual void BoilWarter() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//��������
	virtual void AddOthers() = 0;
	//������Ʒ
	void makeDrink() {
		BoilWarter();
		Brew();
		PourInCup();
		AddOthers();
	}
};

class Coffee : public AbstractDringking {

public:
	//��ˮ
	virtual void BoilWarter() {
		cout << "����е�ˮ�ŵ�70��..." << endl;
	}
	//����
	virtual void Brew() {
		cout << "��ĥ���ȶ�����70���ˮ����..." << endl;
	}
	//���뱭��
	virtual void PourInCup() {
		cout << "�����ݺõĿ��ȵ��뱭��..." << endl;
	}
	//��������
	virtual void AddOthers() {
		cout << "������ǵ�����..." << endl;
	}
};

class Tea : public AbstractDringking {

public:
	//��ˮ
	virtual void BoilWarter() {
		cout << "�þ�ˮ���..." << endl;
	}
	//����
	virtual void Brew() {
		cout << "����е�ˮ���ݲ�Ҷ..." << endl;
	}
	//���뱭��
	virtual void PourInCup() {
		cout << "�����ݺõĲ�Ҷ��������..." << endl;
	}
	//��������
	virtual void AddOthers() {
		cout << "������轵�����..." << endl;
	}
};

void doWork(AbstractDringking* abs) {
	abs->makeDrink();
	delete abs;
}

void test0047() {
	doWork(new Coffee);
	cout << "---------------------------------" << endl;
	doWork(new Tea);
}

int test47() {

	test0047();

	system("pause");

	return 0;
}