#include <iostream>
using namespace std;

int calculate_degree (int,int);

int main ()
{
    int result,number,degree;
    cout<<"enter the number\n";
    cin>>number;
	cout<<"enter the degree"<<endl;
    cin>>degree;
   result= calculate_degree(number,degree);
   cout<<number<<" to the power of "<<degree<<" is "<<result<<endl;
   system("pause");
  return 0;
}

int calculate_degree(int n, int d)
{
    if(d==0)return 1; 
    return n*calculate_degree(n,d-1);
}