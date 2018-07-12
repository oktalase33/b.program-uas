#include<iostream>
#include<conio.h>

using namespace std;

// Irsad Hidayattullah
// 20170801169

int main(){
	int angka;
	
	cout<<"\n =========================================";
	cout<<"\n 		Tugas Bintang"<<endl;
	cout<<" ========================================="<<endl;
	cout<<"\n Masukkan ukuran =  ";
	cin>>angka;
	
	for (int i = angka; i >= 0; i--)
	{
		cout<<endl;
		for (int j = i; j >= 0; j--)
		{
			cout<<" *";
		}
		for (int k = i; k < angka; k++)
		{
			cout<<"  ";
		}
		
		for (int k = i; k < angka; k++)
		{
			cout<<"  ";
		}
		for (int j = i; j >= 0; j--)
		{
			cout<<" *";
		}
	}
		
	
	for (int i = angka; i >= 0; i--)
	{
		cout<<endl;
		for (int j = i; j <= angka; j++)
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
		for (int j = i; j <= angka; j++)
		{
			cout<<" *";
		}		
	}	
	getch();
}

