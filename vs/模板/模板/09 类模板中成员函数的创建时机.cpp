/*2023-8-23*/

//��ģ���г�Ա�����Ĵ���ʱ��
//��ͨ���Ա����һ��ʼ�ʹ�����
//��ģ���Ա��������ʱ�ſ�ʼ����

#include <iostream>
#include <string>

using namespace std;

class Person1{
public:

	void showPerson1(){
		cout << "Person1" << endl;
	}

};

class Person2{
public:

	void showPerson2(){
		cout << "Person2" << endl;
	}

};

//��ģ��
template<typename T >
class MyPerson{
public:
	T obj;

	void fun1(){
		obj.showPerson1();
	}

	void fun2(){
		obj.showPerson2();
	}
};





void test01(){
	//���û��ָ����Ա���� �ô��벻�ᱨ��
	//��ָ�����͵�ʱ�򣬲Żᴴ����Ա��������ʱ����ΪPerson1��û��showPerson2()������
	MyPerson<Person1>m;
	
	m.fun1();
	//m.fun2();
}


int main(){

	test01();

	system("pause");
	return 0;
}