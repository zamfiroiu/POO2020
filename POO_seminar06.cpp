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

	bool operator<=(ProdusFarmaceutic pf) {
		return this->pret * this->stoc <= pf.pret * pf.stoc;
	}
	friend ostream& operator<<(ostream& monitor, ProdusFarmaceutic pf) {
		monitor << "Produsul " << pf.denumire
			<< " costa " << pf.pret << " RON "
			<< " si mai avem " << pf.stoc
			<< " bucati" << endl;
		return monitor;
	}

	friend istream& operator>>(istream& tastatura, ProdusFarmaceutic &pf) {
		cout << "Denumire:"; 
		tastatura >> pf.denumire;		
		cout << "Pret:";
		tastatura >> pf.pret;		
		cout << "Stoc:";
		tastatura >> pf.stoc;
		return tastatura;
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

	Farmacie() :CUI("123456") {
		this->nume = "Farmacia mea";
		this->nrProduse = 3;
		this->produse = new ProdusFarmaceutic[nrProduse];
	}

	Farmacie(string nume, int nrProduse, ProdusFarmaceutic* produse, string cui) :CUI(cui) {
		this->nume = nume;
		this->nrProduse = nrProduse;
		this->produse = new ProdusFarmaceutic[nrProduse];
		for (int i = 0;i < nrProduse;i++) {
			this->produse[i] = produse[i];
		}
	}

	Farmacie(string nume) :CUI("RO123456") {
		this->nume = nume;
		this->nrProduse = 0;
		this->produse = NULL;
	}

	Farmacie(const Farmacie& f) :CUI(f.CUI) {
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
		cout << this->CUI << endl;
		cout << this->nume << endl;
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

	Farmacie operator+(ProdusFarmaceutic pf) {
		Farmacie f = *this;
		ProdusFarmaceutic *aux = new ProdusFarmaceutic[f.nrProduse + 1];
		for (int i = 0;i < f.nrProduse;i++) {
			aux[i] = f.produse[i];
		}
		aux[f.nrProduse] = pf;
		f.nrProduse++;
		if (f.produse) {
			delete[]f.produse;
		}
		f.produse = aux;
		return f;
	}

	friend Farmacie operator+(ProdusFarmaceutic pf, Farmacie f) {
		Farmacie f2 = f + pf;
		return f2;
	}

	Farmacie operator+=(ProdusFarmaceutic pf) {
		*this = *this + pf;
		return *this;
	}

	ProdusFarmaceutic& operator[](int index) {
		if (index >= 0 && index < this->nrProduse) {
			return this->produse[index];
		}
	}

	friend istream& operator>>(istream& intrare, Farmacie& f) {
		cout << "Nume:";
		intrare >> f.nume;
		cout << "Numar produse:";
		intrare >> f.nrProduse;
		if (f.produse) {
			delete[]f.produse;
		}
		f.produse = new ProdusFarmaceutic[f.nrProduse];
		for (int i = 0;i < f.nrProduse;i++) {
			intrare >> f.produse[i];
		}
		return intrare;
	}
};
float Farmacie::subventieStat = 0;

ostream& operator<<(ostream& iesire, Farmacie f) {
	iesire << f.getCUI() << endl;
	iesire << f.getNume() << endl;
	iesire << " are " << f.getNrProduse() << " produse:" << endl;
	for (int i = 0;i < f.getNrProduse();i++) {
		iesire << f[i];
	}
	iesire << endl << endl;
	return iesire;
}

void functie(Farmacie& f) {
	int a = f.getNrProduse();
}

Farmacie functie2() {
	Farmacie farmacie;
	return farmacie;
}

void main() {

	//Farmacie f;
	//Farmacie f2;
	//ProdusFarmaceutic pf("Paracetamol",20,10);
	////f.afisare();
	//f = f2 + pf;
	////f2.afisare();
	//f = pf + f;//fortat
	//f2 += pf;
	////f2.afisare();

	//ProdusFarmaceutic pf2("Nurofen", 30, 7);

	//if (pf <= pf2) {
	//	cout << pf.getDenumire() << " are valoare mai mica"<<endl;
	//}
	//else {

	//	cout << pf2.getDenumire() << " are valoare mai mica" << endl;
	//}

	//ProdusFarmaceutic pf3 = f2.getProdus(1);
	//ProdusFarmaceutic pf4 = f2[3];
	//f2[3] = pf2;
	//pf3 = f2[3];
	//cout << pf3.getDenumire();
	//
	//cout << f2<<endl;

	Farmacie f;
	cin >> f;
	cout << f;
	
}