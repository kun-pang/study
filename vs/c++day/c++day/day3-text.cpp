/*2023��7��14*/
/* ������ */

#include <iostream>
#include <cstdlib>		//rand����������ͷ�ļ�
#include <ctime>		//time()��ͷ�ļ�

using namespace std;

//ϵͳ�ṩ0-100�����
//��Ҳ�����
//�´� ���ֹ�����߹�С���������
//�¶� ��ϲ���
int main3t(){
	double num1;		//ϵͳ�������
	double num2;		//��Ҳ²������
	int i = 0;			//���ڼ�¼�²����
	int head = 0;       //��¼��Χ��߽�
	int tail = 100;    //��¼��Χ�ұ߽�

	// �����������
	srand(time(NULL));

	//����0-100�����
	num1 = rand()%101;		//rand����%a  ����0~��a-1������������rand����%a+1 ����0+1~a-1+1�������
							//ע�⣺rand()�������ɵ��������α�������
							//ÿ�γ�������ʱ����ͬ�����ӻ�������ͬ����������С�
							//��ˣ�Ϊ�˻�ȡ���õ�����ԣ�ͨ����ʹ�ò�ͬ�����ӣ��������ʱ������ӡ�
	//��ȡ�����ֵ
	cout << "������0-100������һ�����֣�" << endl;
	cin >> num2;

	
	//�鿴��
	if(num2 == 101){
		cout << num1 << endl;
	}

	//break �����˳�ѭ��
	while(num2 != num1){
		if(num2 > num1){
			cout << "���µ����ִ�����ȷ��." << endl;
			cout << "������������" << head << "-" << num2 << "֮�������:" << endl;  
			tail = num2;
			cin >> num2;
			i++;
		}else{
			cout << "���µ�����С����ȷ��." << endl;
			cout << "������������" << num2 << "-" << tail << "֮�������:" << endl;
			head = num2;
			cin >> num2;
			i++;
		}
	}
	cout  << "���ڲ²�" << i << "���Ժ�ɹ��¶��ˣ�"  << endl;

	system("pause");

	return 0;
}