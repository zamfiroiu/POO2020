#include<iostream>

using namespace std;

struct Masina {
	char* marca;
	int anFabricatie;
	float pret;
};

void afisareMasina(Masina* m) {
	cout << m->marca << " " << m->anFabricatie << " " << m->pret<<endl;
}

void main() {
	Masina* m;
	m = new Masina();
	m->marca = new char[strlen("Dacia") + 1];
	strcpy(m->marca, "Dacia");
	m->anFabricatie = 1975;
	m->pret = 2000;
	afisareMasina(m);

	Masina* v;
	v = new Masina[5];
	for (int i = 0;i < 5;i++) {
		v[i].marca = new char[strlen("Renault") + 1];
		strcpy(v[i].marca, "Renault");
		v[i].anFabricatie = 2000 + i;
		v[i].pret = 4000 + i;
	}

	for (int i = 0;i < 5;i++) {
		afisareMasina(&v[i]);
	}

	delete[]m->marca;
	delete m;
	for (int i = 0;i < 5;i++) {
		delete[]v[i].marca;
	}
	delete[]v;

	Masina* * vp;
	vp = new Masina * [3];
	for (int i = 0; i< 3;i++) {
		vp[i] = new Masina();
		vp[i]->marca = new char[strlen("Volvo") + 1];
		strcpy(vp[i]->marca, "Volvo");
		vp[i]->anFabricatie = 2010 + i;
		vp[i]->pret = 10000 + i * 100;
	}




}