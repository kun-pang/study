/*2023��7��29*/
/* ���� �����߼�*/


/* ����
�����������ķ���ֵ
	1����Ҫ���ؾֲ�����������
	2�������ĵ��ÿ�������ֵ 
���õı���
	��c++�ڲ���ʵ����һ��ָ�볣��
��������
	��const�����βΣ���ֹ�����
*/

/* �����߼�
������Ĭ�ϲ���
	�������β��б����βο��Ը�Ĭ��ֵ
		����ֵ���� ���������β� = Ĭ��ֵ��{}
������ռλ����
	�������β��б��п�����ռλ����������ռλ���ڵ��õ�ʱ��������λ��
		����ֵ���� ���������������ͣ�{}
����������
	ͬһ������ȫ�������򣬾ֲ�����������ͬ�����������ƣ���ͬ�Σ��βεĸ��������͡�˳��
	�����ķ���ֵ��������Ϊ��������
	ע������:
		������Ϊ�������� 
		������������Ĭ�ϲ���
*/


#include <iostream>

using namespace std;

//����곣��

//��������
void KongHang();
int& text01();
int& text02();
void func(int &ref);
void s_func();
void showValue1(int & vue);
void showValue2(const int & vue);
//���������������ֿ�д����ô1������mian��������ʱĬ�ϲ���������д�����У�ֻ��������дһ�ξͿ����ˣ�
//							  2������mian����ǰ��ʱĬ�ϲ����������Ͷ���֮�ж�ѡһ������д
//������Ĭ�ϲ���  �����ĳ��λ���Ѿ�д��Ĭ�ϲ�������ô���Ǹ�λ�����󣬴����Ҷ�����Ҫ��Ĭ��ֵ
int  funx(int a, int b,int c = 2);
//int funx01(int a, int b = 2,int c);		����
//int funx02(int a, int b = 2,int c = 2);	��ȷ
int funx1(int a, int b);
void func1(int a, int);			//int��ʱ����ռλ����
void fun(int a, int = 10);
void cx();
void cx(int a, int b);
void cx(int a,double b);
void cx(double b,int a);
void zc(int &a);
//void zc(int a){
//	cout  << endl;
//}		����Ҳ���ܺ�����һ������  ������
void zc(const int &a);
void xc(int a, int b = 1);
void xc(int a);

//������ʵ��
int funx1(int a = 20, int b = 10){
	return a + b;
}

//�ṹ��

//������
int main11(){
	int &ret = text01();

	cout << "ret = " << ret << endl;	//��һ�α������ᱣ��
	cout << "ret = " << ret << endl;
	
	int &ret2 = text02();				//ret2����a�ı���

	cout << "ret2 = " << ret2 << endl;	
	cout << "ret2 = " << ret2 << endl;

	text02() = 1000;

	cout << "ret2 = " << ret2 << endl;	
	cout << "text02() = " << text02() << endl;
	cout << endl;

	//���ñ���(������ָ�볣�� Ŀ����Ϊ��ָ�����)
	s_func();

	//��������
	int a0 = 30;
	/*int & red = 200;  ���� 200û��һ�κϷ����ڴ�ռ�*/
	const int & red = 200;		//����const������������ת��Ϊ int t(�����Ǳ��������ȡ�� ��redͬһ�ռ�) = 200; const int & red = t;	
	int & res = a0;

	int a1 = 21;
	int a2 = 22;
	showValue1(a1);
	showValue2(a2);

	cout << "a1 = " << a1 << endl;
	cout << "a2 = " << a2 << endl;
	/*showValue1(100);*/
	showValue2(200);
	cout << endl;

	//����Ĭ�ϲ���
	//����������ݽ�ȥ����ô���ô�������ݣ����û�д������ݣ���ô����Ĭ��ֵ
	int b0 = 1, b1 = 2, b2 = 3;
	int s0 = 0,s1 = 0, s2;
	s0 = funx(b0,b1);
	s1 = funx(b0,b1,b2);
	s2 = funx1();

	cout << "s0 = " << s0 << "  s1 = " << s1  <<  " s2 =  " <<  s2 << endl;

	//������ռλ����
	//�����л�Ӧ��
	int c = 2;
	func1(10,20);		//����ʱ���
	fun(c);
	fun(10,c);
	fun(10);
	KongHang();

	//��������
	cx(1,2);
	cx(1,3.14);
	cx(2.1,1);
	cx();
	KongHang();

	//�������ص�ע������
	//������Ϊ�������� 
	int x = 10;			//״̬ �ɶ���д
	const int x1 = 10;	//״̬ ֻ����д
	zc(x);
	zc(x1);
	zc(10);
	//������������Ĭ�ϲ���
	xc(x,10);	
	/*xc(x);*/	//��������������Ĭ�ϲ���ʱ������ֶ����ԣ����ú���ͨ����Ҳ����ֶ����ԣ�


	system("pause");
	return 0;
}



//����
int& text01(){
	int a = 10;		//�ֲ����� ����ջ�� ����ʹ������ͷ�
	return a;	
}

int& text02(){
	static int a = 20;	//��̬����(���Ա��޸�) ����ȫ���� �������ϵͳ�ͷ�
	return a;
}

//���ñ��ʵĺ���
//����ı������������ã�ת��Ϊ int * const ref = &a; 
void func(int &ref){
	ref = 100;		//ref�����ã�ת��Ϊ*ref = 100
}
void s_func(){
	int a = 10;

	//�Զ�ת��Ϊint * const ref  = &a��ָ�볣����ָ��ָ�����޸ģ�Ҳ˵�������ã���ʼ���󣩲����Ը��� 
	int &ref = a;
	ref  = 20;		//�ڲ�����ref�����ã��Զ�ת��Ϊ* ref = 20��

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func(a);
	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;
	cout << endl;
}

//��ӡ����
void showValue1(int & vue1){
	cout << "a1 = " << vue1 << endl;
	//�����ڳ������ݵı仯�����ܻ�Ժ������������Ӱ��
	vue1 = 1000;
	cout << "vue1 = " << vue1 << endl;
}
void showValue2(const int & vue){
	//vue = 1000;		�ں������޽��ж��ض��������޸�
	cout << "vue = " << vue << endl;
}

//������Ĭ��ֵ
int  funx(int a, int b,int c){
	return a * c + b + c * c;
}
//int funx1(int a = 20, int b = 10){
//	return a + b;
//}  ���ܷ��ں���������Ĭ�Ϻ���

//������ռ�ò���
void func1(int a, int){
	//ռλ�����������޷���ȡ
	cout << "ռλ1" << endl;
}
void fun(int a, int){
	//ռλ����Ҳ������Ĭ�ϲ���
	cout << "ռλ2" << endl;
}


void KongHang(){
	cout << endl;
}

//��������
void cx(){
	cout << "������ͬ�����أ�" << endl;
}
void cx(int a, int b){
	cout << "ԭ������" << endl;
}
void cx(int a,double b){
	cout << "���Ͳ�ͬ�����أ�" << endl;
}
void cx(double b,int a){
	cout << "˳��ͬ�����أ�" << endl;
}
//int cx(){	
//}			�����÷���ֵ���������ص�����

//�������ص�ע������
//������Ϊ�������� 
void zc(int &a){
	cout << "��const" << endl;
}
void zc(const int &a){
	cout << "const" << endl;
}
//������������Ĭ�ϲ���
void xc(int a, int b){
	cout << "1" << endl;
}
void xc(int a){
	cout << "2" << endl;
}
