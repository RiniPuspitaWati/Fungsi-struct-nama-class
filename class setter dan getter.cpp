#include <iostream>
using namespace std;

//Setter
//class Mahasiswa{
//	private:
//		string nama;
//		
//	public:
//		void setNama(string nama){
//			this->nama = nama;
//		}
//};
//
//int main(){
//	Mahasiswa Mhs;
//	
//	Mhs.setNama("Rini");
//}

//getter
#include <iostream>
using namespace std;

class Mahasiswa{
	private:
		string nama;
		
	public:
		void setNama(string nama){
			this->nama = nama;
		}
		
		string getNama(){
			return nama;
		}
};

int main(){
	Mahasiswa Mhs;
	
	Mhs.setNama("Rini");
	cout<< Mhs.getNama();
}
