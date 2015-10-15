#include<iostream>
#include<cctype>
#include<string>
#include<bitset>
using namespace std;
int get_value()
{
	int i;
	cin>>i;
	return i;}//input value
int max_of_three()
{int i=get_value();
int j=get_value();
int k=get_value();
	int max=i;
if(j>max)
	max=j;
if(k>max)
	max=k;
cout<<max<<endl;
return max;
}
int min_of_two()
{int i=get_value();
int j=get_value();
int min=(i<=j?i:j);
cout<<min<<endl;
return min;
}
int p133_56()

{char *cp="hello world";
while(cp&&*cp)
	{cout<<cp<<"  "<<*cp<<endl;
*cp++;}
return 0;
}

int p116_423()
{const char ca[]={'h','e','l','l','o'};
const char cb[]={'h','e','l','l','o','\0'};//以null作为结束的标志
const char *cpp=cb;
const char *cp=ca;
while(*cpp){
	cout<<*cp<<"  "<<*cpp<<endl;
	++cpp;++cp;
}return 0;}

int p134()
{bitset<32> bit(0227);
bitset<32> bits1=~bit;//use bitset input with bit
cout<<bit<<"  "<<bits1<<endl;
return 0;}

int p135_531()
{bitset<30>bitset_quiz1;
unsigned long int_quiz1=0;
bitset_quiz1.set (27);
cout<<bitset_quiz1<<endl;
int_quiz1|=1UL<<27;
cout<<int_quiz1<<endl;
bitset_quiz1.reset(27);
cout<<bitset_quiz1<<endl;
int_quiz1&=~(1UL<<27);
bool status,status1;
status=bitset_quiz1[27];
cout<<status<<"  "<<endl;
return 0;
}
int p139()
{int i;
while((i=get_value())!=42)
{;
cout<<i<<"ok"<<endl;
}
return 0;}
int p148_527()//add an 's' to the end,if the word doesn't already end in 's'
{string  s="words";
string p1=s+(s[s.size ()-1]=='s'?"":"s");
cout<<p1<<endl;
return 0;
}
int main()
{int i(1024);
int *pi=new int (1024);
string s(10,'9');
string *ps=new string (10,'9');}