/*2023-8-6*/

//��̳��﷨���������﷨����

//�﷨�� class ���� �� �̳з�ʽ ����1�� �̳з�ʽ ����2...{}��

//��̳л�������������ͬ����Ա���֣���Ҫ������������

#include <iostream>

using namespace std;
//������1
class Base1{
public:
	Base1(){
		m_A = 100;
	} 

	int m_A;
};

//������2
class Base2{
public:
	Base2(){
		m_A = 200;
	} 

	int m_A;
};

//���� 
class Son : public Base1, public Base2{
public:
	int m_C;
};

void text(){
	Son s;
	cout << "Son�Ŀռ��С"  << sizeof(Son) << endl;

	//����������  ����ֶ�����
	cout << "Base1�µ�m_A:"	<< s.Base1::m_A << endl;
	cout << "Base2�µ�m_A:"	<< s.Base2::m_A << endl;

}

int main(){
	
	text();

	system("pause");
	return 0;
}