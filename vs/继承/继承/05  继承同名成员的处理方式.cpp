/*2023-8-6*/

//�̳�ͬ����Ա�Ĵ���ʽ

//��������ͬ����Ա  ֱ�ӷ���

//���ʸ���ͬ����Ա  Ҫ�������� 


#include <iostream>

using namespace std;

class Base{
public:
	Base(){
		m_A = 100;
	}
	void func(){
		cout << "Base�µ�void func()���ã�" << endl;
	}

	//����
	void func(int a){
		cout << "Base�µ�void func(int a)���ã�" << endl;
	}

	int m_A;
	
};

//���� �̳���  ������
class Son : public Base{
public:
	Son(){
		m_A = 200;
	}
	void func(){
		cout << "Son�µ�void func()���ã�" << endl;
	}
	int m_A;
};

//ͬ����Ա����
void text1(){
	Son s;

	cout << "Son�µ�m_A:" << s.m_A << endl;
	cout << "Base�µ�m_A:" << s.Base::m_A << endl;
}

//ͬ����Ա����
void text2(){
	Son s;

	s.func();
	s.Base::func();

	//s.func(100);  ����  һ����������븸��ͬ���ĺ�������ô����Ὣ�̳е�����ͬ������ȫ�����أ��޷�����
	s.Base::func(100);
}

int main(){
	
	//text1();
	text2();

	system("pause");
	return 0;
}