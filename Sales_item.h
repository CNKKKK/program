#include<iostream>
#include<string>
using namespace std;
class Sales_item
{
public:
	string read_book_name(string n);
	void book_number(int n,double p);
	double output();
	Sales_item():number(0),price(0.0)
	{read_book_name("123");
	book_number(123,123);
	output();
	}
private:
	string name;
	int number;
	double price;
};