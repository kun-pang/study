/*2023-8-20*/

//���ͱ�̣����ü�������ģ�壩 �� STL����

//ģ�壺����ͨ��ģ�ߣ���߸�����

//ģ���ص㣺
//		����ֱ��ʹ�ã�ֻ��һ�����
//		ģ���ͨ�ò������ܵ�

//ģ����ࣺ��ģ�� �� ����ģ��

//����ģ�壺
//		����һ��ͨ�ú���������ֵ���ͺ��β����Ϳ��Բ������ƶ���������һ�� ��������� ����ʾ
//	  �﷨��
//		template<typename T>			//template -- ��������ģ��   typename -- ��ʾ�����ķ�����һ���������ͣ����Ի���class�ؼ���    T -- ͨ�õ��������ͣ����������ַ��滻��һ��Ϊ��д��ĸ 
//		�������������߶���



#include <iostream>

using namespace std;

//����ģ��
template<typename T>
//��������
void mySwap(T &a, T &b){		
	T t = a;
	a = b;
	b = t;
}

void test01(){
	int a = 10;
	int b = 20;

	//����ģ��ʹ�÷�ʽ
	//1���Զ������Ƶ�
	mySwap(a,b);

	cout << "a = " << a <<  endl;
	cout << "b = " << b <<  endl;

	double c = 1.1;
	double d = 2.2;

	//2����ʾָ������
	mySwap<double>(c,d);

	cout << "c = " << c <<  endl;
	cout << "d = " << d <<  endl;
}

int main(){

	test01();

	system("pause");
	return 0;
}