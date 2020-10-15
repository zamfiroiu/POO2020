#include<iostream>

using namespace std;

struct Masina {
	char* marca;
	int anFaricatie;
	bool decapotabila;
};

void afisarePointerMasina(Masina *m) {
	cout << m->marca << " " << m->anFaricatie << " " << m->decapotabila << endl;
}

void main() {
	Masina* masina;
	masina = new Masina();
	masina->anFaricatie = 2020;
	masina->decapotabila = true;
	masina->marca = new char[strlen("BMW") + 1];
	strcpy(masina->marca, "BMW");

	afisarePointerMasina(masina);

	Masina* masini;
	int nrMasini = 3;
	masini = new Masina[nrMasini];
	for (int i = 0;i < nrMasini;i++) {
		masini[i].anFaricatie = 2020;
		masini[i].decapotabila = false;
		masini[i].marca = new char[strlen("VW") + 1];
		strcpy(masini[i].marca, "VW");
	}

	for (int i = 0;i < nrMasini;i++) {
		afisarePointerMasina(&masini[i]);
	}

	delete[]masina->marca;
	delete masina;

	for (int i = 0;i < nrMasini;i++) {
		delete[]masini[i].marca;
	}
	delete[]masini;

	Masina** vector;
	int nrPointeri = 5;
	vector = new Masina * [nrPointeri];
	for (int i = 0;i < nrPointeri;i++) {
		vector[i] = new Masina();
		vector[i]->anFaricatie = 2015+i;
		vector[i]->decapotabila = i % 2;
		vector[i]->marca = new char[strlen("Mercedes") + 1];
		strcpy(vector[i]->marca, "Mercedes");
	}

	for (int i = 0;i < nrPointeri;i++) {
		afisarePointerMasina(vector[i]);
	}

	for (int i = 0;i < nrPointeri;i++) {
		delete[]vector[i]->marca;
		delete[]vector[i];
	}
	delete[]vector;
}