// Valtteri Ahonen
// Harjoitus 13
// 2.10.2013

#include <iostream> 
using namespace std; 
#include <cstring> 

int main(void) 
{ 
	char etun[50] = " ", sukun[25] = " ", space[2] = " "; // Space on nimien erottimeksi
	cout << "Anna etunimesi: ";
	cin.get(etun, 50); // cin.get, jotta voi halutessaan antaa useita etunimiä
	cout << "Anna sukunimesi: ";
	cin >> sukun;
	/*cin.get();
	cin.get(sukun, 25);*/

	strcat_s(etun, space); // Ensin space etunimen perään
	strcat_s(etun, sukun); // Sitten sukunimi spacen perään

	cout << endl << "Nimesi on siis " << etun << "." << endl << endl; // Tulostetaan nimi

}