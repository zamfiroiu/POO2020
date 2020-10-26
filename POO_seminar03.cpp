//#include<iostream>
//using namespace std;
//
//class Farmacie {
//private:
//	string nume;
//	int nrProduse;
//	string* denumiriProduse;
//	float* preturiProduse;
//	int* stocProduse;
//public:
//
//	Farmacie() {
//		this->nume = "Farmacia mea";
//		this->nrProduse = 3;
//		this->denumiriProduse = new string[this->nrProduse];
//		this->preturiProduse = new float[this->nrProduse];
//		this->stocProduse = new int[this->nrProduse];
//		this->denumiriProduse[0] = "Paracetamol";
//		this->denumiriProduse[1] = "Nurofen";
//		this->denumiriProduse[2] = "Aspirina";
//
//		for (int i = 0;i < this->nrProduse;i++) {
//			this->preturiProduse[i] = (i + 1) * 10;
//			this->stocProduse[i] = (i + 1) * 100;
//		}
//	}
//
//	Farmacie(string nume, int nrProduse, string* denumiri, float* preturi, int* stocuri) {
//		this->nume = nume;
//		this->nrProduse = nrProduse;
//		this->denumiriProduse = new string[this->nrProduse];
//		this->preturiProduse = new float[this->nrProduse];
//		this->stocProduse = new int[this->nrProduse];
//		for (int i = 0;i < this->nrProduse;i++) {
//			this->denumiriProduse[i] = denumiri[i];
//			this->preturiProduse[i] = preturi[i];
//			this->stocProduse[i] = stocuri[i];
//		}
//	}
//
//	Farmacie(string nume) {
//		this->nume = nume;
//		this->nrProduse = 0;
//		this->denumiriProduse = NULL;
//		this->preturiProduse = NULL;
//		this->stocProduse = NULL;
//	}
//
//	void afisare() {
//		cout << this->nume;
//		cout << " are " << this->nrProduse << " produse:" << endl;
//		for (int i = 0;i < this->nrProduse;i++) {
//			cout << "Produsul " << this->denumiriProduse[i] 
//				<< " costa " << this->preturiProduse[i]<<" RON "
//				<< " si mai avem " << this->stocProduse[i] 
//				<< " bucati"<<endl;
//		}
//		cout << endl << endl;
//	}
//};
//
//void main() {
//	/*Farmacie f;
//	f.afisare();
//	string nume = "FarmacieaDeLaColt";
//	int nrProduse = 3;
//
//	string* denumiriProduse = new string[nrProduse];
//	float* preturiProduse = new float[nrProduse];
//	int * stocProduse = new int[nrProduse];
//
//	for (int i = 0;i < nrProduse;i++) {
//		denumiriProduse[i] = "Paracetamol";
//		preturiProduse[i] = (i + 1) * 5;
//		stocProduse[i] = (i + 1) * 10;
//	}
//	Farmacie farmacie(nume, nrProduse, denumiriProduse, preturiProduse, stocProduse);
//	farmacie.afisare();
//
//	Farmacie farm("Farmacie", 2, new string[2]{ "Nurofen", "Aspirina" }, new float[2]{ 21,13 }, new int[2]{ 170,360 });
//	farm.afisare();
//
//	Farmacie farmacieNoua("Farmacie Noua");
//	farmacieNoua.afisare();
//
//	Farmacie* farmacii;
//	int nrFarmacii = 3;
//	farmacii = new Farmacie[nrFarmacii];
//
//	Farmacie** pointeriFarmacii;
//	pointeriFarmacii = new Farmacie * [2];
//	for (int i = 0;i < 2;i++) {
//		pointeriFarmacii[i] = new Farmacie("Farmacie");
//	}
//
//	int* vect = new int[5];*/
//
//
//
//}