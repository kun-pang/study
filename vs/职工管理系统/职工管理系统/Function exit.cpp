//�˳�����

#include "tou.h"

void exit(){

	system("cls");

	int z;		//���Ʊ���
	cout << "�Ƿ��˳�����" << endl;
	cout << "1. ��" << endl;
	cout << "2. ��" << endl;
s:
	cin >> z;

	if(z == 1){
		cout << "��ӭ�´�ʹ�ã�" << endl;
		return;				
	}else if(z == 2){
		system("cls");

		meun();
	}else{
		cout << "�޷�ʶ���û�������" << endl;
		cout << "�����²�����" << endl;
		goto s;
	}

}