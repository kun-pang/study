//������
#include "tou.h"

void Manger::Responsibility(){
	cout << "����ϰ彻�������񣬲����·������Ա����" << endl;
}

//��ʼ��
Base* Manger::m_Manger[100] = { nullptr };

void Manger::add(){
	system("cls");

	cout << "������Ա����Ϣ��" << endl;

	for(int i = 0; i < 100; i++){
		//�ж�����ǰ���Ƿ�Ϊ��������
		if(Manger::m_Manger[i] != nullptr){
			continue;
		}else{
			Manger::m_Manger[i] = new Base;
			cout << "��ţ�";
			cin >> Manger::m_Manger[i]->m_ID;
			cout << "������";
			cin >> Manger::m_Manger[i]->m_Name;
			Manger::m_Manger[i]->m_Post = "Ա��";

			
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

Manger::~Manger(){
	for(int i = 0; i < 100; i++){
		if(Manger::m_Manger[i] != nullptr){
			delete Manger::m_Manger[i];
			Manger::m_Manger[i] = nullptr;
		}
	}
}

void Manger::display(){
	system("cls");

	cout << "������Ϣ���£�" << endl;
	for(int i = 0; i < 100; i++){
		if(Manger::m_Manger[i] != nullptr){
			cout << "��ţ�" << Manger::m_Manger[i]->m_ID << "  ";
			cout << "������" << Manger::m_Manger[i]->m_Name << "  ";
			cout << "��λ��" << Manger::m_Manger[i]->m_Post << "  ";
			cout << "ְ��";
			Manger::Responsibility();
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


void Manger::remove(){
	system("cls");

	int m;

	if(Manger::m_Manger[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	
	cout << "��������Ҫɾ����Ա�ı�ţ�" << endl;
	cin >> m;

	bool numOfEmployees = false;

	for(int i = 0; i < 100; i++){
		if(Manger::m_Manger[i] != nullptr && Manger::m_Manger[i]->m_ID == m){
			//`Boss::m_Boss[i]` ������ָ�룬���������е�һ��Ԫ�ء�
			//��ˣ�`delete` �����ֻ����������Ԫ��ָ��Ķ��󣬲�����Ӱ�����鱾��
			delete Manger::m_Manger[i];
			Manger::m_Manger[i] = nullptr;

			for(int j = i; j < 99; j++){
				Manger::m_Manger[j] = Manger::m_Manger[j + 1];
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
void Manger::modify(int t){
	system("cls");

	if(Manger::m_Manger[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	int n = 0;			//�������
	int m = 0;			//��¼��Ҫ�޸ı��һ�µ�λ��
	int j = 0;

	for(int i = 0; i < 100; i++){
		if(Manger::m_Manger[i]->m_ID == t){
			m = i;
			cout << "��ţ�" << Manger::m_Manger[i]->m_ID << "  ";
			cout << "������" << Manger::m_Manger[i]->m_Name << "  ";
			cout << "��λ��" << Manger::m_Manger[i]->m_Post << "  ";
			cout << "ְ��";
			Manger::Responsibility();

			delete Manger::m_Manger[i];
			Manger::m_Manger[i] = nullptr;

			for(int j = i; j < 99; j++){
				Manger::m_Manger[j] = Manger::m_Manger[j + 1];
			}

			break;
		}
	}

	//ѯ���Ƿ������λ
	cout << "�Ƿ�Ըù��˸�����λ������ǣ���ѡ������ĸ�λ��" << endl;
	cout << "1.������Ա����λ" << endl;
	cout << "2.�������ϰ��λ" << endl;
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
					Employee::m_Employee[i]->m_ID = Manger::m_Manger[m]->m_ID;
					Employee::m_Employee[i]->m_Name = Manger::m_Manger[m]->m_Name;
					Employee::m_Employee[i]->m_Post = "Ա��";

					break;
				}
				
			}
		}
	}else if(n == 2){
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
					Boss::m_Boss[i]->m_ID = Manger::m_Manger[m]->m_ID;
					Boss::m_Boss[i]->m_Name = Manger::m_Manger[m]->m_Name;
					Boss::m_Boss[i]->m_Post = "�ϰ�";

					break;
				}
				
			}
		}
	}else{
		cout << "������Ҫ�޸ĵ���Ϣ��" << endl;
		cout << "��ţ�" << endl;
		cin >> Manger::m_Manger[m]->m_ID;
		cout << "������" << endl;
		cin >> Manger::m_Manger[m]->m_Name;

	}

	system("cls");
	meun();
	system("pause");
}

//����Ա��
void Manger::seek(){
	system("cls");

	if(Manger::m_Manger[0] == nullptr){
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
			if(Manger::m_Manger[i]->m_ID == m){
				cout << "��ţ�" << Manger::m_Manger[i]->m_ID << endl;
				cout << "������" << Manger::m_Manger[i]->m_Name << endl;
				cout << "��λ��" << Manger::m_Manger[i]->m_Post << endl;
				Manger::Responsibility();

				break;
			}
		}

	}else{
		cout << "������Ҫ���ҵ�������" << endl;
		cin >> name;


		for(int i = 0; i < 100; i++){
			if(Manger::m_Manger[i]->m_Name == name){
				cout << "��ţ�" << Manger::m_Manger[i]->m_ID << "  ";
				cout << "������" << Manger::m_Manger[i]->m_Name << "  ";
				cout << "��λ��" << Manger::m_Manger[i]->m_Post << "  ";
				Manger::Responsibility();
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
void Manger::sort(){
	system("cls");

	if(Manger::m_Manger[0] == nullptr){
		cout << "������Ա��Ϣ��" << endl;

		system("pause");
		meun();
		return;
	}

	int size = sizeof(Manger::m_Manger) / sizeof(Manger::m_Manger[0]);

	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(Manger::m_Manger[j] && Manger::m_Manger[j + 1] && Manger::m_Manger[j]->m_ID > Manger::m_Manger[j + 1]->m_ID){
				Base *temp = Manger::m_Manger[j];
				Manger::m_Manger[j] = Manger::m_Manger[j + 1];
				Manger::m_Manger[j + 1] = temp;
			}
		}
	}

	cout << "������ϣ�" << endl;
	system("pause");
	system("cls");
	meun();
	return;
}