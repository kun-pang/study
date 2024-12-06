//������ ��Ҫ��Ӧ�û�����  ʵ�ֶ��ļ��Ŀ���


#include "workerManager.h"

WorkerManager::WorkerManager(){
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	//���ļ�

	//�ļ�������
	if(!ifs.is_open()){
		cout << "�ļ������ڣ�" << endl;

		//��ʼ������
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ�Ϊ��
	//ͨ���Ƿ��ļ�ĩβ�����ж������Ƿ�Ϊ��
	char ch;
	ifs >> ch;
	if(ifs.eof()){
		cout << "�ļ�Ϊ�գ�" << endl;
		//��ʼ������
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}


	//�ļ����ڣ�Ҳ��¼����
	int num = this->get_EmpNum();
	cout << "ְ������:" << num <<  endl;
	this->m_EmpNum = num;

	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ��е����ݣ�����������
	this->init_Emp();
	this->m_FileIsEmpty = false;

	ifs.close();
}

void WorkerManager::ShowMeun(){
	cout << "******************************" << endl;
	cout << "*****��ӭʹ��ְ������ϵͳ*****" << endl;
	cout << "******************************" << endl;	
	cout << "******* 0.�˳�������� *******" << endl;	
	cout << "******* 1.����ְ����Ϣ *******" << endl;
	cout << "******* 2.��ʾְ����Ϣ *******" << endl;
	cout << "******* 3.ɾ����ְְ����Ϣ ***" << endl;
	cout << "******* 4.�޸�ְ����Ϣ *******" << endl;
	cout << "******* 5.����ְ����Ϣ *******" << endl;	
	cout << "******* 6.���ձ������ *******" << endl;	
	cout << "******* 7.��������ĵ� *******" << endl;	
	cout << "******************************" << endl;	
}


void WorkerManager::ExitSystem(){
	cout << "��ӭʹ�ñ�ϵͳ��" << endl;
	system("pause");
	exit(0);
}


void WorkerManager::Add_Emp(){
	cout << "���������������" << endl;

	//�����û����������
	int addNum = 0;

	cin >> addNum;

	//�ж�����������Ƿ���Ч
	if(addNum > 0){
		//���
		//��������������Ҫ���ٿռ��С��
		int newSize = addNum + this->m_EmpNum;		//��������� + �Ѿ��洢������

		//�����¿ռ�
		Worker ** newSpace = new Worker*[newSize];

		//��ԭ�������ݿ�������������
		if(this->m_EmpArray != NULL){
			for(int i = 0; i < this->m_EmpNum; i++ ){
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//���������
		F:for(int i = 0; i < addNum; i++){
			int id;//ְ�����
			string name;//ְ������
			int dSelect; //��λ���

			cout << "�������" << i + 1 << "����Ա����ţ�"  << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����Ա��������"  << endl;
			cin >> name;
			cout << "�������" << i + 1 << "����Ա����λ��"  << endl;
			cout << "1���ϰ�" << endl;
			cout << "2������" << endl;
			cout << "3��Ա��" << endl;
			cin >> dSelect;

			//�ж���ӵ������Ƿ��Ѿ�����
			int red = this->IsChongFu(id);

			if(red == -1){
				Worker * worker = NULL;

				switch(dSelect){
				case 1:
					worker = new Boss(id, name, 1);
					break;
				case 2:
					worker = new Manger(id, name, 2);
					break;
				case 3:
					worker = new Employee(id, name, 3);
					break;
				default:
					break;
				}

				//��������ְ�����浽������
				newSpace[this->m_EmpNum + i] = worker;
			}else{
				cout << "���������룺" << endl;
				goto F;
			}
		}

		//�ͷ�ԭ�еĿռ�(��[]����Ϊ�ͷŵ�������)
		delete[] this->m_EmpArray;

		//���Ŀռ�ָ��
		this->m_EmpArray = newSpace;

		//�����¿ռ�����
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;

		cout << "��ӳɹ�" << addNum << "����Ա��!" << endl;

		//�����ļ�
		this->save();
	
	}else{
		cout << "��������" << endl;
	}

	//�����������
	system("pause");
	system("cls");
}

void WorkerManager::save(){
	ofstream ofs;
	ofs .open(FILENAME, ios::out);		//д�ļ�����ʽ��

	//�������е�����д��
	for(int i = 0; i < this->m_EmpNum; i++){
		ofs << this->m_EmpArray[i]->m_ID << "\t"
			<< this->m_EmpArray[i]->m_Name << "\t"
			<< this->m_EmpArray[i]->m_DeptID << endl;
	}

	//�ر��ļ�
	ofs.close();
}

int WorkerManager::get_EmpNum(){
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	//���ļ�

	int id;
	string name;
	int did;

	int num = 0;

	while(ifs >> id && ifs >> name && ifs >> did){
		num++;
	}


	return num;

}

void WorkerManager::init_Emp(){
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int id;
	string name;
	int did;

	int index = 0;

	while(ifs >> id && ifs >> name && ifs >> did){
		
		Worker *woker = NULL;
		switch(did){
		case 1:	//�ϰ�
			woker = new Boss(id, name, did);
			break;
		case 2://Ա��
			woker = new Employee(id, name, did);
			break;
		case 3://����
			woker = new Manger(id, name, did);
			break;
		}
		this->m_EmpArray[index] = woker;

		index++;

	}
	ifs.close();
}

void WorkerManager::Show_Emp(){
	//�ж� �ļ��Ƿ���� ���� ���ڵ��������Ƿ�Ϊ��
	if(this->m_FileIsEmpty){
		cout << "�ļ������ڻ����ļ�Ϊ�գ�" << endl;
	}else{
		for(int i = 0; i < this->m_EmpNum; i++){
			//���ö�̬
			this->m_EmpArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id){
	int index = -1;

	for(int i = 0; i < this->m_EmpNum; i++){
		if(this->m_EmpArray[i]->m_ID == id){
			index = i;
			break;
		}
	}

	return index;
}

void WorkerManager::Del_Emp(){
	if(this->m_FileIsEmpty){
		cout << "�ļ������ڻ����ļ�Ϊ�գ�" << endl;
	}else{
		cout << "��������Ҫɾ����ְ���ı�ţ�" << endl;
		int id;
		cin >> id;

		int index = -1;
		index = this->IsExist(id);
		
		if(index != -1){
			for(int i = 0; i < this->m_EmpNum; i++){
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;

			this->save();
			cout << "ɾ���ɹ���" << endl;
		}else{
			cout << "�ñ�ŵ�Ա��������!" << endl;
		}
		
	}

	system("pause");
	system("cls");
}

void WorkerManager::Mod_Emp(){
	if(this->m_FileIsEmpty){
		cout << "�ļ������ڻ����ļ�Ϊ�գ�" << endl;
	}else{
		cout << " ��������Ҫ�޸�ְ���ı�ţ�"<< endl;
		int id;
		cin >> id;

		int index = this->IsExist(id);

		if(index != -1){
			int newId;
			string name;
			int dSelect = 0;

			delete this->m_EmpArray[index];

			cout << "���޸ı��Ϊ" << id << "��ְ����Ϣ"<< endl;
			cout << "��ţ�" << endl;
			cin >> newId;

			cout << "������" << endl;
			cin >> name;

			cout << "��λ��" << endl;
			cout << "1���ϰ�" << endl;
			cout << "1������" << endl;
			cout << "1��Ա��" << endl;
			cin >> dSelect;

			Worker *worker = NULL;
			switch(dSelect){
			case 1:
				worker = new Boss(newId, name, dSelect);
				break;
			case 2:
				worker = new Manger(newId, name, dSelect);
				break;
			case 3:
				worker = new Employee(newId, name, dSelect);
				break;
			}

			this->m_EmpArray[index] = worker;

			this->save();

			cout << "�޸ĳɹ���" << endl;

		}else{
			cout << "�޸�ʧ�ܣ����޴��ˣ�" << endl;
		}

	}

	system("pause");
	system("cls");
}

int WorkerManager::IsChongFu(int id){
	int red = -1;
	
	//������
	if(this->m_FileIsEmpty){
		return red;
	}else{//����
		for(int i = 0; i < this->m_EmpNum; i++){
			if(this->m_EmpArray[i]->m_ID == id ){
				cout << "����ظ���" << endl;
				red = 1;
				return red;
			}else{
				return red;
			}
		}
	}
	
}

void WorkerManager::Find_Emp(){
	if(this->m_FileIsEmpty){
		cout << "�ļ������� ���� �ļ�Ϊ�գ�" << endl;
	}else{
		cout << "��������ҷ�ʽ��" << endl;
		cout << "1����Ų���" << endl;
		cout << "2����������" << endl;

		int select = 0;
		cin >> select;

		if(select == 1){
			int id;
			cout << "��������ҵ�ְ�����:" << endl;
			cin >> id;

			int red = this->IsExist(id);
			if(red != -1){
				cout << "���ҳɹ�����Ϣ���£�" << endl;
				this->m_EmpArray[red]->showInfo();
			}else{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}else if(select == 2){
			string name;
			cout << "��������ҵ�ְ������:" << endl;
			cin >> name;

			//�ж��ļ��Ƿ���ڸ�����
			bool flag = false;
			for(int i = 0; i < this->m_EmpNum; i++){
				if(this->m_EmpArray[i]->m_Name == name){
					this->m_EmpArray[i]->showInfo();

					flag = true;
				}
			}

			if(!flag){
				cout << "�����ڸ�������Ա����" << endl;
			}

		}else{
			cout << "��������" << endl;
		}
	}
	
	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp(){
	if(this->m_FileIsEmpty){
		cout << "�ļ������� ���� �ļ�Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}else{
		cout << "��������Ҫ����ķ�ʽ��" << endl;
		cout << "1������" << endl;
		cout << "2������" << endl;

		int select = 0;
		cin >> select;

		//����ѡ������ķ�ʽ
		for(int i = 0; i < this->m_EmpNum; i++){
			int minOrMax = i;		//���϶� ���ֵ ���� ��Сֵ �ǵ�ǰ���±�
			
			for(int j = i + 1; j < this->m_EmpNum; j++){
				if(select == 1){	//����
					if(this->m_EmpArray[minOrMax]->m_ID > this->m_EmpArray[j]->m_ID){
							minOrMax = j;
					}
				}else{				//����
					if(this->m_EmpArray[minOrMax]->m_ID < this->m_EmpArray[j]->m_ID){
							minOrMax = j;
					}
				}
			}
			

			//ÿ�����ѭ�����ܰ� ���ֵ ���� ��Сֵ λ�ù̶�������ǰ��
			if(minOrMax != i){
				Worker * t = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = t;
			}
		}

		cout << "����ɹ���" << endl;
		this->Show_Emp();
		this->save();

	}
}

void WorkerManager::Clean_Emp(){
	cout << "�Ƿ�����ļ���" << endl;
	cout << "1����" << endl;
	cout << "0����" << endl;

	int select = 0;
	cin >> select;

	if(select == 1){
		//ɾ���ļ��ؽ�
		ofstream ofs(FILENAME, ios::trunc); 
		ofs.close();

		if(this->m_EmpArray != NULL){
			//ɾ������ÿ��ְ������
			for(int i = 0; i < this->m_EmpNum; i++){
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;

		}

		cout << "��ճɹ���" << endl;
	}

	system("pause");
	system("cls");
}


WorkerManager::~WorkerManager(){
	if(this->m_EmpArray != NULL){
			//ɾ������ÿ��ְ������
			for(int i = 0; i < this->m_EmpNum; i++){
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
		}
}