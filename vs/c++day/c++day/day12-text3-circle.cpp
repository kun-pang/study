#include "day12-text3-circle.h"


//set�뾶
void Circle::setR(double r){
	c_Ox = 0;
	c_Oy = 0;
	c_r = r;
}
//�������Բ�ĵľ���
void Circle::yuanXinJu(Point &p1){
	double x,y;
	x = p1.getX();
	y = p1.getY();
	double i = (x- c_Ox) *  (x- c_Ox)+ (y - c_Oy) * (y - c_Oy);
	double s = sqrt(i);		//��<cmath>��sqrt`�����ж�����ذ汾���ֱ����`long double`��`float`��`double`���͵Ĳ�����
	if(s > c_r){
		cout << "����Բ��" << endl;
	}else if(s == c_r){
		cout << "����Բ��" << endl;
	}else{
		cout << "����Բ��" << endl;
	}
}
