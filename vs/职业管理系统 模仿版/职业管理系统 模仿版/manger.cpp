#include "manger.h"

Manger::Manger(int id, string name, int did){
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = did;
}

void Manger::showInfo(){
	cout << "ְ����ţ�" << this->m_ID
		<< "\tְ��������" << this->m_Name
		<< "\tְ����λ��" << this->getDeptName()
		<< "\tְ��ְ������ϰ彻�������񣬲����·������Ա����" << endl;
}

string Manger::getDeptName(){
	return "����";
}