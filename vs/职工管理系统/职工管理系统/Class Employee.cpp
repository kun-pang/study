//Ա����
#include "tou.h"

void Employee::Responsibility(){
	cout << "��ɾ�����������" << endl;
}

Base* Employee::m_Employee[100] = { nullptr };

void Employee::add(){
	system("cls");

	cout << "������Ա����Ϣ��" << endl;

	for(int i = 0; i < 100; i++){
		if(Employee::m_Employee[i] != nullptr){
			continue;
		}else{
			Employee::m_Employee[i] = new Base;
			cout << "��ţ�";
			cin >> Employee::m_Employee[i]->m_ID;
			cout << "������";
			cin >> Employee::m_Employee[i]->m_Name;
			Employee::m_Employee[i]->m_Post = "Ա��";

			
			//ѯ���Ƿ񻹼�����������
			int n = 0;
			cout << "�Ƿ�����������ݣ�" << endl;
			cout << "1.��" << endl;
			cout << "0.��" << endl;
			cin >> n;
			if(n == 1){
				system("cls");

				cout << "������Ա����Ϣ��" << endl;
			}else{
				system("cls");

				meun();
				return;
			}
		}

	}
}

Employee::~Employee(){
	for(int i = 0; i < 100; i++){
		if(Employee::m_Employee[i] != nullptr){
			delete Employee::m_Employee[i];
			Employee::m_Employee[i] = nullptr;
		}
	}
}

void Employee::display(){
	system("cls");

	cout << "Ա����Ϣ���£�" << endl;
	for(int i = 0; i < 100; i++){
		if(Employee::m_Employee[i] != nullptr){
			cout << "��ţ�" << Employee::m_Employee[i]->m_ID << "  ";
			cout << "������" << Employee::m_Employee[i]->m_Name << "  ";
			cout << "��λ��" << Employee::m_Employee[i]->m_Post << "  ";
			cout << "ְ��";
			Employee::Responsibility();
			cout << endl;
		}else{
			cout << "֮��Ϊ��!" << endl;
			system("pause");
			system("cls");

			meun();
			return;
		}
	}
}


