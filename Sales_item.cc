#include<iostream>
#include<string>
#include"Sales_item.h"
using namespace std;
string Sales_item::read_book_name(string  n)
{
cout<<"�������鱾�����֡�";
	cin>>n;
	name=n;
	return n;
}
void Sales_item::book_number(int n,double p)
	{
		cout<<"�������鱾��������";
		cin>>n;
		number=n;
		cout<<"�������鱾�ĵ��ۡ�";
		cin>>p;
		price=p;

}
double Sales_item::output(){
	cout<<name<<number<<"*"<<price<<static_cast<double>(number)*price;
	return 0;
}