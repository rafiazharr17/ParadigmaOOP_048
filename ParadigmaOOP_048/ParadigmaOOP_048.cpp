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

};