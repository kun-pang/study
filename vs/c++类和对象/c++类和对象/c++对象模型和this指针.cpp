//2023-8-3

//c++����ģ��

//��ĳ�Ա�����ͳ�Ա�����ֿ��洢

//ֻ�зǾ�̬��Ա������������Ķ�����



//thisָ��

//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���

//������ ϵͳ�����Լ�����ͬһ���͵Ĳ�ͬ�������ʵ��������ͬ�Ķ��󣩵���ͬһ����루�Ǿ�̬��Ա����ֻ�ᵮ��һ��ʵ����Ҳ����˵ͬһ���͵Ĳ�ͬ�������ͬһ����룩

//thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��

//thisָ�벻��Ҫ���壬ֱ��ʹ��

//��;��
//		���βκͳ�Ա����ͬ��������this����
//		����ķǾ�̬��Ա�����з��ض���������ʹ��return * this


#include <iostream>

using namespace std;

class Person1{
public:
	int m_Age;		//�Ǿ�̬��Ա����  ������Ķ�����  ��������Ժ󣬱���������ݷǾ�̬��Ա������С���ٿռ�

	static int a;	//��̬��Ա����  ��������Ķ�����

	void func(){}	//�Ǿ�̬��Ա����  ��������Ķ�����

	static void func1(){}	//��̬��Ա����  ��������Ķ�����
};


class Person2{
public:

	Person2(int age){
		//����д�������룬ԭ���� ����������вι��캯�������age����ͬһ���β�age������Person2���������ageû�и���ֵ
		//age = age;

		//1��������Ƴ�ͻ
		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
		this->age = age;
	}

	//�����������
	void add(Person2 &p){
		this->age += p.age;
	}

	//2�����ض����� ��*this
	//�����ã���֤����ֵʱ��thisʼ��ָ��p2,*thisҲ����p2
	//�뿽�����캯������
	Person2& add1(Person2 &p){
		this->age += p.age;
		return *this;
	}

	//�������ã��ڷ���ֵʱ���������Ὣ���ݸ���һ�ݣ���thisָ���Ƶĵط����ڽ��н�ָ�뷵��
	Person2 add2(Person2 &p){
		this->age += p.age;
		return *this;
	}

	int age;

};

void text1(){
	Person1 p;
	//�ն���ռ�ÿռ�Ϊ ��1
	//c++���ն������1���ڴ�ռ䣬��Ϊ�����ֿն���ռ�õ��ڴ�ռ�
	//ÿһ���ն�����һ���Լ����ڴ�ռ�

	cout << "sizeof(p) = " << sizeof(p) << endl;
}

void text2(){
	Person1 p;
	cout << "sizeof(p) = " << sizeof(p) << endl;
}

void text3(){
	Person2 p(10);

	cout << "p�����䣺" << p.age << endl; 
}

void text4(){
	Person2 p1(10);
	Person2 p2(20);
	Person2 p3(20);

	/*p2.add(p1);*/
	//�������  ��ʽ���˼�루�磺cout��
	//p2.add1(p1)���ص���p2
	p2.add1(p1).add1(p1).add1(p1);
	//p3.add2(p1)���ص��ǿ���ֵ��ϵͳ���ɵģ�
	p3.add2(p1).add2(p1).add2(p1);

	cout << "p2�����䣺" << p2.age << endl;
	cout << "p3�����䣺" << p3.age << endl;

}

int main(){
	/*text1();*/
	/*text2();*/
	/*text3();*/
	text4();

	system("pause");
	return 0;
}