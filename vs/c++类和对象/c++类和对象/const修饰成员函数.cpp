//2023-8-3

//const���γ�Ա����

/*��������
	��Ա���������const  --������
	�������������޸ĳ�Ա����
	��Ա������������ �ؼ���mutable�󣬳���������Ȼ�����޸�
*/	

/*������
	��������ǰ����const --������
	������ֻ�ܵ��ó�����(�����޸Ķ�̬������ֵ)
*/

#include <iostream>

using namespace std;

class Person{
public:

	//this������ ָ�볣�� ָ��ָ���ǲ������޸ĵ�
	//Person * const this
	//���������const����   const Person * const this  
	//const���ε���thisָ��  ��ָ���ֵҲ�����޸���
	void show1()const{
		//m_a  ->   this->m_a
		//m_a =100;		�������������޸ĳ�Ա����
		m_b = 100;		//�����������޸ļ���mutable�ĳ�Ա����
	}

	void show2(){
		
	}

	int m_a;
	mutable int m_b;
};

void text1(){
	Person p;
	

	//������
	const Person p1;

	//p1.show2();   �������ܵ�����ͨ��Ա����
	p1.show1();
	//p1.m_a = 100;
	p1.m_b ==
	
}

int main(){
	text1();

	system("pause");
	return 0;
}