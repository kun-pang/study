/*2023-8-22*/

//��ͨ������ģ�庯��������
//��ͨ�������ÿ��Է����Զ�����ת������ʽ����ת����
//ģ�庯�����ã������ �Զ������Ƶ� ���򲻻ᷢ����ʽ����ת��
//������� ��ʾָ������ �ķ�ʽ������Է�����ʽת��


#include <iostream>

using namespace std;

//��ͨ��Ӻ���
int myAdd01(int a, int b){
	return a + b;
}

//�������ģ��
template<typename T>
T myAdd02(T a, T b){
	return a + b;
}



void test01(){
	int a = 66;
	int b = 20;
	char c = 'c';

	//��ͨ����������ʽת��
	cout << myAdd01(a, c) << endl;

	//ģ�庯���Զ������Ƶ� ���ᷢ����ʽ����ת��
	//cout << myAdd02(a, c) << endl;

	//ģ�庯����ʾָ������ �ᷢ����ʽ����ת��
	cout << myAdd02<int>(a, c) << endl;
}

int main(){

	test01();

	system("pause");
	return 0;
}