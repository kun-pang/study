/*2023-8-8*/

//�������ʹ�������

//��̬��ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������

//�����ʽ���������е�����������Ϊ���������ߴ�������

//�������ʹ����������ԣ�
//	���Խ������ָ���ͷ��������
//	����Ҫ�о���ĺ���ʵ��

//�������ʹ�����������
//	����Ǵ����������������ڳ����࣬�޷�ʵ��������

//���������﷨
//virtual ~ ��������{}

//�����������﷨��
//��������	virtual ~ �������� = 0��
//����ʵ��	�������� ~��������{}
	

#include <iostream>
#include <string>

using namespace std;

//������ ������
class Animal{
public:
	Animal(){
		cout << "Animal�Ĺ��캯��!" << endl;
	}

	virtual void speak() = 0;

	//������
	/*virtual ~Animal(){
		cout << "Animal����������!" << endl;
	}*/

	//��������
	//����Ǵ����������������ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;
};

Animal::~Animal(){
	cout << "Animal����������!" << endl;
}

class Cat : public Animal{
public:
	Cat(string name){
		cout << "Cat�Ĺ��캯��!" << endl;
		m_Name = new string(name);
	}

	virtual void speak(){
		cout  << *m_Name << "Сè�ڽУ�" << endl;
	}

	~Cat(){
		if(m_Name != NULL){
			cout << "Cat����������!" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	string *m_Name;
};

void text(){
	//�����Animaд���������ߴ������� ��ôCat�еĶ����޷��ͷ�
	Animal *a = new Cat("Tom");
	a->speak();
	delete a;

	/*Animal &a = Cat("Tom");*/
}

int main(){
	text();

	system("pause");
	return 0;
}