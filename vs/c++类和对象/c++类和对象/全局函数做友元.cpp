//2023-8-4


//���壺��һ����������һ���� ������һ�����е�˽�г�Ա

//�ؼ���friend

//����ʵ�ַ�ʽ
	//ȫ�ֺ�������Ԫ
	//������Ԫ
	//��Ա��������Ԫ




#include <iostream>
#include <string>

using namespace std;

//����������
class Building;
//�û���2��
class GoodGay2 {
public:
	GoodGay2();

	void textq1();
	void textq2();


public:
	Building* building;
};

//������
class Building{

	////ȫ�ֺ�������Ԫ
	////������Ԫ(��������)
	//friend void goodGay(Building &b);
	////������Ԫ
	//friend class GoodGay;
	//��Ա��������Ԫ
	//ע��friend�������ࣨ�ҵĺ����ѣ� �����ڱ��ࣨ�ң�ǰ�� �����к����漰�����ࣨ�ң���˽�г�Ա����ʱ�����������ⶨ��
	friend void GoodGay2::textq1();

public:
	Building(){
		m_SittingRoom = "����" ;
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;	//����
private:
	string m_BedRoom;		//����
};

////�û�����
//class GoodGay{
//public:
//	GoodGay();
//
//	//���ʺ��ѽ���
//	void visit(){
//		cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
//
//		cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
//	}
//	~GoodGay();
//
//public:
//	Building *building;
//};
//
////���ⶨ�庯��
//GoodGay::GoodGay(){
//	building = new Building;
//}
//
//
//
//
//
////ȫ�ֺ���
////�û��Ѻ���
//void goodGay(Building &b){
//
//	cout << "�û������ڷ��ʣ�" << b.m_SittingRoom << endl;
//
//	//���û�жԱ�����������Ԫ��������ô�����Ե���˽�г�Ա
//	cout << "�û������ڷ��ʣ�" << b.m_BedRoom << "Ŷ~��~��~" << endl;
//}

GoodGay2::GoodGay2(){
		building = new Building;
}


void GoodGay2::textq1() {
	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGay2::textq2() {
	cout << "���ڷ��ʣ�" << building->m_SittingRoom << endl;
}



//void text(){
//	Building b;
//	goodGay(b);
//}
//
//void text1(){
//	GoodGay g;
//	g.visit();
//	
//}

void text2(){
	GoodGay2 g;
	g.textq1();
	g.textq2();
	
}


int main(){
	/*text();*/
	/*text1();*/
	text2();

	system("pause");
	return 0;
}