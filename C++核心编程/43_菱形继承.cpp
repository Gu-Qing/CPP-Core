#include <iostream>
using namespace std;

/*
* ���μ̳У�
* ����������̳�ͬһ������
* ����ĳ����ͬʱ�̳�������������
* ��Ϊ���μ̳У���ʯ�̳У�
* 
* eg������Ϊ���࣬����ռ̳��˶����࣬���շֱ�̳��������
* ���μ̳����⣺
* 1.��̳��˶�������ݣ���Ҳ�̳��˶�������ݣ�������ʹ������ʱ�������������
* 2.���ռ̳��Զ�������ݼ̳������ݣ�����ʵ��ֻ��Ҫһ��
*/
class Animals {
public :
	int m_Age;
};

//��̳� �ܽ�����μ̳��ظ����ݵ�����
//�ڼ̳еļ̳й�ϵ֮ǰ����virtual��Ϊ��̳�
//������Animal��Ϊ�����
//ʵ������̳�ʹ������̳еĲ������������ݶ�������ָ��
//������ָ���ָ�������Ψһ��һ������
class Sheep : virtual public Animals{};

class Tuo : virtual public Animals {};

class SheepTuo :public Sheep, public Tuo {};

void test0043() {
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;//������̳��Ժ����ݾ�ֻʣ��һ�ݣ�ȡ�����ĵ�ֵ

	//�����μ̳У���������ӵ����ͬ���ݣ������������ּ���
	cout << "Sheep: " << st.Sheep::m_Age << endl;
	cout << "Tuo: " << st.Tuo::m_Age << endl;
	cout << "st.m_Age: " << st.m_Age << endl; //������̳к��ٱ�������ֻʣ��һ��

	//���μ̳е������������ݣ���Դ�˷�
}

int test43() {

	test0043();

	system("pause");

	return 0;
}