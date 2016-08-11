#include<iostream>
using namespace std;
char box[7][10]={};
int row=1;int column=1;

void display()
{
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<10;j++)
		{
			cout<<box[i][j]<<" ";
		}cout<<endl;
	}
}

bool update(char value)
{
	//box[row][column]='.';
	//if((row<0) || (row>6) || (column<0) ||(column>9)) {cout<<"invalid move"<<endl;return true;}
	switch(value)
	{
	case'l': if(box[row][column-1]=='T')
			 {
				cout<<"Oops you fell in the trap"<<endl;return false;break;
			 }
			 else {box[row][column]='.';column=column-1; break;}

	case'r': if(box[row][column+1]=='T')
			 {
				cout<<"Oops you fell in the trap"<<endl;return false;break;
			 }
			 else {box[row][column]='.';column=column+1; break;}
	case'u': if(box[row-1][column]=='T')
			 {
				cout<<"Oops you fell in the trap"<<endl;return false;break;
			 }
			 else {box[row][column]='.';row=row-1;break;}
	case'd':if(box[row+1][column]=='T')
			 {
				cout<<"Oops you fell in the trap"<<endl;return false;break;
			 } 
			else {box[row][column]='.';row=row+1;break;}
	default: cout<<"wrong choice entered";break;
	}
	if(box[row][column]=='X') {cout<<"CONGRATULATONS!! you won the game"<<endl;return false;}
	
	else{ box[row][column]='G';return true;}
	
}



int main()
{
	char choice;		
	for(int i=0;i<7;i++)//initialization
	{
		for(int j=0;j<10;j++)
		{
			
			box[i][j]='.';
		}
	}
	box[1][1]='G';
	box[2][7]='T';
	box[4][4]='T';
	box[5][6]='T';
	box[6][9]='X';//end initialization

	display();
	do{cout<<"you can move one position to either left/right/up/down. Choose your move: l/r/u/d "<<endl;
	cin>>choice;
	update(choice);
	display();}while(update(choice)==true);

	system("pause");
	return 0;
}