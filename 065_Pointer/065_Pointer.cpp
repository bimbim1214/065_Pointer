#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi metod
};

void mahasiswa::showNim() { // implementasi metod di luar kelas
	cout << "no induk = " << nim << endl;
}

int main() {
	mahasiswa mhs{ 1 }; // object mhs
	mhs.showNim(); //member acces operator

	mahasiswa& ref = mhs; //pointer refernce refmhs
	ref.nim = 2; //member acces operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer dereference pMhs
	pMhs->nim = 3; //arrow operator
	pMhs->showNim();
	system("pause");
	return 0;
}