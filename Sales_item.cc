#include<iostream>
#include<string>
#include"Sales_item.h"
using namespace std;
string Sales_item::read_book_name(string  n)
{
cout<<"请输入书本的名字。";
	cin>>n;
	name=n;
	return n;
}
void Sales_item::book_number(int n,double p)
	{
		cout<<"请输入书本的数量。";
		cin>>n;
		number=n;
		cout<<"请输入书本的单价。";
		cin>>p;
		price=p;

}
double Sales_item::output(){
	cout<<name<<number<<"*"<<price<<static_cast<double>(number)*price;
	return 0;
}