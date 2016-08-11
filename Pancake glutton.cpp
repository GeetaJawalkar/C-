#include<iostream>
using namespace std;

int main()
{
	int n[5], max=0,p,q,min=10;
	int a;int z[5];int before[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter number of pancakes eaten by person "<<i+1<<endl;
		cin>>n[i];
		before[i]=n[i];
		if(n[i]>max)
		{
			max=n[i]; p=i+1;
		}
		else if(min>n[i])
		{
			min=n[i]; q=i+1;
		}
	}
	for(int j=1;j<5;j++)
	{
		for(int i=1;i<5;i++)
		{
			if(n[i]>n[i-1])
			{
				a=n[i-1];
				n[i-1]=n[i];
				n[i]=a;
			}
		}

	}

	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(before[j]==n[i]){
				z[i]=j;
				break;
			}
		}
	}
	cout<<"person who ate maximum number of cakes is person"<<p<<" He ate "<<max<<" cakes"<<endl;
	cout<<"person who ate least number of cakes is person"<<q<<" He ate "<<min<<" cakes"<<endl;
	cout<<"descending list:"<<endl;
	for(int k=0;k<5;k++)
		cout<<"person "<<z[k]+1<<"has eaten "<<n[k]<<" cakes"<<endl;

	system("pause");
	return 0;
}