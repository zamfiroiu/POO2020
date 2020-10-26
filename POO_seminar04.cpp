#include<iostream>
using namespace std;

class ProdusFarmaceutic {
private:
	string denumire;
	float pret;
	int stoc;
public:
	ProdusFarmaceutic() {
		this->denumire = "Medicament";
		this->pret = 0;
		this->stoc = 0;
	}

	ProdusFarmaceutic(string denumire, float pret, int stoc) {
		this->denumire = denumire;
		this->pret = pret;
		this->stoc = stoc;
	}
	string getDenumire() {
		return this->denumire;
	}
	float getPret() {
		return this->pret;
	}
	int getStoc() {
		return this->stoc;
	}
};

class Farmacie {
private:
	string nume;
	int nrProduse;
	ProdusFarmaceutic* produse;
public:

	Farmacie() {
		this->nume = "Farmacia mea";
		this->nrProduse = 3;
		this->produse = new ProdusFarmaceutic[nrProduse];
	}

	Farmacie(string nume, int nrProduse, ProdusFarmaceutic* produse) {
		this->nume = nume;
		this->nrProduse = nrProduse;
		this->produse = new ProdusFarmaceutic[nrProduse];
		for (int i = 0;i < nrProduse;i++) {
			this->produse[i] = produse[i];
		}
	}

	Farmacie(string nume) {
		this->nume = nume;
		this->nrProduse = 0;
		this->produse = NULL;
	}

	void afisare() {
		cout << this->nume;
		cout << " are " << this->nrProduse << " produse:" << endl;
		for (int i = 0;i < this->nrProduse;i++) {
			cout << "Produsul " << this->produse[i].getDenumire()
				<< " costa " << this->produse[i].getPret() << " RON "
				<< " si mai avem " << this->produse[i].getStoc()
				<< " bucati" << endl;
		}
		cout << endl << endl;
	}

	string getNume() //Nume
	{
		return this->nume;
	}
	void setNume(string noulNume) {
		if (noulNume.length() > 3) {
			this->nume = noulNume;
		}
		else {
			throw "Noul nume nu este corect";
		}
	}

	int getNrProduse() {
		return this->nrProduse;
	}

	void setProduse(int nrProduse, ProdusFarmaceutic* produse) {
		if (nrProduse > 0) {

			if (this->produse != NULL) {
				delete[]this->produse;
			}
			this->produse = new ProdusFarmaceutic[nrProduse];
			for (int i = 0;i < nrProduse;i++) {
				this->produse[i] = produse[i];
			}
			this->nrProduse = nrProduse;
		}
	}

	ProdusFarmaceutic* getProduse() {
		return this->produse;
	}

	ProdusFarmaceutic getProdus(int pozitie) {
		if (pozitie >= 0 && pozitie < this->nrProduse) {
			return this->produse[pozitie];
		}
	}

};

void main() {
	

	try {
		Farmacie f;
		//f.setNume("");//seter
		cout << "Farmacia se numeste:" << f.getNume() << ".";//geter
		f.setProduse(2, 
			new ProdusFarmaceutic[2]{ ProdusFarmaceutic(),ProdusFarmaceutic("Paracetamol",20,2) });

		cout << endl << f.getProduse()[1].getDenumire()<<endl;
		cout << f.getProdus(1).getDenumire() << endl;
	}
	catch (int exceptie) {
		cout << "Am primit o exceptie de tip int";
	}
	catch (const char* ex) {
		cout << ex;
	}
	catch (...) {
		cout << "Codul a aruncat o exceptie necunoscuta";
	}

	
}