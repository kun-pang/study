/*2023��7��16*/
/*�������̽ṹ  */


/*����ṹ
	Ƕ�׽ṹ		
	��ת���	break���  �˳�ѭ��  ʹ�ó�����switch��䡢ѭ����䡢Ƕ�����
				continue	��������ѭ��δִ�е���䣬����ִ����һ��ѭ��
				goto		��������ת  ��goto ��ǡ� ����Ǵ��ڣ�ִ��goto����
							ֱ����ת����������  ���Լ�����׵Ĺ涨����д
*/

#include <iostream>

using namespace std;

int main5(){
	//��ӡ������ͼ
	//��ȡ��ӡ����
	int i,j;
	int n;	//����
	cout << "�������ӡ��������������" << endl;
	cin >> n;

	for(j = 1; j < (n + 1); j++){
		int u;	//�洢�ո���
		int k;	//ȥ����
		int o;	//��¼ÿ���ӡ���ǺŸ���
		u = (n + 1) / 2 - j;

		//��ӡ�ϰ��
		if(j <= (n + 1) / 2){
			o = 2 * j - 1;
			for(i = 1; i <= u; i++){
				cout << " ";
			}
			for(i = 1; i <= o;i++){
				cout << "*";
			}
			cout << endl;
		}else{		//��ӡ�°��
			k = -u;
			o = 2 * ((n + 1) - j) - 1;
			for(i = 1; i <= k;i++){
				cout << " ";
			}
			for(i = 1; i <= o;i++){
				cout << "*" ;
			}
			cout << endl;
		}
	}
 /*  *
    ***
   *****
  *******
   *****
    ***
     * */
	cout << endl;

	//continue  �����˳�ѭ��
	//���0-100ż��
	for(i = 0; i <= 100 ; i++){
		if(i % 2 != 0){
			continue;		//���˳�ѭ��
		}
		cout << i << endl;
		if(i == 50){
			break;			//�˳�ѭ��
		}
	}
	cout << endl;

	//goto���
	cout << "1" << endl;
	cout << "2" << endl;
	 
	goto S0;

	cout << "3" << endl;

	S0:				//��ð��ȷ�ϱ��
	cout << "4" << endl;
	cout << "5" << endl;
	cout << endl;

	//����

	system("pause");

	return 0;
}