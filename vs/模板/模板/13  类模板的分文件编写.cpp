/*2023-8-24*/

//���⣺
//��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���

//�������1��
//ֱ�Ӱ���.cppԴ�ļ�

//�������2��
//��������ʵ��д��ͬһ���ļ��У�����ĺ�׺��Ϊ.hpp,hpp��Լ�������ƣ�������ǿ�Ƶ�


#include <iostream>
#include <string>

//����.hʱ����Ϊ��ģ���ǵ���ʱ������
//������.h��û�д���Person(T1 name, T2 Age); void showPerson();
//���������Ҳ���Person(T1 name, T2 Age);void showPerson();�Ķ���
//#include "13 person.h"

//��һ�� ֱ�Ӱ���.cppԴ�ļ�
//ֱ�Ӹ��߱����������λ��
//���Ƽ�
//#include "13 person.cpp"

//�ڶ��� ��������ʵ��д��ͬһ���ļ��У�����ĺ�׺��Ϊ.hpp,hpp��Լ�������ƣ�������ǿ�Ƶ�
#include "13 person.hpp"

using namespace std;


void test01(){
	Person<string, int> p("tom", 2);
	p.showPerson();
}


int main(){

	test01();

	system("pause");
	return 0;
}