/*#include<iostream>
using namespace std;
char box[3][3]={'1','2','3','4','5','6','7','8','9'};




bool entry(char choice,char player)
{
	bool r=false;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(choice==box[i][j])
			{
				box[i][j]=player;
				r=true;
			}				
		}

	}return r;
}

void display()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<box[i][j]<<" ";
				
		}cout<<endl;

	}
}

bool check()
{
	if((box[0][0]==box[1][1])&&(box[1][1]==box[2][2])) return true;
		if((box[0][2]==box[1][1])&&(box[1][1]==box[2][0])) return true;
		
		for(int i=0;i<3;i++)
		{
			if((box[i][0]==box[i][1])&&(box[i][1]==box[i][2])) return true;
			if((box[0][i]==box[1][i])&&(box[1][i]==box[2][i])) return true;
		}
}


////////////////////////////////////when user is both player x and y////////////////////////////////////////

int main()
{
	display();
	char temp;
	bool r1,r2;
	for(int i=0;i<5;i++)
	{
		cout<<"player x, enter the number in which x should b filled"<<endl;
		cin>>temp;
		r1=entry(temp,'x');
		display();
		r2=check();
		if (r2==true) {cout<<"winner is X"<<endl; break;}

		cout<<"player o, enter the number in which o should b filled"<<endl;
		cin>>temp;
		r1==entry(temp,'o');
		display();	
		r2=check();
		if (r2==true) {cout<<"winner is O"<<endl; break;}
		
		
	}
	
	if(r2!=true)cout<<"no one wins"<<endl;

	system("pause");
	return 0;
}*/



///////////////////////////when user is both player x and system is player y/////////////////////////////////


/*int main()
{

	cout<<"You are Player 'o'"<<endl;
	int randNum;
	bool r1=false,r2=false;
	unsigned int randGen[9]={1,2,3,4,5,6,7,8,9};
	for(int max=8;max>0;max--)
	{
		randNum=rand()%randGen[max]+1;
		//cout<<randNum<<endl;
		int temp=randGen[max];
		randGen[max]=randGen[randNum];
		randGen[randNum]=temp;
		
	}
	for(int i=0;i<9;i++)
	{
		cout<<randGen[i]<<endl;
		
		char a=NULL;
		do {
			itoa(randGen[i], &a, 10);
			r1=entry(a,'x');
			cout << " Value of a is " << a << endl;
			}while(r1==true);

		display();
		r2=check();
		if (r2==true) {cout<<"winner is X";break;}
	
		char temp;
		cout<<"enter your choice"<<endl;
		cin>>temp;
		r1=entry(temp,'o');
		display();
		r2=check();
		if (r2==true) {cout<<"winner is O";break;}
	}
	if (r2!=true) cout<<"no one wins"<<endl;
	system("pause");
	return 0;
}*/