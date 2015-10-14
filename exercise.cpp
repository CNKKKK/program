#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int p13356()

{char *cp="hello world";
while(cp&&*cp)
	{cout<<cp<<"  "<<*cp<<endl;
*cp++;}
return 0;
}

int p116423()
{const char ca[]={'h','e','l','l','o'};
const char cb[]={'h','e','l','l','o','\0'};//以null作为结束的标志
const char *cpp=cb;
const char *cp=ca;
while(*cpp){
	cout<<*cp<<"  "<<*cpp<<endl;
	++cpp;++cp;
}return 0;}

int main()
{unsigned char bits=0003;
unsigned char bits1=~bits;
cout<<"  "<<bits<<endl;
return 0;}