//#include<iostream>
//
//using namespace std;
//
//struct Copac {
//	int inaltime;//in cm
//	float varsta;//in ani;
//	char *specie;
//};
//
//void afisareCopac(Copac pom) {
//	cout << pom.inaltime<<endl;
//	cout << pom.varsta << endl;
//	cout << pom.specie << endl;
//}
//
//void main() {
//	Copac copac;
//	copac.inaltime = 245;
//	copac.varsta = 2.1;
//	//brad
//	//copac.specie = (char*)malloc((strlen("brad") + 1) * sizeof(char));
//
//	copac.specie = new char[strlen("brad") + 1];
//	strcpy(copac.specie, "brad");	
//
//	afisareCopac(copac);
//
//	delete []copac.specie;
//	copac.specie = NULL;
//
//};