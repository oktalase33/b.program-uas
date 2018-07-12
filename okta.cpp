#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char nama [30];
	char nik [20];
	char alamat [20];
	char tgllahir[20] ;
	char agama ;
	char pekerjaan ;
	
	cout<<"input data ktp\n"<<endl;
	cout<<"nama :";
	cin.getline(nama, 30);
	cout<<"nik :";
	cin>>nik;
	cout<<"alamat :";
	cin>>alamat;
	cout<<"tgl lahir :";
	cin>>tgllahir;
	cout<<"agama :";
	cin>>agama;
	cout<<"pekerjaan: ";
	cin>>pekerjaan;
	getch();
}
