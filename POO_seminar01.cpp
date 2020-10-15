//#include<iostream>
//
//using namespace std;
//
struct Amenda {
	float valoare;
	char* motiv;
	bool estePenala;
};
//
//Amenda initializareAmenda(float valoare, const char* motiv, bool estePenala) {
//	Amenda amenda;
//	amenda.valoare = valoare;
//	amenda.motiv = new char[strlen(motiv) + 1];
//	strcpy(amenda.motiv, motiv);
//	amenda.estePenala = estePenala;
//
//	return amenda;
//}
//
//void afisareAmenda(Amenda a) {
//	cout << a.motiv << " " << a.valoare << " " << a.estePenala << "." << endl;
//}
//
//void aplicaReducereAmenda(Amenda *amenda) {
//	(*amenda).valoare -= 50;
//}
//
//void aplicaReducereSuplimentaraAmenda(Amenda& amenda) {
//	amenda.valoare -= 100;
//}
//
//void main() {
//	Amenda amenda1 = initializareAmenda(300, "Nepurtare masca", false);
//	afisareAmenda(amenda1);
//	//delete[]amenda1.motiv;
//
//	Amenda* pa1 = &amenda1;
//
//	//(*pa1).valoare = 310;
//	pa1->valoare = 500;
//	afisareAmenda(*pa1);
//	afisareAmenda(amenda1);
//
//	aplicaReducereAmenda(&amenda1);
//
//	afisareAmenda(amenda1);
//
//	aplicaReducereSuplimentaraAmenda(amenda1);
//
//	afisareAmenda(amenda1);
//
//	Amenda* pa2;
//
//	pa2 = new Amenda();
//	pa2->valoare = 200;
//	pa2->motiv = new char[strlen("Nepurtare centura")+1];
//	strcpy(pa2->motiv, "Nepurtare centura");
//	pa2->estePenala = false;
//	afisareAmenda(*pa2);
//
//	Amenda* pa3;
//	int nrAmenzi = 3;
//	pa3 = new Amenda[nrAmenzi];
//	//pa3->valoare = 100;
//	(*pa3).valoare = 100;//pa3[0].valoare=100
//	//(*(pa3 + 1)).valoare = 200;//pa3[1].valoare=200;
//	(pa3 + 1)->valoare = 200;//pa3[1].valoare=200;
//	(pa3 + 2)->valoare = 300;//pa3[2].valoare=300;
//
//	for (int i = 0;i < nrAmenzi;i++) {
//		cout << (pa3 + i)->valoare << " ";
//		cout << pa3[i].valoare << endl;
//	}
//
//	Amenda** pa4;
//	//o matrice
//	//o adresa la adresa la un element
//	//adresa unui vector de elemente
//	//vector de adrese;
//
//	pa4 = new Amenda * [2];
//	for (int i = 0;i < 2;i++) {
//		pa4[i] = new Amenda[2];
//		pa4[i]->valoare = (i + 1) * 50;
//	}
//
//
//
//}