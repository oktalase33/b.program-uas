#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int bil;
	cout<<"\t\tThis program created by MUHAMMAD PERMANA DOLAR - 20170801171"<<endl;
	cout<<"\t\t\t        Programing language practices"<<endl<<endl;
	cout<<"Input Size =  ";cin>>bil;
	
	for (int i = bil; i >= 0; i--)
	{
		cout<<endl;
		for (int j = i; j >= 0; j--)
		{
			cout<<" *";
		}
		for (int k = i; k < bil; k++)
		{
			cout<<"  ";
		}
		
		for (int k = i; k < bil; k++)
		{
			cout<<"  ";
		}
		for (int j = i; j >= 0; j--)
		{
			cout<<" *";
		}
	}
		
	
	for (int i = bil; i >= 0; i--)
	{
		cout<<endl;
		for (int j = i; j <= bil; j++)
		{
			cout<<" *";
		}
		for (int k = i; k > 0; k--)
		{
			cout<<"  ";
		}
		
		for (int k = i; k > 0; k--)
		{
			cout<<"  ";
		}
		for (int j = i; j <= bil; j++)
		{
			cout<<" *";
		}		
	}	
	getch();
}

