#include<iostream>

using namespace std;

struct Laptop {
	char* producator;
	float pret;
	bool areCamera;
};

void afisarePointerLaptop(Laptop* l) {
	cout << l->producator << "\t" << l->pret << "\t" << l->areCamera << "." << endl;
}

void main() {
	Laptop* l1;
	l1 = new Laptop();
	l1->pret = 299.89f;
	l1->producator = new char[strlen("ASUS") + 1];
	strcpy(l1->producator, "ASUS");
	l1->areCamera = true;
	afisarePointerLaptop(l1);

	Laptop* l2;
	int nrLaptopuri = 3;
	l2 = new Laptop[nrLaptopuri];
	for (int i = 0;i < nrLaptopuri;i++) {
		(l2 + i)->producator = new char[strlen("ASUS ") + 2];
		char buffer[2];
		_itoa(i+1, buffer, 10);
		strcpy(l2[i].producator, "ASUS ");
		strcat((l2 + i)->producator, buffer);

		(l2 + i)->pret = (i + 1) * 1000;
		(l2 + i)->areCamera = i%2;
	}

	for (int i = 0;i < nrLaptopuri;i++) {
		afisarePointerLaptop(l2 + i);
	}

	delete[] l1->producator;
	delete l1;
	for (int i = 0;i < nrLaptopuri;i++) {
		delete[]l2[i].producator;
	}
	delete[]l2;

	Laptop** l3;
	l3 = new Laptop * [nrLaptopuri];
	for (int i = 0;i < nrLaptopuri;i++) {
		l3[i] = new Laptop();
		l3[i]->producator = new char[strlen("ASUS") + 1];
		strcpy(l3[i]->producator, "ASUS");
		l3[i]->pret = i * 23 + 17;
		l3[i]->areCamera = i % 2;
	}

	for (int i = 0;i < nrLaptopuri;i++) {
		afisarePointerLaptop(l3[i]);
	}
}