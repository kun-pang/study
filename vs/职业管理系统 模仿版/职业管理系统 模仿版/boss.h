#pragma once		//��ֹͷ�ļ��ظ�
#include <iostream>
#include <string>
#include "worker.h"

using namespace std;

//ְ����
class Boss : public Worker{
public:

	Boss(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ��Ϣ
	virtual string getDeptName();

	
};