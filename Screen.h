#include<iostream>
#include<string>
using namespace std;
class Screen
{public:
typedef string ::size_type index;
inline char get(index ht,index wd) const;
index get_cursor()const;
Screen& move (index r,index c);
Screen& set(char c);
Screen& dispaly(ostream &os)
{do_display(os);
return *this;}
const Screen& display(ostream &os)const
{do_display(os);
return *this;}
Screen():contents("123"),cursor(123),height(123),width(123){}
private:
	string contents;
	index cursor;
	index height,width;
void do_display(ostream &os) const
{os<<contents;}
};