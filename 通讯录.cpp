#include <iostream>
#include <string>
#define MAXSIZE 1000
using namespace std;
struct person{
	string name;
	int age;
	int sex;
	long tlephon;
	string addres;
};
struct addresbooks{
	person personarray[MAXSIZE];
	int size;                          //ͨѶ¼��ǰ��Ա���� 
};
void showmenu(){
	cout<<"******************"<<endl;
	cout<<"***"<<1<<".�����ϵ��"<<"***"<<endl; 
	cout<<"***"<<2<<".��ʾ��ϵ��"<<"***"<<endl; 
	cout<<"***"<<3<<".ɾ����ϵ��"<<"***"<<endl; 
	cout<<"***"<<4<<".������ϵ��"<<"***"<<endl; 
	cout<<"***"<<5<<".�޸���ϵ��"<<"***"<<endl; 
	cout<<"***"<<6<<".�����ϵ��"<<"***"<<endl; 
	cout<<"***"<<0<<".�˳�ͨѶ¼"<<"***"<<endl;
	cout<<"******************"<<endl; 
}
void addperson(addresbooks *abs){
	if(abs->size==1000){
		cout<<"��Ա����"<<endl ;
	}
	else{
	cout<<"������������"<<endl;
	string name;
	cin>>name;
	abs->personarray[abs->size].name=name;
	  
	  
	cout<<"���������䣺"<<endl;
	int age;
	cin>>age;
	abs->personarray[abs->size].age=age;
	 
	 
	cout<<"�������Ա�"<<endl;
	cout<<"1-----��" <<endl; 
	cout<<"2-----Ů" <<endl;
	while(1){
		int n;
		cin>>n;
		if(n==1||n==2){
			abs->personarray[abs->size].sex=n;
		break;}
		else {
			cout<<"����������������" <<endl; 
		}		
}
	
	cout<<"�������ֻ��ţ�"<<endl;
	long tlephon;
	cin>>tlephon;
	abs->personarray[abs->size].tlephon=tlephon;
	
	
	cout<<"�������ͥסַ��"<<endl;
	string addres;
	cin>>addres;
	abs->personarray[abs->size].addres=addres;
	abs->size++;
}
}
	
	//��ʾ��ϵ�˺���
void showperson(addresbooks*abs){
	if(abs->size==0)
	{
		cout<<"��ϵ��Ϊ��"<<endl;
	}
	else
	{   
	    for(int i=0;i<abs->size+1;i++)
	{
		cout<<"����"<<abs->personarray[i].name<<endl;
		cout<<"���䣺"<<abs->personarray[i].age<<endl;
		cout<<"�Ա�"<<abs->personarray[i].sex<<endl;
		cout<<"�ֻ��ţ�"<<abs->personarray[i].tlephon<<endl;
		cout<<"��ͥסַ��"<<abs->personarray[i].addres<<endl;
	}
    system('pause');
}
}
int main(void){
	showmenu();
	int select=0;
	cin>>select;
	addresbooks abs;          //����ͨѶ¼�ṹ����� 
	abs.size=0;               //��ʼ����ǰͨѶ¼���� 
	person personarray[MAXSIZE];
	switch(select){
		case 1:addperson(&abs);
		    break;
		case 2:showperson(&abs);
		    break; 
		case 3:
		    break;
		case 4:
		    break; 
		case 5:
	     	break; 
		case 6:
			break;  
		case 0:
		cout<<"��ӭ�´�ʹ�ã�"<<endl;   //ps:�����ʣ�ΪɶҪ������ 
		return 0;
			break; 
	}
	return 0;
} 
