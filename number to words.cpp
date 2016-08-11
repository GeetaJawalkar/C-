#include<iostream>
#include<list>
#include<string>
using namespace std;

string fn1(int);
string fn2(int,int);


int main()
{
	int number,d;
	list <int> digit;
	cout<<"enter the number to be printed in words\n";
	cin>>number;
	while(number>=9)
	{
		d=number%10;
		digit.push_back(d);
		number=number/10;
	}
	digit.push_back(number);

	
	list<int>::iterator i=digit.begin();
	int j=0,zero,three,five;
	string str[7];
	for (int temp=0;temp<7;temp++)
		str[temp]="";
	while(i!=digit.end())
	{
		if(j==0) zero=*i;
		if(j==3) three=*i;
		if(j==5) five=*i;
		if((j==1)&&(*i==1))str[0]="";
		if((j==4)&&(*i==1))str[3]="";
		if((j==6)&&(*i==1))str[5]="";
		if(j==1) {str[j]=fn2(*i,zero);i++;j++;continue;}
		if(j==4) {str[j]=fn2(*i,three);i++;j++;continue;}
		if(j==6) {str[j]=fn2(*i,five);i++;j++;continue;}
		str[j]=fn1(*i);
		i++;j++;
		
	}
	cout<<"The number in words is \n";
	if ((str[5]!="")||(str[6]!=""))str[5]+=" lakh ";
	if ((str[3]!="")||(str[4]!=""))str[3]+=" thousand ";
	if (str[2]!="")str[2]+=" hundred and ";
	
	cout<<str[6]<<str[5]<<str[4]<<" "<<str[3]<<str[2]<<str[1]<<" "<<str[0]<<endl;
	//cout<<str[5]<<" lakh "<<str[4]<<" "<<str[3]<<" thousand "<<str[2]<<" hundred and "<<str[1]<<" "<<str[0]<<endl;
	system("pause");


	return 0;
}

string fn1(int d)
{
	switch (d)
	{
		case 0: return "";break;
		case 1: return "one";break;
		case 2: return "two";break;
		case 3: return "three";break;
		case 4: return "four";break;
		case 5: return "five";break;
		case 6: return "six";break;
		case 7: return "seven";break;
		case 8: return "eight";break;
		case 9: return "nine";break;
	}
}

string fn2(int current, int previous)
{
	switch(current)
	{
		case 0: return "";break;
		case 1: goto fn3;
		case 2: return "twenty";break;
		case 3: return "thirty";break;
		case 4: return "fourty";break;
		case 5: return "fifty";break;
		case 6: return "sixty";break;
		case 7: return "seventy";break;
		case 8: return "eighty";break;
		case 9: return "ninety";break;
	}

	fn3:
	{
		switch(previous)
		{
		case 0: return "ten";break;
		case 1: return "eleven";break;
		case 2: return "twelve";break;
		case 3: return "thirteen";break;
		case 4: return "fourteen";break;
		case 5: return "fifteen";break;
		case 6: return "sixteen";break;
		case 7: return "seventeen";break;
		case 8: return "eighteen";break;
		case 9: return "nineteen";break;
		}
	}
}