//2023-8-4

//��������أ������е���������½��ж��壬��������һ�ֹ��ܣ������ò�ͬ����������

//�Ӻ������������

#include <iostream>

using namespace std;

//����
class Person{
public:
	//1����Ա��������+  (�ؼ���operator)
	Person operator+(Person &p){
		Person t;
		t.m_A = this->m_A + p.m_A;
		t.m_B = this->m_B + p.m_B;
		return t;
	}
	Person operator+(int p) const {	//����& ����Ϊ������ǳ���
		Person t;
		t.m_A = this->m_A + p;
		t.m_B = this->m_B + p;
		return t;
	}
public:
	int m_A;
	int m_B;
};

//2��ȫ�ֺ�������+
//Person operator+(Person &p1, Person &p2){
//	Person t;
//	t.m_A = p1.m_A + p2.m_A;
//	t.m_B = p1.m_B + p2.m_B;
//	return t;
//}
//
//Person operator+(Person &p1, int p2){
//	Person t;
//	t.m_A = p1.m_A + p2;
//	t.m_B = p1.m_B + p2;
//	return t;
//}

void text(){
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;

	Person p2;
	p2.m_A = 10;
	p2.m_B = 20;
	
	//��Ա�������صı���Ϊ Person p3 = p1.operator+(p2);
	//ȫ�ֺ������صı���Ϊ Person p3 = operator+(p1,p2);

	Person p3 = p1 + p2;		//û��Person + Person

	cout  << p3.m_A << endl << p3.m_B << endl;

	//��������� Ҳ���Է�����������
	Person p4 = p1 + 10;		//û��Person + int 

	cout  << p4.m_A << endl << p4.m_B << endl;
}


int main(){
	text();

	system("pause");
	return 0;
}

//ע�⣺�������õ��������͵ı��ʽ��������ǲ����Ը��ĵ�  ֻ�ܸ��Զ������������
//��Ҫ������������أ��뱾�ⲻͬ�����üӱ�ʾ����