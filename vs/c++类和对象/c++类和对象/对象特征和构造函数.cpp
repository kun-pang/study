/*2023—8—1*/
/* 类和对象 */


/* 对象的特征
对象的初始化和清理
	构造函数和析构函数--编译器自动调用（编译器会自动生成一个空的构造函数）
		构造函数--主要作用在于创建对象时为对象的成员属性赋值，
				  构造函数由编译器自动调用，无须手动调用。
			语法： 类名（）{}
			规定：1.构造函数，没有返回值也不写void
				  2.函数名称与类名相同
				  3.构造函数可以有参数，因此可以发生重载
				  4.程序在调用对象时候会自动调用构造，无须手动调用，而且只会调用一次
		析构函数--主要作用在于对象销毁前系统自动调用，执行一些清理工作。
			语法：~类名（）{}
			规定：1.析构函数，没有返回值也不写void
				  2.函数名称与类名相同，在类名前面加一个~
				  3.析构函数不可以有参数，因此不可以发生重载
				  4.程序在对象销毁前会自动调用析构，无须手动调用，而且一个对象只会调用一次

构造函数的分类和调用
	分类：
		按参数分类：有参构造函数和无参构造函数
		按类型分类：普通构造函数和拷贝构造函数
	调用方式
		括号法、显示法、隐式转换法

				  
*/


#include <iostream>

using namespace std;



//类  结构体
class Person{
public:
	int getAge(){
		return age;
	}

	//普通构造函数
	//调用对象（类的实例化）的时候会调用构造函数，只调用一次
	//无参构造函数、也叫默认构造函数
	Person(){
		cout << "Person的无参构造函数!" << endl;
	}

	//有参构造函数
	Person(int a){
		age = a;
		cout << "Person的有参构造函数!" << endl;
	}
	
	
	//拷贝构造函数（将类的所有属性复制过来，克隆）
	Person(const Person &p){	//传入的是常量引用  保证不修改外面的值--const &  拷贝--传入本类的属性
		age = p.age;
		cout << "Person的拷贝构造函数!" << endl;
	}

	//析构函数
	//对象销毁前会调用析构函数，一个对象只调用一次
	~Person(){
		cout << "Person的析构函数!" << endl;
		/*system("pause");  在正式运行程序时，不建议在析构函数中使用类似的暂停函数。*/
	}

private:
	int age;
};


//声明函数
void text01();
void qp();


int main13(){
	//构造函数和析构函数
	/*Person j;*/
	text01();




	system("pause");
	return 0;
}


//函数
//调用
void text01(){
	//括号法
	//Person p1;		//调用默认构造函数   存在栈区 函数调用完成后释放对象	
	//Person p2(1);	//调用有参构造函数
	//Person p3(p2);	//调用拷贝构造函数

	/*cout << "p2的年龄：" << p2.getAge() << endl;
	cout << "p3的年龄：" << p3.getAge() << endl;*/

	//注意事项1
	//调用默认构造函数的时候，不要加（）
	//如下面一行所示，编译器会认为这是一个函数声明（注：函数体里面可以有函数的声明），不会认为这是在创建对象
	/*Person p1();*/


	//显示法
	//Person p1;					//调用无参构造
	//Person p2 = Person(10);		//调用有参构造
	//Person p3 = Person(p2);		//调用拷贝构造

	//cout << "aaaa" << endl;
	//Person(11);			//匿名对象 特点：当前行执行结束后，就会被系统回收掉
	////注意析构函数出现的区别
	//cout << "aaaa" << endl;

	//注意事项2
	//不要利用拷贝函数 初始化匿名对象  编译器会认为这是Person (p2) <=> Person p2;  对象的创建
	/*Person (p2);  错误 */


	//隐式转换法
	Person p4 = 10;			//系统会转换成 Person p4 = Person(10);	调用有参构造
	Person p5 = p4;			//调用拷贝构造
}

//清屏
void qp(){
	system("cls");
	system("pause");
}