/*2023-8-8*/

//�������̣���ˮ-����-���뱭��-���븨��

//�Ż�������ÿ�����赥��дһ�����麯�� �ڸ�����дһ������ȫ�����麯���ĳ�Ա����
//			������дһ���������� ���ڻ�ȡ����ı����͵��ø���ĳ�Ա����

#include <iostream>
#include <string>

using namespace std;

//������ ������
class Chong{
public:
	virtual void func() = 0;
};

//�忧����
class ChongCoffee : public Chong{
public:
	virtual void func(){
		cout << "��ˮ" << endl;
		cout << "���ݿ���" << endl;
		cout << "���뱭��" << endl;
		cout << "���Ǻ�ţ��" << endl;
		cout << "�����Ѿ����ݺã�" << endl;
	}
};

//�����
class ChongTea : public Chong{
public:
	virtual void func(){
		cout << "��ˮ" << endl;
		cout << "���ݲ�Ҷ" << endl;
		cout << "���뱭��" << endl;
		cout << "������" << endl;
		cout << "���Ѿ����ݺã�" << endl;
	}
};

void text(){
	int  a;		//��ȡ�û�ѡ��

	cout << "��ѡ����Ҫ�͵����ϣ�" << endl;
	cout << "      1������       " << endl;
	cout << "      2����         " << endl;
	cin >> a;

	Chong *s = new ChongCoffee;		//����
	Chong *c = new ChongTea;		//��

	switch(a){
	case 1:
		s->func();
		delete s;
		s = NULL;
		 break;
	case 2:
		c->func();
		delete c;
		c = NULL;
		 break;	
	default:
		cout << "�ò�Ʒ����û�У�" << endl;
		break;	
	}
}

int main(){
	text();

	system("pause");
	return 0;
}