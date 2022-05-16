#include <iostream>
#include <fstream>
using namespace std;


class P1 { //结构和写入时的一样

public:

	char m_Name[64]; //最好不要用string，会有一些不可预知的问题
	int m_Age;
};

int main() {
	//创建流对象
	ifstream ifs;

	//打开文件 判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
	}
	else {
		//读文件
		P1 p;
		ifs.read((char*)&p, sizeof(P1));
		cout << "姓名： " << p.m_Name << "，年龄：" << p.m_Age << endl;
	}

	//关闭文件
	ifs.close();

	system("pause");

	return 0;
}