//2023-8-4

//�������������

//����Զ�������

#include <iostream>

using namespace std;

class Person{
	//friend void operator<<(ostream &cout, Person &p);
	friend ostream& operator<<(ostream &cout, Person &p);
public:

	//��Ա��������<<
	//�����ڳ�Ա��������<< ԭ���ǻ��� operator<<(cout)  ��Ϊ p << cout
	void operator<<(ostream &cout){
		cout << this->m_A << " " << this->m_B;
	}
public:
	Person(){
		m_A = 10;
		m_B = 20;
	}
private:
	int m_A;
	int m_B;
};

//ȫ�ֺ�������<<
//ֻ�ܵ�����������������������ʽ��
//void operator<<(ostream &cout, Person &p){
//	cout << p.m_A << " " << p.m_B;
//
//}

//��һ����������Ϊ���ܵ���ostream�������캯��
//�ڶ�����������Ϊ���������cout ȫ��ֻ��һ�� ֻ���ñ�� ���������cout���Ի��ɱ��
ostream & operator<<(ostream &cout, Person &p){
	cout << p.m_A << " " << p.m_B;
	return cout;

}

//ostream & operator<<(ostream &out, Person &p){
//	out << p.m_A << " " << p.m_B;
//	return cout;
//
//}

void text(){
	Person p;

	//cout << p.m_B;		p.m_B ���� ������������
	cout << p ;				//p �Զ������������
	cout << p << "nihao" << endl;		//cout << p ���ص���cout	
	cout << endl;
	p << cout;

	
}

int main(){
	text();

	system("pause");
	return 0;
}

