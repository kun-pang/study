/*2023-8-6*/

//ͬ����̬��Ա���������������ʼ�����Ĵ���ʽ


//��������ͬ����Ա  ֱ�ӷ���

//���ʸ���ͬ����Ա  Ҫ�������� 


#include <iostream>

using namespace std;

class Base{
public:
	
	static void func(){
		cout << "Base�µ�void func()���ã�" << endl;
	}

	//����
	static void func(int a){
		cout << "Base�µ�void func(int a)���ã�" << endl;
	}

	static int m_A;
	
};
int Base::m_A = 100;

//���� �̳���  ������
class Son : public Base{
public:
	
	static void func(){
		cout << "Son�µ�void func()���ã�" << endl;
	}
	static int m_A;
};
int Son::m_A = 200;

//ͬ����Ա����
void text1(){
	//1��ͨ������
	cout << "ͨ������:" << endl;
	Son s;

	cout << "Son�µ�m_A:" << s.m_A << endl;
	cout << "Base�µ�m_A:" << s.Base::m_A << endl;

	//2��ͨ������
	cout << "ͨ������:" << endl;
	cout << "Son�µ�m_A:" << Son::m_A << endl;
	cout << "Base�µ�m_A:" << Son::Base::m_A << endl;		
	//ע��Base::m_A ��Son::Base::m_A������
	//Base::m_A ֱ�ӷ���Base�������µ�m_A
	//Son::Base::m_A ͨ��Son���ʸ����������µ�m_A
}

//ͬ����Ա����
void text2(){
	//1��ͨ������
	cout << "ͨ������:" << endl;
	Son s;

	s.func();
	s.Base::func();

	//2��ͨ������
	cout << "ͨ������:" << endl;
	Son::func();
	Son::Base::func();
	//Base::func() ֱ��ͨ��Base��������
	//Son::Base::func();  ͨ��Son���ʸ���Base�������µ�func()

	//s.func(100);  ����  һ����������븸��ͬ���ĺ�������ô����Ὣ�̳е�����ͬ������ȫ�����أ��޷�����
	s.Base::func(100);


}

int main(){
	
	text1();
	//text2();

	system("pause");
	return 0;
}