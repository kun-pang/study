/*2023-8-24*/

//��ģ���Ա����������ʵ��


#include <iostream>
#include <string>

using namespace std;


//��ģ��
template<typename T1, typename T2 >
class Person{
public:
	Person(T1 name, T2 Age);

	void showPerson();

	T1 m_Name;
	T2 m_Age;
};

//���ⶨ��
//Person<T1, T2>:: �Ǹ��߱��������һ����ģ��ĳ�Ա����
//Person:: �Ǹ��߱���������һ����ͨ���Ա����
template<typename T1, typename T2 >
Person<T1, T2>::Person(T1 name, T2 age){
	this->m_Name = name;
	this->m_Age = age;
}

template<typename T1, typename T2 >
void Person<T1, T2>::showPerson(){
	cout << "name:" << this->m_Name << " age:" << this->m_Age << endl; 
}


void test01(){
	Person<string, int> p("Tom", 20);
	p.showPerson();
}


int main(){

	test01();

	system("pause");
	return 0;
}