#include <iostream>				//����ʡ�ԣ����ϵĻ������  #pragma once	
#include "workerManager.h"
#include "worker.h"
#include "boss.h"
#include "employee.h"
#include "manger.h"

using namespace std;

int main(){
	//ʵ�������������
	WorkerManager wm;

	int n = 0;		//�洢�û�ѡ��


	while(1){
		wm.ShowMeun();
		cout << endl;
		cout << "��ѡ���ܣ�" << endl;
		cin >> n;

		switch(n){
		case 0:		//�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1:		//����ְ��
			wm.Add_Emp();
			break;
		case 2:		//��ʾְ��
			wm.Show_Emp();
			break;
		case 3:		//ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4:		//�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5:		//����ְ��
			wm.Find_Emp();
			break;
		case 6:		//����ְ��
			wm.Sort_Emp();
			break;
		case 7:		//���ְ��
			wm.Clean_Emp();
			break;
		default:
			system("cls");
			break;
		}
	}


	system("pause");
	return 0;
}