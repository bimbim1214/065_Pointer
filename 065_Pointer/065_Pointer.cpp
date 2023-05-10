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
