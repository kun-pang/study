/*2023��7��15*/
/*�������̽ṹ */


/*����ṹ
	ѡ��ṹ	if��䡢��Ŀ����������ʽ1�����ʽ2�����ʽ3����switch���
	Ƕ�׽ṹ	
	ѭ���ṹ	while��䡢do-while��䡢for���
*/

#include <iostream>

using namespace std;

int main4(){
	//do-while ���  ��ִ��ѭ����䣬���ж�
	//����Ļ���0-9������

	int num = 0;

	while(num){
		cout << num << endl;
		num++;
	}				//����0��Ϊ��
	/*do{
		cout << num << endl;
		num++;
	}while( num );  �Ӽ��Ժ���1������*/
	cout << endl;
	do{
		cout << num << endl;
		num++;
	}while( num < 10);
	cout << endl;

	//forѭ��  forѭ���м��������Է��������ط���д
	//��ӡ����0-9
	for(int i = 0; i < 10; i++){
		cout << i << endl;
	}
	cout << endl;

	system("pause");

	return 0;
}