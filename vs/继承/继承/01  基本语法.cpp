/*2023-8-6*/

//�̳л���֪ʶ

//����̳�һ���ָ�������Ի�����Ϊ

//�̳е����ã������ظ�����

//�̳е��﷨��class ���� : �̳з�ʽ ����{}��

//����  Ҳ�� ������
//����  Ҳ�� ����

#include <iostream>

using namespace std;

//����
class Father{
public:
	void fangZi(){
		cout << "�̳еķ���" << endl;
	}

	void canZhuo(){
		cout << "�̳еĲ���" << endl;
	}
	void fengShan(){
		cout << "�̳еķ���" << endl;
	}

};

class Son : public Father{
public:
	void shouJi(){
		cout << "˽�е��ֻ�" << endl;
	}
};

void text(){
	Son s;
	s.canZhuo();
	s.fangZi();
	s.fengShan();
	s.shouJi();


}

int main(){
	text();

	system("pause");
	return 0;
}
