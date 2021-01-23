#include<iostream>

using namespace std;

bool ilkSonRakam() {
	int sayi;
	cout << "Sayi giriniz:";
	cin >> sayi;
	int sonRakam = sayi % 10;

	while (sayi >= 10) {
		sayi = sayi / 10;
	}
	if (sayi == sonRakam) {
		cout << " sayiniz esittir" << endl;
		return true;
	}
	else {
		cout << "sayi esit degil";
		return false;
	}
	
}
int main(){

ilkSonRakam();

return 0;
}
