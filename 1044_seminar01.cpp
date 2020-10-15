//#include<iostream>
//using namespace std;
//
//struct CorpMobila {
//	int inaltime;
//	float greutate;
//	char* culoare;
//};
//
//void main() {
//	CorpMobila cm;
//	cm.inaltime = 100;
//	cm.greutate = 5.7;
//	//verde
//	//cm.culoare = (char*)malloc(sizeof(char) * (strlen("verde") + 1));
//	cm.culoare = new char[strlen("verde") + 1];
//	strcpy(cm.culoare, "Verde");
//	cout << cm.culoare << endl;
//	cout << cm.inaltime << endl;
//	cout << cm.greutate << endl;
//	delete []cm.culoare;
//	cm.culoare = NULL;
//};