/*2023��7��14*/
/*�������̽ṹ */


/*����ṹ
	ѡ��ṹ	if��䡢��Ŀ����������ʽ1�����ʽ2�����ʽ3����switch���
	Ƕ�׽ṹ	
	ѭ���ṹ	while���
*/

#include <iostream>

using namespace std;

int main3(){
	//��Ŀ�����
	//num1 ���� num2 �����num1 �������num2 
	int num1 = 1;
	int num2 = 2;
	int num0 = 0;
	num0 = (num1 > num2 ? num1 : num2);
	(num1 < num2 ? num1 : num2) = 10;		//��c++����Ŀ��������صı��������Լ�����ֵ
	cout << "num0 = " << num0 << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << endl;

	//switch���  ֻ���ж����͡�ö�����͡��ַ��ͣ������ж������С��
	//��Ӱ���
	//10-9 ����
	//8-7 �ǳ���
	//6-5 ����
	//5-0 ��Ƭ
	int score;		//����
	cout << "������˽����С���֣�" << endl;
	cin >> score;
	switch(score){
	case 10:
		cout << "����Ϊ����һ������ĵ�Ӱ��" << endl;
		break;		//�˳������֧ ���û�н������ִ��
	case 9:
		cout << "����Ϊ����һ������ĵ�Ӱ��" << endl;
		break;
	case 8:
		cout << "����Ϊ����һ���ǳ��õĵ�Ӱ��" << endl;
		break;
	case 7:
		cout << "����Ϊ����һ���ǳ��õĵ�Ӱ��" << endl;
		break;
	case 6:
		cout << "����Ϊ����һ������ĵ�Ӱ��" << endl;
		break;
	case 5:
		cout << "����Ϊ����һ������ĵ�Ӱ��" << endl;
		break;
	default:
		cout << "����Ϊ����һ����Ƭ��" << endl;
		break;
	}
	switch((num1 > num2 ? num2 : num1)){
	case 2:
		cout << "��Ŀ�����+switch" << endl;
	}
	cout << endl;

	//while���  ����������������������ѭ��
	//��ӡ0-9���ֵ���Ļ��
	int num3 = 9;
	while(num3 >= 0){
		cout << num3 << "  ";
		num3--;
	}
	cout << endl;

	system("pause");

	return 0;
}