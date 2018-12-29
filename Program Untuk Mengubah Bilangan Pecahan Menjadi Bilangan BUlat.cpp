#include<iostream>
using namespace std;
typedef struct pecahan{
	int pb;
	int py;
};
int main(int argc, char *agrv[])
{
	pecahan p1,p2;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Mengubah Bilangan Pecahan Menjadi Bilangan bulat "<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"Masukkan Pembilang = ";
	cin>>p1.pb;
	cout<<"Masukkan Penyebut = ";
	cin>>p1.py;
	cout<< "\t "<<p1.pb <<endl;
	cout<< "\tp1 = -"<<endl;
	if ("/")
	{
		cout<<" Hasilnya = "<<(p1.pb)/(p1.py)<<endl;
	}
	return 0;
}
