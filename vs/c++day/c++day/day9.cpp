/*2023��7��25*/
/*�ṹ��  */

/*�ṹ��
	�ṹ�����--�Զ�����������
	�ṹ���﷨--struct �ṹ���� { �ṹ���Ա�б� };
	�ṹ�崴�������ķ�ʽ
		1.struct �ṹ���� ������
		2.struct �ṹ���� = { ��Ա1ֵ����Ա2ֵ������������}
		3.�����ṹ��ʱ˳��Ѵ�������

	�ṹ������
		�﷨--struct �ṹ���� ������[Ԫ�ظ���] = {{}��{}��{}������������}��

	�ṹ��ָ��
		����"->"���ʽṹ���е�����

	�ṹ��Ƕ��
	
	�ṹ������������

	�ṹ��const��ʹ��
*/

#include <iostream>
#include <string>

using namespace std;

enum Gender{		//�Ա�
	��,Ů
};

//�ṹ��--ѧ����
struct Student{
	//ѧ���������͵�����(��Ա�б�)
	string name;	//����
	int age;		//����
	int id;			//ѧ��
	Gender gdr;		//�Ա�
}s3;
//3.�����ṹ��ʱ˳��Ѵ�������

struct Teacher{
	string name;	//����
	int age;		//����
	int id;			//����
	Student stu;	//����ѧ��
};

//������ӡѧ����Ϣ�ĺ���
//ֵ���ݣ����ı�ʵ�Σ�  ���ڴ����ݵ����ݱȽϳ��ڴ�ռ�
void Students1( Student s);
//��ַ����(�ı�ʵ��)	ֻ�ı��β� �ó���ָ�루ֻ����д��
void Students2( Student * s);
void Students3(const Student * s);

int main9(){
	//��������ѧ������
	//��������ʱ��struct�ؼ��ο���ʡ��
	struct Student s1;

	//2.struct �ṹ���� = { ��Ա1ֵ����Ա2ֵ������������}
	struct Student s2 = {"����",18,02};

	//1.struct �ṹ���� ������
	//��ѧ����ֵ  �ṹ�����ͨ����.������
	s1.name = "����";
	s1.age = 19;
	s1.id = 01;

	s3.name = "����";
	s3.age = 20;
	s3.id = 03;

	cout << "01." << s1.name << " " << s1.age << endl;
	cout << "02." << s2.name << " " << s2.age << endl;
	cout << "03." << s3.name << " " << s3.age << endl;
	cout << endl;


	//�ṹ������
	Student stuArr[4] = {
		{"����",18,01},
		{"����",19,02},
		{"����",18,01},
		{"����",20,03}
	};

	for(int i = 0; i < 4; i++){
		cout << "����ǰ��" << stuArr[i].name << " "  
			<< stuArr[i].age << " " << stuArr[i].id <<endl;
	}

	//���ṹ�����������Ԫ�ظ�ֵ
	stuArr[2].name = "����";
	stuArr[2].age = 21;
	stuArr[2].id = 04;

	for(int i = 0; i < 4; i++){
		cout << "���ĺ�" << stuArr[i].name << " "  
			<< stuArr[i].age << " " << stuArr[i].id <<endl;
	}
	cout << endl;

	//�ṹ��ָ��
	Student *p = &s1;
	//���ʽṹ��Ԫ��
	cout << p->name << " " << p->age << " " << p->id << endl;

	//Ƕ�׽ṹ��
	Teacher t;
	t.name = "����ʦ";
	t.age = 8;
	t.id = 01;
	/*t.stu = {"Сһ",20,06,"��"};  ������������ֵ*/
	t.stu.name = "Сһ";
	t.stu.age = 20;
	t.stu.id = 06;
	t.stu.gdr = ��;
	cout << t.name << " " << t.age << " " << t.id 
		<< " S����ѧ���� " << t.stu.name << " " << t.stu.age
		<< " " << t.stu.id << " " << t.stu.gdr << endl;
	cout << endl;

	//�ṹ������������
	Students1(s1);
	cout << " id�仯����" << s1.id << endl;
	Students2(&s2);
	cout << " id�仯����" << s2.id << endl;
	cout << endl;

	//�ṹ��const��ʹ��
	Students3(&s3);

	system("pause");
	return 0;
}

void Students1( Student s){
	s.id = 00;
	cout << s.name << "�����ˣ�" << endl;
}

void Students2( Student * s){
	s->id = 100;
	cout << s->name << "ʧ���ˣ�" << endl;
}
void Students3(const Student * s){
	//s->id = 100;  ���� ���볣��ָ��ֻ����д
	cout << s->name << "ʧ���ˣ�" << endl;
}