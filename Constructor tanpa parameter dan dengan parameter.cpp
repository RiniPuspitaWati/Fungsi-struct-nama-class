#include <iostream>
using namespace std;

//// tanpa parameter
//class Mahasiswa{
//	public:
//		Mahasiswa(){ //COSTRUCTOR
//		
//		}
//};
//
//int main(){
//	Mahasiswa Mhs;
//}

//contructor dengan parameter

#include <iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		
		Mahasiswa(string nama, string b){
			this->nama = nama;
			npm = b;
		}
		
};

int main(){
	Mahasiswa Mhs ("Rini","2219");
	
	cout<< "Nama: " << Mhs.nama << endl;
	cout<< "Npm: " << Mhs.npm;
}


