/*2023��7��31*/
/* ��Ͷ��� */

/* ��Ͷ��� 
c++�������ԣ���װ���̳С���̬
��װ
	�����Ժ���Ϊ��Ϊһ�����壬���������е�����
	�����Ժ���Ϊ����Ȩ�޿���

����Ȩ��
	public			���У�������Ȩ��		���ڡ����ⶼ���Է���
	private			˽��Ȩ��				���ڿ��Է��ʡ����ⲻ���Է���	�̳���������Է��ʸ���ı���
	protected		����Ȩ��				���ڿ��Է��ʡ����ⲻ���Է���	�̳������಻���Է��ʸ����˽��

class��struct����
	class	Ĭ��Ϊprivate
	struct  Ĭ��Ϊpublic

����Ա��������Ϊ˽��
	1�������Լ����ƶ�дȨ��
	2������д���Լ�����ݵ���Ч��
*/

#include <iostream>
#include <string>

using namespace std;

//�궨�峣��
//#define PI 3.1415
const double PI = 3.1415;

 
//��������
void HH();


//�ṹ��
struct C1{
	int a;
private:
	int b;	
};


//��
//���е����ԡ���Ϊͳһ��Ϊ ��Ա
//���� Ҳ�г�Ա���� ��Ա����
//��Ϊ Ҳ�г�Ա���� ��Ա����
//Բ��  ��Բ���ܳ�(circumference)
//Բ���ܳ���ʽ�� 2 * PI * r
//class ����   ����һ����
class Circle_C{
	//����Ȩ��
	//����Ȩ��
public:
	//����
	double r;	//�뾶
	
	//��Ϊ��������
	double circle_c(){	//�ܳ�
		return 2 * PI * r;
	}
};

//����1
class Person{
	//����
public:
	string name;		//����
private:
	int password;			//���п�����
protected:
	string car;				//��ӵ�еĳ�

	//��Ϊ
public:
	void func(){
		name = "����";
		password = 111111;
		car = "������";
	}
	void func1(){
		cout << name << " " << password << " " << car << endl;
	}
};

//����2
class Preson0{
public:
	//����
	void setName(string name){
		p_Name = name;
	}
	void setLover(string lover){
		p_Lover = lover;
	}
	void setAge(int age){
		if(age <= 120 && age >= 0){
			p_Age = age;
		}else{
			cout << "�������������" << endl;
			p_Age = 0;	//��ʼ��
			return;
		}
	}
	//��ȡ
	string getName(){
		return p_Name;
	}
	int getAge(){
		return p_Age;
	}
	int getPhone(){
		p_Phone = 11111;
		return p_Phone;
	}
private:
	//���� �ɶ���д
	string p_Name;
	//���� �ɶ���д
	int p_Age;
	//���� ֻд
	string p_Lover;
	//�����ߵ绰 ֻ��
	int p_Phone;
};

class C2{
	int b;
};



int main12(){
	//����һ�������Բ������
	//ʵ������ͨ��һ���ഴ��һ������
	Circle_C c1;

	//��Բ����ֵ
	c1.r = 2;

	cout << "Բ���ܳ�Ϊ��" << c1.circle_c() << endl;
	HH();


	//����ʵ����
	Person p1;
	/*p1.password = 1111;
	p1.car = "����";			˽�С������ĳ�Ա���ܷ���*/
	p1.name = "����";
	p1.func1();
	p1.func();
	p1.func1();
	HH();

	
	//class��struct����
	C1 a1;
	C2 a2;

	a1.a = 1;
	//a2.b;	//���ܷ���
	HH();


	//��Ա˽�л�
	Preson0 p0;		//Preson0ʵ����
	int age;		//����
	/*p0.p_Name;*/
	p0.setName("����");
	p0.setLover("����");
	/*p0.setPhone();*/ //ֻ������д
	cout << "������"  << p0.getName() << endl;
	cout << "�绰��"  << p0.getPhone() << endl;
	/*cout << "���ˣ�"  << p0.getLover() << endl;*/	//ֻд���ܶ�
	cout << "���������䣨0~120����" << endl;
	cin >> age;
	p0.setAge(age);
	cout << "���䣺" << p0.getAge() << endl;

	system("pause");
	return 0;
}


//����
void HH(){
	system("pause");
	system("cls");
}