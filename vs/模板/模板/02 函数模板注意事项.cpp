/*2023-8-20*/

//����ģ��ע�����
//		1���Զ������Ƶ��������Ƶ���һ�µ���������T���ſ���ʹ��
//		2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��


#include <iostream>

using namespace std;


template<typename T>
//��������
void mySwap(T &a, T &b){		
	T t = a;
	a = b;
	b = t;
}

template<typename T, typename B>
//��������2
void mySwap1(T &a, B &b){		
	B t = a;
	a = b;
	b = t;
}

template<typename T>
//��ӡ����
void func(){
	cout << "abc" << endl;
}


void test01(){
	int a = 1;
	int b = 2;
	double c = 3.1;

	//1���Զ������Ƶ��������Ƶ���һ�µ���������T���ſ���ʹ��
	//mySwap(a,b);	//��ȷ
	//mySwap(a, c);	//���� �������Ͳ�ȷ���Լ���ƥ��
	mySwap1(a,c);

	//2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
	//func();			//����  �޷��ƶ���������
	func<int>();
}

int main(){

	test01();

	system("pause");
	return 0;
}