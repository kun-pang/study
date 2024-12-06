#pragma once		//��ֹͷ�ļ��ظ�
#include <iostream>
#include <fstream>

#include "worker.h"
#include "boss.h"
#include "employee.h"
#include "manger.h"

#define FILENAME "ְ����Ա��Ϣ.txt"


using namespace std;

class WorkerManager{
public:
	WorkerManager();

	//չʾ�˵�
	void ShowMeun();

	//�˳��ӿ�
	void ExitSystem();

	//��ӽӿ�
	void Add_Emp();

	//�����ļ�
	void save();

	//ͳ���ļ�����
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾ�ӿ�
	void Show_Emp();

	//�ж��ļ��Ƿ���ڸ�����
	int IsExist(int id);

	//ɾ���ӿ�
	void Del_Emp();

	//�޸Ľӿ�
	void Mod_Emp();

	//�ж��ļ��б�Ż��������Ƿ��ظ�
	int IsChongFu(int id);		//д�ظ���

	//���ҽӿ�
	void Find_Emp();

	//����ӿ�
	void Sort_Emp();

	//����ļ�
	void Clean_Emp();

	~WorkerManager();


	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	//�����洢�������ָ��
	//ʹ����������ӷ���
	Worker ** m_EmpArray;

	//�ж��ļ��Ƿ�Ϊ�յı�־
	bool m_FileIsEmpty;
	
};
