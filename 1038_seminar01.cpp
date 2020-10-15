//#include<iostream>
//
//using namespace std;
//
//struct Oras {
//	int nrLocuitori;
//	float suprafata;
//	char *numeOras;
//};
//
//
//void afisareOras(Oras o) {
//	cout << o.nrLocuitori<<endl;
//	cout << o.suprafata << endl;
//	cout << o.numeOras << endl;
//}
//
//void main() {
//	Oras oras;
//	oras.nrLocuitori = 1000;
//	oras.suprafata = 34.6;
//
//	//Iasi
//	//oras.numeOras = (char*)malloc(sizeof(char) * (strlen("Iasi") + 1));
//	oras.numeOras = new char[strlen("Iasi") + 1];
//	strcpy(oras.numeOras, "Iasi");
//
//	afisareOras(oras);
//
//	delete []oras.numeOras;
//
//	oras.numeOras = NULL;
//};
//
