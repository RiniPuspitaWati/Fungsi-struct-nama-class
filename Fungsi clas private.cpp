#include <iostream>
using namespace std;

struct Mahasiswa{
	private:
	string nama, npm;
};

int main(){
	Mahasiswa Mhs;
	
	cin>> Mhs.nama;
	cin>> Mhs.npm;
	
	cout<< Mhs.nama << " " << Mhs.npm;
} 
