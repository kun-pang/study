/*2023��8��3*/

//�������Ϊ���Ա

//һ����ĳ�Ա��������һ����Ķ�����ô�ó�ԱΪ �����Ա���������Ϊ���Ա��


#include <iostream>
#include <string>

using namespace std;

//�ֻ���
class Phone{
public:
	//��ʼ�б�����ʼ���캯��
	Phone(string name): m_PName(name){
		cout << "Phone �Ĺ��캯����" << endl;
	}

	~Phone(){
		cout << "Phone ������������" << endl;
	}


	string m_PName;
};

//����
class Person{
public:
	//m_phone(phone)  =>  Phoen m_phone = phone;  ��ʽת����  
	Person(string name, string phone): m_Name(name), m_phone(phone){
		cout << "Person �Ĺ��캯����" << endl;
	}

	~Person(){
		cout << "Person ������������" << endl;
	}

	string m_Name;		//����
		
	Phone m_phone;		//�ֻ�
};

//����������Ϊ�����ࣨ���ࣩ�ĳ�Ա�����캯�����ȵ��������࣬�ڵ��ð����ࣻ
//����������֮�෴�ȵ��ð����࣬�ڵ���������

//�����ڰ������ǰ��
//class Phone{
//public:
//	//��ʼ�б�����ʼ���캯��
//	Phone(string name): m_PName(name){
//		cout << "Phone �Ĺ��캯����" << endl;
//	}
//
//	~Phone(){
//		cout << "Phone ������������" << endl;
//	}
//
//
//	string m_PName;
//};



void text(){
	Person p("����","С��");

	cout << p.m_Name << "���ţ�" << p.m_phone.m_PName << endl; 
}

int main(){
	text();

	system("pause");
	return 0;
}