//#include<iostream>
//
//using namespace std;
//
//struct Carte {
//	int nrPagini;
//	char* titlu;
//	float pret;
//};
//
//void afisareCarte(Carte carte) {
//	std::cout << "Cartea " << carte.titlu;
//	cout << " are " << carte.nrPagini << " pagini si costa " << carte.pret << " lei." << endl;
//}
//
//void main() {
//	Carte c1;
//	c1.nrPagini = 300;
//	c1.pret = 30;
//	//Ion
//	c1.titlu = new char[strlen("Ion") + 1];
//
//	strcpy(c1.titlu,"Ion");
//	
//	afisareCarte(c1);
//
//	delete []c1.titlu;
//	c1.titlu = NULL;
//};
