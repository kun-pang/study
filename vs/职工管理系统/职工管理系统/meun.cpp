//�˵�����

#include "tou.h"

void meun(){
	int m;		//ѡ�����
	int n = 0;
	int a = 0;
	//ʵ������
	Boss b;
	Employee e;
	Manger ma;

	cout << "******************************" << endl;
	cout << "******* 1.����ְ����Ϣ *******" << endl;
	cout << "******* 2.��ʾְ����Ϣ *******" << endl;
	cout << "******* 3.ɾ����ְְ����Ϣ ***" << endl;
	cout << "******* 4.�޸�ְ����Ϣ *******" << endl;
	cout << "******* 5.����ְ����Ϣ *******" << endl;	
	cout << "******* 6.���ձ������ *******" << endl;	
	cout << "******* 7.��������ĵ� *******" << endl;	
	cout << "******* 0.�˳�������� *******" << endl;	
	cout << "******************************" << endl;	
	
	cout<< endl;
	cout << "��ѡ���ܣ�" << endl;
	cin >> m;

	switch(m){
	case 1:

		cout << "�����ӵĸ�λ��" << endl;
		cout << "1.�ϰ�" << endl;
		cout << "2.����" << endl;
		cout << "3.Ա��" << endl;
		cin >>n;

		if(n == 1){
			doAdd(b);
		}else if(n == 2){
			doAdd(ma);
		}else if(n == 3){
			doAdd(e);
		}else{
			cout << "������Ч��" << endl;

			system("cls");

			meun();
		}

		break;
	case 2:
		n = 0;
		cout << "��鿴�ĸ�λ��" << endl;
		cout << "1.�ϰ�" << endl;
		cout << "2.����" << endl;
		cout << "3.Ա��" << endl;
		cin >>n;

		if(n == 1){
			doDisplay(b);
		}else if(n == 2){
			doDisplay(ma);
		}else if(n == 3){
			doDisplay(e);
		}else{
			cout << "������Ч��" << endl;

			system("cls");

			meun();
		}
		break;
	case 3:
		n = 0;
		cout << "��ɾ���ĸ�λ��Ա��" << endl;
		cout << "1.�ϰ�" << endl;
		cout << "2.����" << endl;
		cout << "3.Ա��" << endl;
		cin >>n;

		if(n == 1){
			doRemove(b);
		}else if(n == 2){
			doRemove(ma);
		}else if(n == 3){
			doRemove(e);
		}else{
			cout << "������Ч��" << endl;

			system("cls");

			meun();
		}

		break;
	case 4:
		n = 0;
		cout << "��ɾ���ĸ�λ��Ա��" << endl;
		cout << "1.�ϰ�" << endl;
		cout << "2.����" << endl;
		cout << "3.Ա��" << endl;
		cin >> n;

		cout << "��������Ҫ�޸ĵı�ţ�" << endl;
		cin >> a;


		if(n == 1){
			doModify(b,a);
		}else if(n == 2){
			doModify(ma,a);
		}else if(n == 3){
			doModify(e,a);
		}else{
			cout << "������Ч��" << endl;

			system("cls");

			meun();
		}
		break;
	case 5:
		n = 0;
		cout << "����ҵĸ�λ��Ա��" << endl;
		cout << "1.�ϰ�" << endl;
		cout << "2.����" << endl;
		cout << "3.Ա��" << endl;
		cin >>n;

		if(n == 1){
			doSeek(b);
		}else if(n == 2){
			doSeek(ma);
		}else if(n == 3){
			doSeek(e);
		}else{
			cout << "������Ч��" << endl;

			system("cls");

			meun();
		}
		break;
	case 6:
		n = 0;
		cout << "������ĸ�λ��Ա��" << endl;
		cout << "1.�ϰ�" << endl;
		cout << "2.����" << endl;
		cout << "3.Ա��" << endl;
		cin >>n;

		if(n == 1){
			doSort(b);
		}else if(n == 2){
			doSort(ma);
		}else if(n == 3){
			doSort(e);
		}else{
			cout << "������Ч��" << endl;

			system("cls");

			meun();
		}
		break;

	case 7:
		empty();
		break;
	case 0:
		exit();
		break;
	default:
		cout << "������Ч��" << endl;
		return;
	}
}
