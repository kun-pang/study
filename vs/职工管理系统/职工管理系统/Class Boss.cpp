//�ϰ���
#include "tou.h"

void Boss::Responsibility(){
	cout << "����˾����ҵ��" << endl;
}

Base* Boss::m_Boss[100] = { nullptr };

//����Ա��
void Boss::add(){
	system("cls");

	int n = 0;

	cout << "������Ա����Ϣ��" << endl;

	for(int i = 0; i < 100; i++){
		//�ж�����ǰ���Ƿ�Ϊ��������

		if(Boss::m_Boss[i] != nullptr){
			continue;
		}else{
			Boss::m_Boss[i] = new Base;
			cout << "��ţ�";
			cin >> Boss::m_Boss[i]->m_ID;
			cout << "������";
			cin >> Boss::m_Boss[i]->m_Name;
			Boss::m_Boss[i]->m_Post = "�ϰ�";

			
			//ѯ���Ƿ񻹼�����������
			cout << "�Ƿ�����������ݣ�" << endl;
			cout << "1.��" << endl;
			cout << "0.��" << endl;
			cin >> n;
			if(n == 1){
				system("cls");

				cout << "������Ա����Ϣ��" << endl;
			}else if(n == 0){
				system("cls");

				meun();
				return;
			}
		}

	}
}

Boss::~Boss(){
	for(int i = 0; i < 100; i++){
		if(Boss::m_Boss[i] != nullptr){
			delete Boss::m_Boss[i];
			Boss::m_Boss[i] = nullptr;
		}
	}
}

//��ʾԱ��
void Boss::display(){
	system("cls");

	cout << "�ϰ���Ϣ���£�" << endl;
	for(int i = 0; i < 100; i++){
		if(Boss::m_Boss[i] != nullptr){
			cout << "��ţ�" << Boss::m_Boss[i]->m_ID << "  ";
			cout << "������" << Boss::m_Boss[i]->m_Name << "  ";
			cout << "��λ��" << Boss::m_Boss[i]->m_Post << "  ";
			cout << "ְ��";
			Boss::Responsibility();
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

void Boss::remove(){
	system("cls");

	int m;

	if(Boss::m_Boss[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	
	cout << "��������Ҫɾ����Ա�ı�ţ�" << endl;
	cin >> m;

	bool numOfEmployees = false; 

	for(int i = 0; i < 100; i++){
		if(Boss::m_Boss[i] != nullptr && Boss::m_Boss[i]->m_ID == m){
			delete Boss::m_Boss[i];
			Boss::m_Boss[i] = nullptr;

			for(int j = i; j < 99; j++){
				Boss::m_Boss[j] = Boss::m_Boss[j + 1];
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
void Boss::modify(int t){
	system("cls");

	if(Boss::m_Boss[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	int n = 0;			//�������
	int m = 0;			//��¼��Ҫ�޸ı��һ�µ�λ��
	int j = 0;

	for(int i = 0; i < 100; i++){
		if(Boss::m_Boss[i]->m_ID == t){
			m = i;
			cout << "��ţ�" << Boss::m_Boss[i]->m_ID << "  ";
			cout << "������" << Boss::m_Boss[i]->m_Name << "  ";
			cout << "��λ��" << Boss::m_Boss[i]->m_Post << "  ";
			cout << "ְ��";
			Boss::Responsibility();

			delete Boss::m_Boss[i];
			Boss::m_Boss[i] = nullptr;

			for(int j = i; j < 99; j++){
				Boss::m_Boss[j] = Boss::m_Boss[j + 1];
			}

			break;
		}
	}

	//ѯ���Ƿ������λ
	cout << "�Ƿ�Ըù��˸�����λ������ǣ���ѡ������ĸ�λ��" << endl;
	cout << "1.������Ա����λ" << endl;
	cout << "2.�����ɾ����λ" << endl;
	cout << "0.�����и���" << endl;
	cin >> n;
	if(n == 1){
		for(int i = 0; i < 100; i++){
			if(Employee::m_Employee[i] == nullptr){
				cout << "�Ƿ��������Ϣ�����޸ģ�" << endl;
				cout << "1.��" << endl;
				cout << "0.��" << endl;
				cin >> j;
				if(j == 1){
					Employee::m_Employee[i] = new Base;
					cout << "�������޸ĵ���Ϣ��" << endl;
					cout << "��ţ�" << endl;
					cin >> Employee::m_Employee[i]->m_ID;
					cout << "������" << endl;
					cin >> Employee::m_Employee[i]->m_Name;
					Employee::m_Employee[i]->m_Post = "Ա��";

					break;
				}else{
					Employee::m_Employee[i]->m_ID = Boss::m_Boss[m]->m_ID;
					Employee::m_Employee[i]->m_Name = Boss::m_Boss[m]->m_Name;
					Employee::m_Employee[i]->m_Post = "Ա��";

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
					Manger::m_Manger[i]->m_ID = Boss::m_Boss[m]->m_ID;
					Manger::m_Manger[i]->m_Name = Boss::m_Boss[m]->m_Name;
					Manger::m_Manger[i]->m_Post = "����";

					break;
				}
				
			}
		}
	}else{
		cout << "������Ҫ�޸ĵ���Ϣ��" << endl;
		cout << "��ţ�" << endl;
		cin >> Boss::m_Boss[m]->m_ID;
		cout << "������" << endl;
		cin >> Boss::m_Boss[m]->m_Name;

	}

	system("cls");
	meun();
	system("pause");
}

//����Ա��
void Boss::seek(){
	system("cls");

	if(Boss::m_Boss[0] == nullptr){
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
			if(Boss::m_Boss[i]->m_ID == m){
				cout << "��ţ�" << Boss::m_Boss[i]->m_ID << endl;
				cout << "������" << Boss::m_Boss[i]->m_Name << endl;
				cout << "��λ��" << Boss::m_Boss[i]->m_Post << endl;
				Boss::Responsibility();

				break;
			}
		}

	}else{
		cout << "������Ҫ���ҵ�������" << endl;
		cin >> name;


		for(int i = 0; i < 100; i++){
			if(Boss::m_Boss[i]->m_Name == name){
				cout << "��ţ�" << Boss::m_Boss[i]->m_ID << "  ";
				cout << "������" << Boss::m_Boss[i]->m_Name << "  ";
				cout << "��λ��" << Boss::m_Boss[i]->m_Post << "  ";
				Boss::Responsibility();
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
void Boss::sort(){
	system("cls");

	if(Boss::m_Boss[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	int size = sizeof(Boss::m_Boss) / sizeof(Boss::m_Boss[0]);

	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			//Boss::m_Boss[j] && Boss::m_Boss[j + 1] �ж������Ƿ�Ϊ��
			if(Boss::m_Boss[j] && Boss::m_Boss[j + 1] && Boss::m_Boss[j]->m_ID > Boss::m_Boss[j + 1]->m_ID){
				Base *temp =  Boss::m_Boss[j];
				Boss::m_Boss[j] = Boss::m_Boss[j + 1];
				Boss::m_Boss[j + 1] = temp;
			}
		}
	}

	cout << "������ϣ�" << endl;
	system("pause");
	system("cls");
	meun();
	return;
}