void Employee::remove(){
	system("cls");

	int m;

	if(Employee::m_Employee[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	
	cout << "��������Ҫɾ����Ա�ı�ţ�" << endl;
	cin >> m;

	bool numOfEmployees = false; 

	for(int i = 0; i < 100; i++){
		if(Employee::m_Employee[i] != nullptr && Employee::m_Employee[i]->m_ID == m){
			delete Employee::m_Employee[i];
			Employee::m_Employee[i] = nullptr;

			for(int j = i; j < 99; j++){
				Employee::m_Employee[j] = Employee::m_Employee[j + 1];
			}

			numOfEmployees = true;
			cout << "ɾ����ϣ�" << endl;
			break;
		}

	}

	if (!numOfEmployees) {
		cout << "���޴��ˣ�" << endl;
	}

	system("cls");
	meun();
	system("pause");
}


//�޸�Ա��
void Employee::modify(int t){
	system("cls");

	if(Employee::m_Employee[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	int n = 0;			//�������
	int m = 0;			//��¼��Ҫ�޸ı��һ�µ�λ��
	int j = 0;

	for(int i = 0; i < 100; i++){
		if(Employee::m_Employee[i]->m_ID == t){
			m = i;
			cout << "��ţ�" << Employee::m_Employee[i]->m_ID << "  ";
			cout << "������" << Employee::m_Employee[i]->m_Name << "  ";
			cout << "��λ��" << Employee::m_Employee[i]->m_Post << "  ";
			cout << "ְ��";
			Employee::Responsibility();

			delete Employee::m_Employee[i];
			Employee::m_Employee[i] = nullptr;

			for(int j = i; j < 99; j++){
				Employee::m_Employee[j] = Employee::m_Employee[j + 1];
			}

			break;
		}
	}

	//ѯ���Ƿ������λ
	cout << "�Ƿ�Ըù��˸�����λ������ǣ���ѡ������ĸ�λ��" << endl;
	cout << "1.�������ϰ��λ" << endl;
	cout << "2.�����ɾ����λ" << endl;
	cout << "0.�����и���" << endl;
	cin >> n;
	if(n == 1){
		for(int i = 0; i < 100; i++){
			if(Boss::m_Boss[i] == nullptr){
				cout << "�Ƿ��������Ϣ�����޸ģ�" << endl;
				cout << "1.��" << endl;
				cout << "0.��" << endl;
				cin >> j;
				if(j == 1){
					Boss::m_Boss[i] = new Base;
					cout << "�������޸ĵ���Ϣ��" << endl;
					cout << "��ţ�" << endl;
					cin >> Boss::m_Boss[i]->m_ID;
					cout << "������" << endl;
					cin >> Boss::m_Boss[i]->m_Name;
					Boss::m_Boss[i]->m_Post = "�ϰ�";

					

					break;
				}else{
					Boss::m_Boss[i]->m_ID = Employee::m_Employee[m]->m_ID;
					Boss::m_Boss[i]->m_Name = Employee::m_Employee[m]->m_Name;
					Boss::m_Boss[i]->m_Post = "�ϰ�";

					break;
				}
				
			}
		}
	}else if(n == 2){
		for(int i = 0; i < 100; i++){
			if(Manger::m_Manger[i] == nullptr){
				cout << "�Ƿ��������Ϣ�����޸ģ�" << endl;
				cout << "1.��" << endl;
				cout << "0.��" << endl;
				cin >> j;
				if(j == 1){
					Manger::m_Manger[i] = new Base;
					cout << "�������޸ĵ���Ϣ��" << endl;
					cout << "��ţ�" << endl;
					cin >> Manger::m_Manger[i]->m_ID;
					cout << "������" << endl;
					cin >> Manger::m_Manger[i]->m_Name;
					Manger::m_Manger[i]->m_Post = "����";

					break;
				}else{
					Manger::m_Manger[i]->m_ID = Employee::m_Employee[m]->m_ID;
					Manger::m_Manger[i]->m_Name = Employee::m_Employee[m]->m_Name;
					Manger::m_Manger[i]->m_Post = "����";

					break;
				}
				
			}
		}
	}else{
		cout << "������Ҫ�޸ĵ���Ϣ��" << endl;
		cout << "��ţ�" << endl;
		cin >> Employee::m_Employee[m]->m_ID;
		cout << "������" << endl;
		cin >> Employee::m_Employee[m]->m_Name;

	}

	system("cls");
	meun();
	system("pause");
}

//����Ա��
void Employee::seek(){
	system("cls");

	if(Employee::m_Employee[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	int n = 0;
	int m = 0;		//��¼���ұ��
	string name;	//��¼��������

F:
	cout << "��Ҫͨ��һ�����ַ�ʽ���ң�" << endl;
	cout << "1.���" << endl;
	cout << "2.����" << endl;
	cin >> n;

	if(n == 1){
		cout << "������Ҫ���ҵı�ţ�" << endl;
		cin >> m;

		for(int i = 0; i < 100; i++){
			if(Employee::m_Employee[i]->m_ID == m){
				cout << "��ţ�" << Employee::m_Employee[i]->m_ID << endl;
				cout << "������" << Employee::m_Employee[i]->m_Name << endl;
				cout << "��λ��" << Employee::m_Employee[i]->m_Post << endl;
				Employee::Responsibility();

				break;
			}
		}

	}else{
		cout << "������Ҫ���ҵ�������" << endl;
		cin >> name;


		for(int i = 0; i < 100; i++){
			if(Employee::m_Employee[i]->m_Name == name){
				cout << "��ţ�" << Employee::m_Employee[i]->m_ID << "  ";
				cout << "������" << Employee::m_Employee[i]->m_Name << "  ";
				cout << "��λ��" << Employee::m_Employee[i]->m_Post << "  ";
				Employee::Responsibility();
				cout << endl;

				break;
			}
		}
	}

	n = 0;
	cout << "�Ƿ��м�������:" << endl;
	cout << "1.��" << endl;
	cout << "2.��" << endl;
	cin >> n;

	if(n == 1){
		n = 0;
		goto F;
	}else{
		system("pause");
		system("cls");
		meun();
		return;
	}
}


//��Ա������
void Employee::sort(){
	system("cls");

	if(Employee::m_Employee[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	int size = sizeof(Employee::m_Employee) / sizeof(Employee::m_Employee[0]);

	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(Employee::m_Employee[j] && Employee::m_Employee[j + 1] && Employee::m_Employee[j]->m_ID > Employee::m_Employee[j + 1]->m_ID){
				Base *temp =  Employee::m_Employee[j];
				Employee::m_Employee[j] = Employee::m_Employee[j + 1];
				Employee::m_Employee[j + 1] = temp;
			}
		}
	}

	cout << "������ϣ�" << endl;
	system("pause");
	system("cls");
	meun();
	return;
}