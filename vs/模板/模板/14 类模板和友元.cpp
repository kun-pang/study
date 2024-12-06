/*2023-8-24*/

//��ģ�����Ԫ����
//ȫ�ֺ�������Ԫ����ʵ�� - ֱ��������������Ԫ��������
//ȫ�ֺ�������Ԫ����ʵ�� - ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���


#include <iostream>
#include <string>

using namespace std;

template<typename T1, typename T2 >
class Person;

//�����Ա��������Ԫ����
template<typename T1, typename T2 >
void showPerson0(Person<T1, T2> &p){
	 cout << "name:" << p.m_Name << std::endl;
      cout << "age:" << p.m_Age << std::endl;
}

//��ģ��
template<typename T1, typename T2 >
class Person{
	//������Ԫȫ�ֺ���  ����ֱ��ʵ��
	 friend void showPerson(Person<T1, T2> &p) {
        cout << "name:" << p.m_Name << std::endl;
        cout << "age:" << p.m_Age << std::endl;
    }

	 //����ʵ��
	 //�ӿ�ģ�� ��֮��Ϊģ�庯��
	 friend void showPerson0<>(Person<T1, T2> &p);


public:
	Person(T1 name, T2 age){
		this->m_Name = name;
		this->m_Age = age;
	}

	
private:
	T1 m_Name;
	T2 m_Age;
};

//���� ����֡� 1 ���޷��������ⲿ����Ĵ��� 
//ԭ��:����������Ϊ��ͨ����friend void showPerson0(Person<T1, T2> &p);������ʵ��ȴ��ģ�庯��
//���������������Ϊģ�庯��friend void showPerson0<>(Person<T1, T2> &p); ��Ȼ����
//����ģ���ǵ���ʱ����������Ҫ���ñ�����֪��
//template<typename T1, typename T2 >
//void showPerson0(Person<T1, T2> &p){
//	 cout << "name:" << p.m_Name << std::endl;
//      cout << "age:" << p.m_Age << std::endl;
//}




void test01(){
	Person<string, int> p("tom", 2);
	//showPerson(p);
	showPerson0(p);
}


int main(){

	test01();

	system("pause");
	return 0;
}