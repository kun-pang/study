//2023-8-5

//c++���һ�����������4������
//1��Ĭ���޲ι��캯�����޺�����
//2��Ĭ�������������޺�����
//3��Ĭ�Ͽ���������������ֵ����
//4����ֵ�������operator=�� �����Խ���ֵ����

//��ֵ�����������
	
#include <iostream>

using namespace std;


class Person{
public:
	Person(int age):m_Age(new int(age)){
		
	}

	//Person(const Person &p){
	//	//���
	//	if(m_Age != NULL){
	//		delete m_Age;
	//		m_Age = NULL;
	//	}
	//	m_Age = new int(*p.m_Age);
	//}
	//���㲻�ṩ�Զ���ĸ�ֵ��������غ���ʱ��
	//C++��Ϊ���Զ�����Ĭ�ϵĸ�ֵ��������غ�����
	//Ĭ�ϵĸ�ֵ��������غ��������������ĳ�Ա������
	//������ָ���Ա�������ԣ�ֻ�����ǳ������������ָ�뱾�������ָ��ָ������ݡ�


	~Person(){
		//�ֶ��ͷŶ����ڴ�
		if(m_Age != NULL){
			delete m_Age;
			m_Age = NULL;
		}
	}

	Person& operator=(Person &p){
		//���
		//�жϴ�������ݶ����Ƿ�Ϊ��
		if(m_Age != NULL){
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);		//*this
		
		//��ʽ˼��
		return *this;

	}

	int *m_Age;

};

void text(){
	Person p1(18);
	Person p2(20);
	Person p3(20);

	//�����õ���ǳ�������ͷ��ڴ�ʱ��ͬʱ�ͷ�ͬһ�ڴ����Σ��Ӷ�����
	p2 = p1;

	p3 = p2 = p1;

	cout << "p1�����䣺" << *p1.m_Age << endl;
	cout << "p2�����䣺" << *p2.m_Age << endl;
	cout << "p3�����䣺" << *p3.m_Age << endl;
}

int main(){
	text();
	
	system("pause");
	return 0;
}


