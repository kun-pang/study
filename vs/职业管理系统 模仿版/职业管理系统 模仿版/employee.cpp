#include "employee.h"

//�����ó�ʼ���б�
Employee::Employee(int id, string name, int did){
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = did;
}

void Employee::showInfo(){
	cout << "ְ����ţ�" << this->m_ID
		<< "\tְ��������" << this->m_Name
		<< "\tְ����λ��" << this->getDeptName()
		<< "\tְ��ְ����ɾ�����������" << endl;
}

string Employee::getDeptName(){
	return "Ա��";
}