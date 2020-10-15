#include<iostream>
using namespace std;

class Telefon {
protected:
	string producator;
	void modificaDigonala(float diagonala) {
		this->diagonala = diagonala;
	}
public:
	float diagonala;
	int memorieRAM;

	void afisare() {
		cout << producator << " " << this->memorieRAM << " " << this->diagonala << endl;
	}

	void modificaMemorieRAM(int memorieRAM) {
		this->memorieRAM = memorieRAM;
	}

	void citire() {
		cout << "Producator:";
		char buffer[30];
		cin.get();
		cin.getline(buffer,30,'\n');
		this->producator = buffer;
		cout << "RAM:";
		cin >> this->memorieRAM;
		cout << "Diagonala:";
		cin >> this->diagonala;
	}
};

void afisareTelefon(Telefon t) {
	cout << t.producator << " " << t.memorieRAM <<" "<< t.diagonala<<endl;
}

void main() {
	Telefon t;
	t.diagonala = 12;
	t.memorieRAM = 8;
	t.producator = "Samsung";
	//afisareTelefon(t);
	t.afisare();

	Telefon t2;
	t2.diagonala = 6.7;
	t2.memorieRAM = 16;
	t2.producator = "Huawei";
	t2.afisare();
	t2.modificaMemorieRAM(12);
	t2.afisare();
	t2.citire();
	t2.afisare();

	Telefon* pt;
	pt = new Telefon();
	pt->diagonala = 6.5;
	pt->memorieRAM = 6;
	pt->producator = "Xiaomi";
	pt->afisare();

	Telefon* * vectorPointeri;
	int nrPointeri = 5;
	vectorPointeri = new Telefon * [nrPointeri];
	for (int i = 0;i < nrPointeri;i++) {
		vectorPointeri[i] = new Telefon();
		vectorPointeri[i]->citire();
	}

	for (int i = 0;i < nrPointeri;i++) {
		vectorPointeri[i]->afisare();
	}


	delete pt;
	for (int i = 0;i < nrPointeri;i++) {
		delete vectorPointeri[i];
	}
	delete[]vectorPointeri;
}