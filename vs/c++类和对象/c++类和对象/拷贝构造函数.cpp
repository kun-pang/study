/*2023��8��1  2023-8-2*/
/* ��Ͷ��� */

//�������캯������ʱ��

//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
		
//2��ֵ���ݵķ�ʽ������������ֵ

//3��ֵ�ķ�ʽ���ؾֲ�����

#include <iostream>

using namespace std;

//�ࡢ�ṹ��
//����
class Person1{
public:
	Person1(){
		cout << "Ĭ�Ϲ��캯����" << endl;
	}

	Person1(int age){
		p_Age = age;
		cout << "�вι��캯����" << endl;
	}

	Person1(const Person1 &p){
		p_Age = p.p_Age;
		cout << "�������캯����" << endl;
	}

	~Person1(){
		cout << "����������" << endl;
	}
	int p_Age;
};

//��������
void text1();
void text2();
void text3();

void doWork01(Person1 p);
Person1 doWork02();

int main14(){
	/*text1();*/
	/*text2();*/
	text3();

	system("pause");
	return 0;
}


//�����Ķ���
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
void text1(){
	Person1 p1(10);
	Person1 p2(p1);

	cout << "p2�����䣺" << p2.p_Age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ
//�൱����ʽת����  Person1 p =p3(���p3�Ǳ��������Ƶ�);
void doWork01(Person1 p){
	cout << "p�����䣺" << p.p_Age << endl;
}
void text2(){
	Person1 p3(10);
	doWork01(p3);

}

//3��ֵ�ķ�ʽ���ؾֲ�����
Person1 doWork02(){
	Person1 p;
	cout  << "doWork02�е�p��" <<  &p << endl;
	return p;		//doWork02()�������Ժ���ͷ�p�����Է��ص�pʵ������ϵͳ���´�����
}

void text3(){
	Person1 p4 = doWork02();
	cout  << "p4��" << &p4 << endl;
	cout  << "doWork02()����ֵ��" << &doWork02() << endl;
}