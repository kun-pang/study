#pragma once	//��ֹͷ�ļ��ظ�����
#include <iostream>
#include <cmath>

using namespace std;

//�������
//������Ա�����ͳ�Ա����
class Point{
public:
	//set������
	void setP(double x, double y);
	//get������
	double getX();
	double getY();

private:
	double p_x;		//��x��
	double p_y;		//��y��
};