#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int test52() {
	//创建流对象
	ifstream ifs;

	//打开文件，并且判断是否打开成功
	ifs.open("test1.txt", ios::in);

	if (!ifs.is_open()) {
		cout << "文件打开失败！" << endl;
	}
	else {
		//读数据

		//第一种
		char buf[1024] = { 0 }; //把文件中的数据全部放到字符数组中
		while (ifs >> buf) { //使用右移运算符读入每一行，读到头了会返回假
			cout << buf << endl;
		}

		//第二种
		//char buf[1024] = { 0 };
		//while (ifs.getline(buf, sizeof(buf))) {
		//	cout << buf << endl;
		//}

		//第三种
		//string buf;
		//while (getline(ifs, buf)) {
		//	cout << buf << endl;
		//}
		
		//第四种  不推荐 一个个读效率比较低
		//char c;
		//while ( (c = ifs.get()) != EOF) {
		//	cout << c;
		//}
	}
	ifs.close();

	system("pause");

	return 0;
}