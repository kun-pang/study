//2023-8-5

//��ϵ���������

//�������Զ������ݶ�����бȽ�

#include <iostream>
#include <string>

using namespace std;

class Person{
public:
	string getName(){
		return m_Name;
	}

	int getAge(){
		return m_Age;
	}

	Person(string name, int age):m_Name(name),m_Age(age){
		
	}

	bool operator==(Person &p){
		if(this->m_Name == p.m_Name && this->m_Age == p.m_Age){
			return true;
		}
		return false;
	}
	bool operator!=(Person &p){
		if(this->m_Name != p.m_Name && this->m_Age != p.m_Age){
			return true;
		}
		return false;
	}
	bool operator<(Person &p){
		if(this->m_Age < p.m_Age){
			return true;
		}
		return false;
	}
	bool operator>(Person &p){
		if(this->m_Age > p.m_Age){
			return true;
		}
		return false;
	}

	

private:
	string m_Name;
	int m_Age;
};


void text(){
	Person p1("Tom",12);
	Person p2("Tom",12);
	Person p3("Jake",10);
	Person p4("Roke",15);

	if(p1 == p2){
		cout << p1.getName() << "��" << p2.getName() << "һ��" << endl;
	}else{
		cout << p1.getName() << "��" << p2.getName() << "��һ��" << endl;
	} 

	if(p1 == p3){
		cout << p1.getName() << "��" << p3.getName() << "һ��" << endl;
	}else{
		cout << p1.getName() << "��" << p3.getName() << "��һ��" << endl;
	}

	if(p1 < p3){
		cout << p1.getName() << "������С��" << p3.getName() << "����" << endl;
	}else{
		cout << p1.getName() << "���������" << p3.getName() << "����" << endl;
	}

	if(p4 > p3){
		cout << p4.getName() << "���������" << p3.getName() << "����" << endl;
	}else{
		cout << p4.getName() << "������С��" << p3.getName() << "����" << endl;
	}
}

int main(){
	text();

	
	system("pause");
	return 0;
}