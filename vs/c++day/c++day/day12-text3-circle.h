#pragma once
#include <iostream>
#include <cmath>
#include "day12-text3-point.h"		//������һ����

using namespace std;

//����Բ��
//������Ա�����ͳ�Ա����
class Circle{
public:
	//set�뾶
	void setR(double r);
	//�������Բ�ĵľ���
	void yuanXinJu(Point &p1);

private:
	double c_Ox;		//Բ��x��
	double c_Oy;		//Բ��y��
	double c_r;		//Բ�İ뾶
};