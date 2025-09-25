#include <iostream>
#include <string>
#define MAXSIZE 1000
using namespace std;
struct person {
	string name;
	int age;
	int sex;
	long tlephon;
	string addres;
};
struct addresbooks {
	person personarray[MAXSIZE];
	int size;                          //通讯录当前人员个数 
};
void showmenu() {
	cout << "******************" << endl;
	cout << "***" << 1 << ".添加联系人" << "***" << endl;
	cout << "***" << 2 << ".显示联系人" << "***" << endl;
	cout << "***" << 3 << ".删除联系人" << "***" << endl;
	cout << "***" << 4 << ".查找联系人" << "***" << endl;
	cout << "***" << 5 << ".修改联系人" << "***" << endl;
	cout << "***" << 6 << ".清空联系人" << "***" << endl;
	cout << "***" << 0 << ".退出通讯录" << "***" << endl;
	cout << "******************" << endl;
}
void addperson(addresbooks* abs) {
	if (abs->size == 1000) {
		cout << "人员已满" << endl;
	}
	else {
		cout << "请输入姓名：" << endl;
		string name;
		cin >> name;
		abs->personarray[abs->size].name = name;


		cout << "请输入年龄：" << endl;
		int age;
		cin >> age;
		abs->personarray[abs->size].age = age;


		cout << "请输入性别：" << endl;
		cout << "1-----男" << endl;
		cout << "2-----女" << endl;
		while (1) {
			int n;
			cin >> n;
			if (n == 1 || n == 2) {
				abs->personarray[abs->size].sex = n;
				break;
			}
			else {
				cout << "输入有误，重新输入" << endl;
			}
		}

		cout << "请输入手机号：" << endl;
		long tlephon;
		cin >> tlephon;
		abs->personarray[abs->size].tlephon = tlephon;


		cout << "请输入家庭住址：" << endl;
		string addres;
		cin >> addres;
		abs->personarray[abs->size].addres = addres;
		abs->size++;
	}
	cout << "添加成功" << endl;
}

//显示联系人函数
void showperson(addresbooks* abs) {
	if (abs->size == 0)
	{
		cout << "联系人为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size + 1; i++)
		{
			cout << "姓名:" << abs->personarray[i].name << "    ";
			cout << "年龄：" << abs->personarray[i].age << "    ";
			cout << "性别：" << abs->personarray[i].sex << "    ";
			cout << "手机号：" << abs->personarray[i].tlephon << "    ";
			cout << "家庭住址：" << abs->personarray[i].addres << "    ";
			cout << "\n";
		}
	}
}


//删除联系人函数
void deleteperson(addresbooks* abs) {
	string name;
	cout << "请输入被删除的联系人的名字：" << endl;
	cin >> name;
	for (int i = 0; i < abs->size + 1; i++)
	{
		if (abs->personarray[i].name == name)
		{
			cout << "该联系人在通讯录的位置为：" << i + 1 << endl;
			abs->personarray[i] = abs->personarray[i + 1];
			abs->size--;
			cout << "删除成功" << endl;
			break;
		}
		else
		{
			cout << "该联系人不存在" << endl;
		}
	}
}

//查找联系人函数
void foudperson(addresbooks* abs) {
	string name;
	std::cout << "请输入被查找的联系人的名字：" << endl;
	cin >> name;
	for (int i = 0; i < abs->size + 1; i++)
	{
		if (abs->personarray[i].name == name)
		{
			cout << "姓名" << abs->personarray[i].name << "    ";
			cout << "年龄：" << abs->personarray[i].age << "    ";
			cout << "性别：" << abs->personarray[i].sex << "    ";
			cout << "手机号：" << abs->personarray[i].tlephon << "    ";
			cout << "家庭住址：" << abs->personarray[i].addres << "    ";
			break;
		}
		else {
			cout << "该联系人不存在" << endl;
		 }
	}
}
	//修改联系人函数
void modifyperson(addresbooks* abs) {
	string name;
	cout << "请输入被修改的联系人的名字：" << endl;
	cin >> name;
	for (int i = 0; i < abs->size + 1; i++)
	{
		if (abs->personarray[i].name == name)
		{
			cout << "请输入姓名：" << endl;
			string name;
			cin >> name;
			abs->personarray[abs->size].name = name;


			cout << "请输入年龄：" << endl;
			int age;
			cin >> age;
			abs->personarray[abs->size].age = age;


			cout << "请输入性别：" << endl;
			cout << "1-----男" << endl;
			cout << "2-----女" << endl;
			while (1) {
				int n;
				cin >> n;
				if (n == 1 || n == 2) {
					abs->personarray[abs->size].sex = n;
					break;
					cout << "修该成功！" << endl;
					break;
				}
				else
				{
					cout << "该联系人不存在" << endl;
				}
			}
		}
	}
}
//清空联系人函数
void emptyperson(addresbooks* abs)
{
	abs->size = 0;
	cout << "联系人已清空" << endl;
}
int main(void) {
	showmenu();
	int select = 0;
	addresbooks abs;          //创建通讯录结构体变量 
	abs.size = 0;               //初始化当前通讯录人数 
	person personarray[MAXSIZE];
	while (cin >> select) {

		switch (select) {
		case 1:
			addperson(&abs);
			break;
		case 2:
			showperson(&abs);
			break;
		case 3:
			deleteperson(&abs);
			break;
		case 4:
			foudperson(&abs);
			break;
		case 5:
			modifyperson(&abs);
			break;
		case 6:
			emptyperson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用：" << endl;   //ps:有疑问，为啥要返回零 
			break;
			return 0;
		}
	}
	return 0;
}