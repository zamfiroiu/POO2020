//un atribut constant
//un atribut static
//constructor de copiere
//operator=
//destructor

#include<iostream>
using namespace std;

class ProdusFarmaceutic {
private:
	static int procentTVA;
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
	~ProdusFarmaceutic() {

	}
};
int ProdusFarmaceutic::procentTVA = 19;

class Farmacie {
private:
	static float subventieStat;
	const string CUI;
	string nume;
	int nrProduse;
	ProdusFarmaceutic* produse;
public:

	Farmacie():CUI("123456") {
		this->nume = "Farmacia mea";
		this->nrProduse = 3;
		this->produse = new ProdusFarmaceutic[nrProduse];
	}

	Farmacie(string nume, int nrProduse, ProdusFarmaceutic* produse, string cui):CUI(cui) {
		this->nume = nume;
		this->nrProduse = nrProduse;
		this->produse = new ProdusFarmaceutic[nrProduse];
		for (int i = 0;i < nrProduse;i++) {
			this->produse[i] = produse[i];
		}
	}

	Farmacie(string nume):CUI("RO123456") {
		this->nume = nume;
		this->nrProduse = 0;
		this->produse = NULL;
	}

	Farmacie(const Farmacie& f):CUI(f.CUI) {
		this->nume = f.nume;
		this->nrProduse = f.nrProduse;
		this->produse = new ProdusFarmaceutic[nrProduse];
		for (int i = 0;i < nrProduse;i++) {
			this->produse[i] = f.produse[i];
		}
	}

	Farmacie operator=(const Farmacie& f) {
		if (this->produse != f.produse) {
			this->nume = f.nume;
			this->nrProduse = f.nrProduse;
			if (this->produse != NULL) {
				delete[]this->produse;
			}
			this->produse = new ProdusFarmaceutic[nrProduse];
			for (int i = 0;i < nrProduse;i++) {
				this->produse[i] = f.produse[i];
			}
			return *this;
		}
	}


	void afisare() {
		cout << this->CUI<<endl;
		cout << this->nume<<endl;
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

	string getCUI() {
		return this->CUI;
	}
	static float getSubventieStat() {
		return subventieStat;
	}
	static void setSubventieStat(float subventie) {
		if (subventie >= 0) {
			subventieStat = subventie;
		}
		else {
			throw "Subventie incorecta.";
		}
	}

	~Farmacie() {
		if (this->produse != NULL) {
			delete[]this->produse;
		}
	}

};
float Farmacie::subventieStat = 0;

void functie(Farmacie& f) {
	int a = f.getNrProduse();
}

Farmacie functie2() {
	Farmacie farmacie;
	return farmacie;
}

void main() {

	Farmacie f;
	cout << f.getCUI();
	Farmacie::setSubventieStat(500);
	cout << Farmacie::getSubventieStat();

	Farmacie f1;
	f1.setNume("Farmacie");
	Farmacie f2(f1);
	Farmacie f3 = f1;

	f2.afisare();


	functie(f1);
	{
		Farmacie f4 = functie2();
	}
	Farmacie* pF = new Farmacie("Nume farmacie");
	delete pF;

	Farmacie f10("Farm",2,new ProdusFarmaceutic[2],"RO1234");
	Farmacie f11;
	f11 = f10;

	f10 = f10;

}