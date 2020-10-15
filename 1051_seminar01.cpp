//#include<iostream>
//
//using namespace std;
//
//struct ContBancar {
//	char *detinator;
//	char iban[25];
//	float balanta;
//	int vechime;
//};
//
//void afisareContBancar(ContBancar cont) {
//	cout << cont.detinator<<endl;
//	cout << cont.iban << endl;
//	cout << cont.balanta << endl;
//	cout << cont.vechime << endl;
//}
//
////std::cout << sizeof(cb); 40 instead of 37
//void main()
//{
//	ContBancar cb;
//	cb.balanta = 350;
//	cb.vechime = 24;
//	strcpy(cb.iban, "Ro12345678901234456");
//	//Vasile
//	//cb.detinator = (char*)malloc(sizeof(char) * (strlen("Vasile") + 1));
//	cb.detinator = new char[strlen("Vasile") + 1];
//	strcpy(cb.detinator, "Vasile");
//
//	afisareContBancar(cb);
//
//	delete []cb.detinator;
//	cb.detinator = NULL;
//
//
//};