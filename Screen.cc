#include<iostream>
#include<string>
#include"Screen.h"
using namespace std;
typedef string ::size_type index;
inline char Screen:: get(index ht,index wd) const
{
	index row=ht*width;
	return contents[row+wd];
}
inline Screen::index Screen::get_cursor()const
{
	return cursor;}
Screen& Screen::move (index r,index c)
{index row =r*width;
cursor =row+c;
return *this;}
Screen& Screen::set(char c)
{
	contents[cursor]=c;
	return *this;}
