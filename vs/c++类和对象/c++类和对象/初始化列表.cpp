/*2023��8��2*/

//��ʼ���б�

//���ã�������ʼ������

//�﷨�����캯��():����1��ֵ1��������2��ֵ2��...{}

#include <iostream>

using namespace std;

class Person{
public:
	//��ͳ��ʼ��
	//Person(int a, int b, int c){
	//	p_A = a;
	//	p_B = b;
	//	p_C = c;
	//}

	//��ʼ���б�  ֵ�̶�
	/*Person():p_A(10),p_B(20),p_C(30){
		
	}*/

	//ֵ���̶����������
	Person(int a, int b, int c):p_A(a),p_B(b),p_C(c){
		
	}

	int p_A;
	int p_B;
	int p_C;
};

//���Ժ���
void text(){
	Person p(10,20,30);
	/*Person p;*/

	cout << "p_A = " << p.p_A << endl;
	cout << "p_B = " << p.p_B << endl;
	cout << "p_C = " << p.p_C << endl;
}

int main(){

	text();

	system("pause");
	return 0;
}