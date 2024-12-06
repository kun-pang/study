/*2023-8-23*/

//��ģ��ͺ���ģ�������
//1����ģ��ĵ���û���Զ������Ƶ��ķ�ʽ
//2����ģ����ģ������б��п�����Ĭ�ϲ��� 

#include <iostream>
#include <string>

using namespace std;

//ģ������б�  <typename T, class B>
template<typename T, class B = int >
class Person{
public:

	Person(T name, B age):m_Name(name), m_Age(age){
		
	}

	void showPerson(){
		cout << "name: " << this->m_Name << "  age:" << this->m_Age << endl;
	}

	//����
	T m_Name;
	//����
	B m_Age;
};





void test01(){
	//Person p1("�����", 999);	//���� ��c++17�汾֮ǰ�޷����Զ������Ƶ�	
	
	Person<string , int> p1("�����", 999);	//��ʾָ�������Ƶ�

	Person<string> p2("Tom", 20);		
	//��ģ������б� <typename T, class B = int >  Ĭ����BΪint 
	//Person<string>�����д Ĭ��Ϊint

	p1.showPerson();
	p2.showPerson();
}


int main(){

	test01();

	system("pause");
	return 0;
}