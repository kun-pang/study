/*2023��7��31*/
/* ��Բ��ϵ */

//��Ƶ���(Point)��Բ��(Circle) �жϵ�Բ��ϵ
//����Բ�� ����Բ�� ����԰��

//ע��������֮����Ⱥ�˳��  a����b��a���ں��棬b��ǰ

#include <iostream>
#include <cmath>
#include "day12-text3-circle.h"
#include "day12-text3-point.h"


using namespace std;

////�������
//class Point{
//public:
//	//set������
//	void setP(double x, double y){
//		p_x = x;
//		p_y = y;
//	}
//	//get������
//	double getX(){
//		return p_x;
//	}
//	double getY(){
//		return p_y;
//	}
//
//private:
//	double p_x;		//��x��
//	double p_y;		//��y��
//};

//������
////����Բ��
//class Circle{
//public:
//	//set�뾶
//	void setR(double r){
//		c_Ox = 0;
//		c_Oy = 0;
//		c_r = r;
//	}
//	//�������Բ�ĵľ���
//	void yuanXinJu(Point &p1){
//		double x,y;
//		x = p1.getX();
//		y = p1.getY();
//		double i = (x- c_Ox) *  (x- c_Ox)+ (y - c_Oy) * (y - c_Oy);
//		double s = sqrt(i);		//��<cmath>��sqrt`�����ж�����ذ汾���ֱ����`long double`��`float`��`double`���͵Ĳ�����
//		if(s > c_r){
//			cout << "����Բ��" << endl;
//		}else if(s == c_r){
//			cout << "����Բ��" << endl;
//		}else{
//			cout << "����Բ��" << endl;
//		}
//	}
//
//private:
//	double c_Ox;		//Բ��x��
//	double c_Oy;		//Բ��y��
//	double c_r;		//Բ�İ뾶
//};


//Բ��Ҳ����ͨ�����๹��


int main12t3(){
	Point p1;
	Circle c1;
	double x,y,r;
	cout << "��ֱ������ĺ����ꡢ�������Լ�Բ�İ뾶��" << endl;
	cin >> x >> y >> r;
	p1.setP(x,y);
	c1.setR(r);
	c1.yuanXinJu(p1);

	system("pause");
	return 0;
}



