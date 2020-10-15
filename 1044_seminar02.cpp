#include<iostream>
using namespace std;

struct Ceas {
	float greutate;
	char* brand;
	bool esteMecanic;
};

void afisarePointerCeas(Ceas* c) {
	cout << c->brand << " " << c->greutate << " " << c->esteMecanic << "." << endl;
}

void main() {
	Ceas* c;
	c = new Ceas();
	c->greutate = 50;
	c->brand = new char[strlen("Casio") + 1];
	strcpy(c->brand, "Casio");
	c->esteMecanic = false;

	afisarePointerCeas(c);


	Ceas* d;
	int nrCeasuri = 3;
	d = new Ceas[nrCeasuri];
	for (int i = 0;i < nrCeasuri;i++) {
		d[i].greutate = 30 + i;
		d[i].brand = new char[strlen("Cassio") + 1];
		strcpy(d[i].brand, "Cassio");
		d[i].esteMecanic = i % 2;
	}

	for (int i = 0;i < nrCeasuri;i++) {
		afisarePointerCeas(&d[i]);
	}


	delete[]c->brand;
	delete c;

	for (int i = 0;i < nrCeasuri;i++) {
		delete[]d[i].brand;
	}

	delete[]d;


	Ceas** e;
	int nrPointeri = 2;
	e = new Ceas * [nrPointeri];
	for (int i = 0;i < nrPointeri;i++) {
		e[i] = new Ceas();
		e[i]->brand = new char[strlen("Cassio") + 1];
		strcpy(e[i]->brand, "Cassio");
		e[i]->greutate = 30 + i;
		e[i]->esteMecanic = false;
	}

	for (int i = 0;i < nrPointeri;i++) {
		afisarePointerCeas(e[i]);
	}
}