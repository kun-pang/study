/*2023-8-6*/

//���μ̳У���ʯ�̳У�

//���壺����������̳�ͬһ������
//����ĳ����̳���������������

/*�������鹹��
1����̳��˶�������ݣ���Ҳ�̳��˶������ݣ����������գ��̳�������յ�����
��������ʹ�����ݵ�ʱ�򣬻���������ԡ�
2��������̳����������Զ�������ݣ���ʵ����ֻ��Ҫһ�ݾ͹���

*/

#include <iostream>

using namespace std;

//������
class Animal{
public:
	int m_Age;
};

//������̳� ������μ̳�����
//��̳�  class ���� �� virtual �̳з�ʽ ����{}��
//
//Animal ��Ϊ�����
//�������� ������Ա������ʾ�� ���в鿴�ײ�
//����  ���м̳� ������
class Yang : virtual public Animal{};

//����  ���м̳� ������
class Tuo : virtual public Animal{};

//������ ���м̳� ���� �� ����
class YangTuo : public Yang, public Tuo{};

void text(){
	YangTuo yt;
	Yang y;

	//yt.m_Age = 18;  ���ִ��� ���������Զ������m_Age

	yt.Yang::m_Age = 18;
	yt.Tuo::m_Age = 20;
	//yt.Yang::m_Age = 18;
	
	//������������
	//������virtual�Ժ� ������̳��������ָ�루Ҳ�������Ϊyt.Tuo::m_Ag��yt.Yang::m_Age �����ˣ�
	cout << "yt.Yang::m_Age = " << yt.Yang::m_Age << endl;
	cout << "yt.Tuo::m_Age =" << yt.Tuo::m_Age << endl;
	cout << "yt.m_Age =" << yt.m_Age << endl;

	y.m_Age = 1;
	cout << "y.m_Age =" << y.m_Age << endl;
	cout << "yt.m_Age =" << yt.m_Age << endl;

}

int main(){
	
	text();

	system("pause");
	return 0;
}