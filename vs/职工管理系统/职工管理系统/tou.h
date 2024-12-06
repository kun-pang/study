/*2023-8-13*/

//ͷ�ļ�
#pragma once	//��ֹͷ�ļ��ظ�����
#include <iostream>
#include <string>

using namespace std;

//��������
void meun();
void exit();
void empty();


//������
//������
class Base{
public:

	virtual void Responsibility();		//Ա��ְ��

	virtual void add();					//����Ա��

	virtual void display();				//��ʾԱ��

	virtual void remove();				//ɾ��Ա��

	virtual void seek();				//����Ա��

	virtual void sort();				//����Ա��


	virtual void modify(int t);				//�޸�Ա��
	

	int m_ID;			//���
	string m_Name;		//����
	string m_Post;		//��λ
};

//�ϰ���
class Boss : public Base{
public:
	virtual void Responsibility();		//Ա��ְ��

	virtual void add();					//����Ա��

	virtual void display();				//��ʾԱ��

	virtual void remove();				//ɾ��Ա��

	virtual void modify(int t);			//�޸�Ա��

	virtual void seek();				//����Ա��

	virtual void sort();				//����Ա��

	~Boss();							//��������

	static Base *m_Boss[100];			//�ϰ�����
};

//������
class Manger : public Base{
public:
	virtual void Responsibility();		//Ա��ְ��

	virtual void add();					//����Ա��

	virtual void display();				//��ʾԱ��

	virtual void remove();				//ɾ��Ա��

	virtual void modify(int t);			//�޸�Ա��

	virtual void seek();				//����Ա��

	virtual void sort();				//����Ա��

	~Manger();

	static Base *m_Manger[100];			//��������
};

//Ա����
class Employee : public Base{
public:
	virtual void Responsibility();		//Ա��ְ��

	virtual void add();					//����Ա��

	virtual void display();				//��ʾԱ��

	virtual void remove();				//ɾ��Ա��

	virtual void modify(int t);			//�޸�Ա��

	virtual void seek();				//����Ա��

	virtual void sort();				//����Ա��

	~Employee();

	static Base *m_Employee[100];		//Ա������
};


//��������
void doAdd(Base &base);
void doDisplay(Base &base);
void doRemove(Base &base);
void doModify(Base &base, int a);
void doSeek(Base &base);
void doSort(Base &base);


