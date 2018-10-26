#include<iostream>
using namespace std;
void MINH(int h);
int main()
{
	cout<<"\nHELLO WORLD"<<endl;
	MINH(5);
	return 0;
}
void MINH(int h)
{
	// duyt tu tren xuong
	for(int i=1;i<=h;i++)
	{
		// duyet tu trai qua
		for(int j=1;j<=4*h+2;j++)
		{
			if((i==1)&&(j==1||j==5||j==8||j==11||j==22||j==15||j==18))
			{
				cout<<"*";
			}
			else if(i==2&&(j==1||j==2||j==4||j==5||j==8||j==11||j==12||j==22||j==15||j==18))
			{
				cout<<"*";
			}
			else if(i==3&& (j==1||j==3||j==5||j==8||j==11||j==13||j==15||j==22||j==21||j==18||j==20||j==19))
			{
				cout<<"*";
			}
			else if((i==4)&&(j==1||j==5||j==8||j==11||j==14||j==22||j==15||j==18))
			{
				cout<<"*";
			}
			else if((i==5)&&(j==1||j==5||j==8||j==11||j==22||j==15||j==18))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
