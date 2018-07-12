#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int angka,usia;
	char nama [20];
	
	cout<<"tiket bioskop \n";
	cout<<"nama	: ";
	cin>>nama;
	cout<<"1 infinity war"<<endl;
	cout<<"2 upin ipin war"<<endl;
	cout<<"masukan pilihan anda	: ";
	cin>>angka;
	cout<<"masukan usia anda"<<endl;
	cout<<"usia	: ";
	cin>>usia;
	
	if(angka==1)
	{
		if(usia>=20)
		cout<<"pilihan anda diterima"<<endl;
		else
		cout<<"maaf usia anda tidak cukup untuk dapat menonton film infinity war"<<endl;
	}
	else if(angka==2)
	{
		if(usia>20<usia)
		cout<<"pilihan anda diterima"<<endl;
		else
		cout<<"maaf usia anda tidak cukup untuk dapat menonton film upin ipin war"<<endl;
	}

	else
	cout<<"pilihan anda salah";
	
	getch();
}
