#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "Orang Dibuat\n" << endl;
	}

	~orang() {
		cout << "Orang Dihapus\n" << endl;
	}

	int jumlah(int a, int b) {
		return a + b;
	}

};

class pelajar : public orang {
public:
	string sekolah;

	pelajar(string pNama, string pSekolah) :
		orang(pNama), 
		sekolah(pSekolah) {
		cout << "Pelajar Dibuat\n" << endl;
	}

	~pelajar() {
		cout << "Pelajar Dihapus\n" << endl;
	}

	string perkenalan() {
		return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
	}

};

int main() {
	pelajar siswa1("Andi Laksono", "SMAN 1 Bantul");

}