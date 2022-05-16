#include <iostream>
using namespace std;

//struct和class的唯一区别：默认的访问权限不同
//struct默认权限：公有
//private默认权限：私有
class C1{
	int m_A; //private
};
struct S1 {
	int m_A; //public
};
int test14() {

	S1 s1;
	C1 c1;
	
	s1.m_A = 100;
	cout << s1.m_A << endl;
	//c1.m_A = 100; //报错

	system("pause");

	return 0;
}