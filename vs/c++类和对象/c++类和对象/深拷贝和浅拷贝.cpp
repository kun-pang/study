/*2023��8��2*/

//�����ǳ����

//ǳ�������򵥵ĸ�ֵ��������		ǳ����ȱ�㣺���ڶ����ڴ�ռ���ظ��ͷ�

//������ڶ����������룬���п������� 

#include <iostream>

using namespace std;

//����
class Person{
public:
	Person(){
		cout << "����Ĭ�Ϲ��캯����" << endl;
	}

	Person(int  y_age, int y_heignt){
		age = y_age;
		heignt = new int(y_heignt);			//ͨ��new�ķ�ʽ�ڶ����������ݣ�new���ص���ָ��
		cout << "�����вι��캯����" << endl;
	}
	
	//û������Ĵ��룬�������ᱨ����������û�б���û������ĺ��������붼��������
	//��⣺1����text11������������ľֲ�����p1��p2������ջ���������ͷ�ʱ�����ͷ�p2���ͷ�p1
	//		2��p1������age���ݣ�ϵͳ��ͨ��Ĭ�ϵĿ������캯��������ǳ������p2��ͬ��p1����heignt��ָ�룩ʱ����ͨ��new
	//�����ڶ���������p1.heignt��¼���Ƕ���y_heignt��ַ��ͨ��ϵͳ��Ĭ�Ͽ������캯����p2.heigntҲ�Ǵ�������
	//		3��p1��p2��text11����������������������������ͷţ�p2��ͨ����������������y_heignt�������ͷ��ˣ�Ȼ��p1Ҳ���������������
	//����y_heignt���ж����ͷţ�ָ�����ң���ͬһƬ�ڴ��ͷ����Σ������Գ��ִ���
	Person(const Person &p){
		cout << "���ÿ������캯����" << endl;
		age = p.age;
		//heignt = p.heignt;		������Ĭ�ϵ�ʵ�ִ���
		//���
		/*int a = *p.heignt;*/
		heignt = new int[*p.heignt];		//�������¿���һ������ڴ棬������ſ�������
	
	}



	~Person(){
		//���������������Զ��������ݽ����ͷ�
		if(heignt != NULL){
			delete heignt;		//�ͷ�heignt�ڶ����Ŀռ�
			heignt = NULL;		//��ֹҰָ��ĳ���
		}
		cout << "�����������캯����" << endl;
	}
	
	

	int age;
	int * heignt;
};


void text11(){
	Person p1(18,171);

	cout << "p1�����䣺" << p1.age << " ��ߣ�" << *p1.heignt << endl;

	Person p2(p1);

	cout << "p2�����䣺" << p2.age << " ��ߣ�" << *p2.heignt << endl;
}

int main(){
	text11();

	system("pause");
	return 0;
}

//����Դ����Ӱ����Խ��