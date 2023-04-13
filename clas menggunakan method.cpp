#include <iostream>
using namespace std;

struct Mahasiswa{
	public:
		string nama, npm;
	
		void Perkenalan(){
			cout<< "Nama: " << nama << endl;
			cout<< "Npm: " << npm;
		}
};

int main(){
	Mahasiswa Mhs;
	
	cin>> Mhs.nama >> Mhs.npm;
	
	Mhs.Perkenalan();
} 
