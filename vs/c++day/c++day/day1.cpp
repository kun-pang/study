/*2023��7��12*/
/*���� ����  �ؼ��� ��ʶ���������� ��������*/

/*���� �������������������� ������ = ֵ*/
/*�ؼ��� ��������Ϊ��������Ϊ����*/
/*��ʶ����������  
*��ĸ�����֡��»���   
*����ʶ����ȡ�������ǹؼ����ؼ��֣� 
*����ʶ������һ���ַ���ֻ����ĸ���»���
*��ʶ��ִ�Сд
*������ʽҪ�淶������֪�� ͬ�л������±�ʶ��˼��
*/
/*�������� 
*����	�����ͣ�short�� ���ͣ�int�� �����ͣ�long�� �������ͣ�long long��
*������(ʵ��)   �����ȣ�float�� ˫���ȣ�double��
*�ַ��� char 
*ת���ַ��� \n \\ \t .....
*�ַ�����  string char
*�������� bool
*
*/

#include <iostream>			//����c++�ı�׼��
#include <string>

using namespace std;
/* 
*Ϊ������c++��׼��������ռ䣬
*Լ�����׵�ȡ��һ������std���֣�
*�Է����ȡ��׼������ı����������ȡ�
*/

#define day 8				//�곣�� ȫ�������ϵĳ��������ɱ������

int main1(){
	
	//day = 1;	//���� �޷���ֵ
	const int month = 2;	//const ���εı��� Ҳ�ǳ��� �ֲ�����
	/*month = 9��//���� �޷�����*/
	int year = 2023;

	cout << "������" << year << "��" <<
		month << "��" << day << "��" << endl;
	/*cout ��ӡ�ַ�   << ���Ʋ����� �������ݵĲ���   endl ����*/
	cout << endl;

	float f1 = 3.14f;		//��f��ʾһ�µ����ȣ�����Ϊ˫����
	float f2 = 2e2;			//2 * 10^2
	float f3 = 3e-2;		//3 * 0.1^2
	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl;
	cout << "f3 = " << f3 << endl;
	//cout�����ʾ6λС��
	cout << endl;
	
	cout << "int ռ�ÿռ�Ϊ" << sizeof(month) << "�ֽ�" << endl; 
	cout << "int ռ�ÿռ�Ϊ" << sizeof(int) << "�ֽ�" << endl;  
	/*sizeof�ؼ��� �����ַ�ռ�õĿռ�  sizeof����������/������*/
	cout << endl;

	char ch  =  'a';		//char��ֵʱ��ֻ���õ����ţ�������˫���ţ��ҵ���������ֻ��Ϊһ����ĸ �����ַ�
	char ch1 =	'A';
	cout << "ch = " << ch << endl;					//ch��ȡ��ʱa��ASCII��
	cout << "a��ASCII��Ϊ" << (int)ch << endl;	//(int)ch  ǿתΪ��ch�������� �Դ����鿴a��ASCII��
	cout << "A ��ASCII��Ϊ" << (int)ch1 << endl;
	char ch_shuzu[4] = "abc";		//������char������
	string str1 = "abc";	//string �ַ��� ��<string>ͷ�ļ���
	cout << "str1 = " << str1 << endl;
	cout << "ch_shuzu[4]= " << ch_shuzu << endl;
	cout << endl;

	cout << "aaa\n";								// \n ����
	cout << "\\" << endl;							// \\ ��ӡ��\��
	cout << "aaa \tdsadasdasd"<< endl;				// \t �Ʊ��  ��8���ո� ���ڵ���8���ַ����ں����8���������������ַ��ں���8���ո�����ʾ
	cout << "aa \tdsadasdasd"<< endl;
	cout << "aaaaaaaa\tdsadasdasd"<< endl;
	cout << "aaaaaaaaa\tdsadasdasd"<< endl;
	cout << endl;

	bool falg1 = true;								//������1  ֻҪ�Ƿ�0����������Ϊ��
	bool falg2 = false;								//������0
	cout << falg1 << endl;
	cout << falg2 << endl;
	cout << endl;

	int a,b;
	float c;
	cout << "����������a��ֵ��" << endl;
	cin >> a;										//��ȡ�����ϵ�ֵ
	cout << "a = " << a << endl;
	cout << "���b,c��ֵ��" << endl;
	cin >> b >> c;										
	cout << "b = " << b << ";c = " << c << endl;
	cout << endl;

	system("pause");		//��ȡ�س�  ��������һ���ж���С��Ļ��ʾ��

	return 0;
}