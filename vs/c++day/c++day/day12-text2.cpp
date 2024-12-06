/*2023��7��31*/
/* ��������(Cube) */

/*
����������������
�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
*/

#include <iostream>

using namespace std;



//������
//��������
class Cube{
public:
	//set
	void setCube(double l, double w, double h){
		//�жϳ����ȫΪ����
		while(1){
			if(l > 0 && w > 0 && h > 0){
				c_L = l;
				c_W = w;
				c_H = h;
				break;
			}else{
				cout << "�в���Ϊ���������������볤������:" << endl;
				cin >> l >> w >> h;
			}
		}
	}
	//get���
	double getS(){
		if(c_L == c_W && c_W == c_H){
			c_S = 6 * c_L * c_L;
		}else{
			c_S = 2 * c_L * c_W + 2 * c_L * c_H + 2 * c_W * c_H;
		}
		return c_S;
	}
	//get���
	double getV(){
		if(c_L == c_W && c_W == c_H){
			c_V = c_L * c_L * c_L;
		}else{
			c_V = c_L * c_W * c_H;
		}
		return c_V;
	}
	//get�����
	double getL(){
		return c_L;
	}
	double getW(){
		return c_W;
	}
	double getH(){
		return c_H;
	}
	//ͨ����Ա�����ж�
	//����ʹ������Ա�
	void CubeXd(Cube &c){
		if(c_L == c.getL() && c_W == c.getW() && c_H == c.getH()){
		cout << "�������������" << endl;
	}else{
		cout << "���������岻���" << endl;
	}
	}

private:
	//��
	double c_L;
	//��
	double c_W;
	//��
	double c_H;
	//�����
	double c_S;
	//���
	double c_V;
};

//����ȫ�ֺ���
//void CubeXD(double a0, double b0, double c0, double a1, double b1, double c1);
void CubeXD(Cube &c1,Cube &c2);

int main12t2(){
	//Cubeʵ����
	Cube c1;
	int l,w,h;

	cout << "�����볤������:" << endl;
	cin >> l >> w >> h;
	c1.setCube(l,w,h);
	cout << "�������" << c1.getS() << " �����" << c1.getV() << endl;

	//ʵ�����ڶ���
	Cube c2;
	cout << "�����볤������:" << endl;
	cin >> l >> w >> h;
	c2.setCube(l,w,h);
	cout << "�������" << c2.getS() << " ���" << c2.getV() << endl;

	//ȫ�ֺ����ж���ͬ
	CubeXD(c1, c2);

	//��Ա�����ж���ͬ
	c1.CubeXd(c2);

	system("pause");
	return 0;
}

//�ж��Ƿ����
void CubeXD(Cube &c1,Cube &c2){
	if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()){
		cout << "�������������" << endl;
	}else{
		cout << "���������岻���" << endl;
	}
}
