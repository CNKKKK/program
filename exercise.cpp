#include<iostream>
#include<cctype>
#include<string>
#include<cstring>
#include<bitset>
#include<vector>
#include<list>
#include<deque>
#include <stdarg.h>
#include<cmath>
#include<climits>
#include"Sales_item.h"
#include"Screen.h"
using std::vector;
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

int arrsum(const int *b, const int*e)
{
	int sum = 0;
	while (b!=e)
	{
		
		sum += *b;
		*b++;
	}
	cout <<sum<< endl;
	return sum;
}

int &get(int *arry,int index)
{return arry[index];}

int p133_56()

{char *cp="hello world";
while(cp&&*cp)
	{cout<<cp<<"  "<<*cp<<endl;
*cp++;}
return 0;
}
int p116_423()
{const char ca[]={'h','e','l','l','o'};
const char cb[]={'h','e','l','l','o','\0'};//��null��Ϊ�����ı�־
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
bool status;
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
int p151()//new and delete for space
{int i(1024);
int *pi=new int (1024);
string s(10,'9');
string *ps=new string (10,'9');
cout<<*pi<<"  "<<pi<<"  "<<*ps<<"   "<<ps<<endl;
delete pi;
delete ps;
cout<<pi<<"  "<<ps<<endl;
return 0;}
int p176_6_7()
{char ch;
int aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0;
while(cin>>ch){cout<<ch;
switch(ch){
case 'a':
case 'A':
	++aCnt;
	break;
case 'e':
case 'E':
	++eCnt;
	break;
case 'i':
case 'I':
	++iCnt;
	break;
case 'o':
case 'O':
	++oCnt;
	break;
}cout<<"aCnt="<<aCnt<<"eCnt="<<eCnt<<"iCnt="<<iCnt<<"oCnt="<<oCnt<<"uCnt="<<uCnt<<endl;
//ends:����ˢ�²�����space��flush������ˢ��
}
return 0;}
int daixiugai()
{
	string word1,word2;
vector<string>vec1;
vector<string>vec2;
cout<<"�����һ������ֵ";
while(cin>>word1){
	cout<<word1;
	vec1.push_back(word1);break;}
cout<<"����ڶ�������ֵ";
while(cin>>word1){
	vec2.push_back(word2);break;}
int sz=vec1.size()<=vec2.size ()?vec1.size():vec2.size ();
for(int i=0;i!=sz;i++)
	if(vec1==vec2)cout<<"shiqinazhui";
	else{
		cout<<"�̵Ĳ��ǳ���ǰ׺��";break;}
	return 0;
}
int P182_6_9()
{string rsp;
do
{cout<<"Please enter two values:";
int val1,val2;
cin>>val1>>val2;
cout<<"Sum of"<<val1<<"and"<<val2<<"="<<val1+val2<<"\n\n"<<"more?[yes][no]";
cin>>rsp;}
while(!rsp.empty()&&rsp[0]!='n');return 0;}
int p183_6_8()
{
	string val1,val2;do{
cout<<"shurudi1gezhi.";
cin>>val1;
cout<<"shurudi2gezhi.";
cin>>val2;
cout<<val1<<"  "<<val2<<endl;
const char *p1=&val1[0];
const char *p2=&val2[0];

	int i=strcmp(p1,p2);
	cout<<(i<0?p1:p2)<<"��С";
}while(val1[0]);
return 0;
}
int gcd(int v1,int v2)
{int tempor;
{while (v2)
 tempor=v2;
v2=v1%v2;
v1=tempor;}
return v1;
}
int	Get_MI(int a,int b)
{
	int exp=1;
	for(int i=0;i<b;i++)
exp*=a;
return exp;}
double abs1(double a)
{return(a>=0?a:-a);}
int exchang(int &a,int &b)//����ʵ�ֽ���
{int temp;
temp=b;
b=a;
a=temp;
return 0;
}

char &get_val(string &str,string::size_type ix)
{return str[ix];}

int ji(int n)
{if(n%2==0)
return true;
else
	return false;
}
int long_to_ma()
{
	int n;
	cout << "Enter n:";
	cin >> n;
	return (22 * n);
}
int Obtain_sizeof()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is" << sizeof n_llong << " bytes." << endl;
	cout << endl;
	cout << "Maximum values :" << endl;
	cout << "int :" << n_int << endl;
	cout << "short :" << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte=" << CHAR_BIT << endl;
	return 0;
}
int exceed(){
#define ZERO 0
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "Sam has " << sam << "dollars and Sue has" << sue ;
	cout << "dollars despoited." << endl << "Now";
	sam++; sue++;
	cout << "Sam has " << sam << "dollars and Sue has" << sue;
	cout << "dollars despoited.\nPoor Sam!" << endl ;
	sam = ZERO; sue = ZERO;
	cout << "Sam has " << sam << "dollars and Sue has" << sue;
	cout << "dollars despoited." << endl << "Now";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << "dollars and Sue has" << sue;
	cout << "dollars despoited." << endl << "Lucky Sue" << endl;
	return 0;
}
int hexoct(){
	int chest = 42;
	int	waist = 0x42;
	int insane = 042;
	cout << "Monsier cuts a striking figure!\n";
	cout << "chest=" << chest << "42 in decimal\n";
	cout << "waist =" << waist << "(0x42 in hex)\n";
	cout << "insane=" << insane << "(0x42 in octal)\n";

	return 0;
}
int hexoct2(){
	int chest = 42;
	int	waist = 42;
	int insane = 42;
	cout << "Monsier cuts a striking figure!\n";
	cout << "chest=" << chest << "(42 in decimal)\n";
	cout << hex;
	cout << "waist =" << waist << "(0x42 in hex)\n";
	cout << oct;
	cout << "insane=" << insane << "(0x42 in octal)\n";

	return 0;
}
int floatnum()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;
	cout << "tub= " << tub;
	cout << ",a million tubs=" << million*tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million*tub << endl;

	cout << "mint=" << mint << "',and a million mints=";
	cout << million*mint << endl;
	return 0;
}
int floatadd(){
	float a = 2.34E+22f;
	float b = a + 1.0f;
	cout << "a=" << a << endl;
	cout << "b-a=" << b - a << endl;
	return 0;
}
int divide (){
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division:9/5= " << 9 / 5 << endl;
	cout << "Floating point divison:9.5/5.0= ";
	cout << 9.0 / 5.0 << endl;
	cout << "Mixed divison:9.0/5= " << 9.0 / 5 << endl;
	cout << "double constants:le7/9.0= ";
	cout << 1e7 / 9.0 << endl;
	cout << "float constants:1e7f/9.0f= ";
	cout << 1e7f / 9.0f << endl;
	return 0;
}
int convert1(){
	int auks, bats, coots;
	auks = 19.99 + 11.99;
	bats = (int)19.99 + (int)11.99;
	coots = int(19.99) + int(11.99);
	cout << "auks= " << auks << " ,bats= " << bats;
	cout << ", coots= " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is";
	cout << int(ch) << endl;
	cout << " Yes, the code is ";
	cout << static_cast<int>(ch) << endl;
	return 0;
}
int exercise3_1()
{
	const int	k_factorFeetToInch = 12;	// 1Ӣ�� = 12Ӣ��
	int	inches;
	cout << "������ߣ�__Ӣ�磺";
	cin >> inches;
	cout << "Ҳ��" << inches / k_factorFeetToInch << "Ӣ����" << inches % k_factorFeetToInch << "Ӣ��";

	cout << endl;
	return (0);
}
int exercise3_2()
{
	double	height, weight, bmi;

	// ���������Ӣ�ߺ�Ӣ��Ϊ��λ
	int	feet, inches;
	cout << "������ߣ�__Ӣ����__Ӣ�磺";
	cin >> feet >> inches;

	// �����Ӣ��Ϊ��λ�����
	const int	k_factorFeetToInches = 12; 	// 1Ӣ�� = 12Ӣ��
	height = feet * k_factorFeetToInches + inches;

	// �������Ϊ��λ�����
	const double	k_factorInchesToMeters = 0.0254; 	// 1Ӣ�� = 0.0254��
	height = height * k_factorInchesToMeters;

	// ���������԰�Ϊ��λ
	int	pounds;
	cout << "�����԰�Ϊ��λ�����أ�";
	cin >> pounds;

	// �����ǧ��Ϊ��λ������
	const double	k_factorPoundsToKilograms = 1 / 2.2; 	// 1�� = 1/2.2ǧ�� 
	weight = pounds * k_factorPoundsToKilograms;

	// ����BMI
	bmi = weight / (height * height);

	// ��ʾBMI
	cout << "BMI��" << bmi << endl;

	cout << endl;
	return (0);
}
int arrayone(){
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	
	int yamcosts[3] = { 20, 30, 5 };

	cout << "Total yams =";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with" << yams[1] << " yams counts";
	cout << yamcosts[1] << " cents peryam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expence is  " << total << " cents\n";
	cout << "\nSize of yams array =" << sizeof yams;
	cout << "bytes.\n";
	cout << "Size of one element =" << sizeof yamcosts[0];
	cout << "bytes.\n";
	return 0;
}
int string1()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";

	cout << "Howdy!I'm" << name2;
	cout << "! What 's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	return 0;
}
int instr_1(){
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter yuor favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << " .\n";
	return 0;
}
int main(){
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.getline(name, ArSize);
	cout << "Enter yuor favorite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << " .\n";
	return 0;
}