#include <iostream>
using namespace std;

class array{
	public:
		void input();
    void proses();
		void output();
	private:
		string nama[20][1];
	 	string jenis[5][1];
		string kelamin[2][1];
		string alamat[25][1];
    string cari;
    int i, j, hasil;
};

void array::input(){
	for(int i = 0; i < 5; i++) {
		cout<<"==========================="<<endl;
		for (int j = 0; j < 1; j++) {
			cout<<"Jenis Karyawan : ";
			cin>>jenis[i][j];
		}
		for (int j = 0; j < 1; j++) {
			cout<<"Nama : ";
			cin>>nama[i][j];
		}
		for (int j = 0; j < 1; j++) {
			cout<<"Alamat : ";
			cin>>alamat[i][j];
		}
		for (int j = 0; j < 1; j++) {
			cout<<"Jenis Kelamin : ";
			cin>>kelamin[i][j];
		}
		cout<<"==========================="<<endl<<endl;
	}
}

void array::proses(){
  cout<<"----------------------------------------------------------------------------------"<<endl;
  cout<<"|	Jenis Karyawan	|		Nama		|	Alamat		|	Jenis Kelamin	|"<<endl;
  cout<<"|--------------------------------------------------------------------------------|"<<endl;
	for(int i = 0; i < 5; i++) {
		for (int j = 0; j < 1; j++) {
			cout<<"\t\t"<<jenis[i][j]<<"\t\t\t"<<nama[i][j]<<"\t\t\t\t"<<alamat[i][j]<<"\t\t"<<"\t\t\t"<<kelamin[i][j];
		}
		cout<<endl;
	}
} 

void array::output(){
  
    cout<<endl;
  cout<<"===================== H a s i l  P e n c a r i a n =============="<<endl;
  cout<<" Jenis Karyawan   : "<<jenis<<endl;
  cout<<" Nama             : "<<nama<<endl;
  cout<<" Alamat           : "<<alamat<<endl;
  cout<<" Jenis Kelamin    : "<<kelamin<<endl; 
  cout<<"================================================================="<<endl;
}
int main() {
	array out;
	out.input();
  out.proses();
	out.output();
	return 0;
}

/*
karyawan={
{1,2,3,4}
{4,5,6,7}
{7,8,9,10}
}


}
*/