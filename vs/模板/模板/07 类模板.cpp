/*2023-8-23*/

//��ģ��	����һ��ͨ���� ���г�Ա �������Ϳ��Բ�ȷ��
/*	template<typename T>
	��
	*/

#include <iostream>
#include <string>

using namespace std;

template<typename T, class B>
class Person{
public:

	Person(T name, B age):m_Name(name), m_Age(age){
		
	}

	//����
	T m_Name;
	//����
	B m_Age;
};






void test01(){
	Person<string, int > p1("�����", 999);

	cout << p1.m_Name << " " << p1.m_Age << endl;
}


int main(){

	test01();

	system("pause");
	return 0;
}