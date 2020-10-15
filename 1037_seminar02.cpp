#include<iostream>

using namespace std;

struct Cladire {
	int nrEtaje;
	bool areBulina;
	char* oras;
};

void afisarePointerCladire(Cladire* cladire) {
	cout << cladire->nrEtaje << " " << cladire->areBulina << " " << cladire->oras << endl;
}

void main() {

	Cladire* p;
	p = new Cladire();
	p->nrEtaje = 4;
	p->areBulina = false;
	p->oras = new char[strlen("Bucuresti") + 1];
	strcpy(p->oras, "Bucuresti");

	afisarePointerCladire(p);

	Cladire* cladiri;
	int nrCladiri = 3;
	cladiri = new Cladire[nrCladiri];
	for (int i = 0;i < nrCladiri;i++) {
		cladiri[i].nrEtaje = 7;
		cladiri[i].areBulina = (i % 2==0);
		cladiri[i].oras = new char[strlen("Bucuresti") + 1];
		strcpy(cladiri[i].oras, "Bucuresti");
	}

	for (int i = 0;i < nrCladiri;i++) {
		afisarePointerCladire(&cladiri[i]);
	}

	delete[]p->oras;
	delete p;

	for (int i = 0;i < nrCladiri;i++) {
		delete[]cladiri[i].oras;
	}
	delete[]cladiri;


	Cladire** vector;
	int nrPointeri = 3;
	vector = new Cladire * [nrPointeri];
	for (int i = 0;i < nrPointeri;i++) {
		vector[i] = new Cladire();
		vector[i]->oras = new char[strlen("Bucuresti") + 1];
	}
}