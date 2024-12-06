/*2023-8-23*/

//��ģ��ʵ�������Ķ����������εķ�ʽ

//�������εķ�ʽ
//1��ָ����������� --ֱ����ʾ�������������
//2������ģ�廯		--�����еĲ������ģ����д���
//3��������ģ�廯	--�������������� ģ�廯���д���


#include <iostream>
#include <string>

using namespace std;


//��ģ��
template<typename T1, class T2 >
class Person{
public:

	Person(T1 name, T2 age){
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson(){
		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1��ָ����������� --ֱ����ʾ������������ͣ����ã�
//void printPerson(Person<string, int > &p){
//	p.showPerson();
//}

//2������ģ�廯		--�����еĲ������ģ����д���
//template<typename T1, class T2 >
//void printPerson(Person<T1, T2 > &p){
//	p.showPerson();
//
//	//�鿴��������
//	cout << "T1���������ͣ�" << typeid(T1).name() << endl;
//	cout << "T2���������ͣ�" << typeid(T2).name() << endl;
//}

//3��������ģ�廯	--�������������� ģ�廯���д���
template<typename T>
void printPerson(T &p){
	p.showPerson();
	cout << "T���������ͣ�" << typeid(T).name() << endl;
}

void test01(){
	Person<string, int > p("ɳ��", 123);

	
	printPerson(p);

}


int main(){

	test01();

	system("pause");
	return 0;
}