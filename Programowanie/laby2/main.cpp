#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

class Data {
    public:
    int dzien;
    int miesiac;
    int rok;
    Data(int d, int m, int r) {
        dzien = d;
        miesiac = m;
        rok = r;
    }
};
void DataOdUrodzin(int dzienUrodzin, int miesiacUrodzin, int rokUrodzin) {
    time_t t = time(nullptr);
    tm* now = localtime(&t);
     Data dzisiaj(now->tm_mday,now->tm_mon + 1,now->tm_year + 1900);
    Data urodziny(dzienUrodzin, miesiacUrodzin, rokUrodzin);
   
   int latodUrodzenia = dzisiaj.rok - urodziny.rok;
   int miesiacodUrodzenia;
   if(miesiacUrodzin >= dzisiaj.miesiac) {
       latodUrodzenia--;
       miesiacodUrodzenia = 12 - (miesiacUrodzin - dzisiaj.miesiac);
   } else {
       miesiacodUrodzenia = dzisiaj.miesiac - miesiacUrodzin;
   }
   int dzienodUrodzenia;
   if(dzienUrodzin >= dzisiaj.dzien) {
       miesiacodUrodzenia--;
       dzienodUrodzenia = 30 - (dzienUrodzin - dzisiaj.dzien);
   } else {
       dzienodUrodzenia = dzisiaj.dzien - dzienUrodzin;
   }
    cout << "Masz " << latodUrodzenia << " lat, " << miesiacodUrodzenia << " miesiecy i " << dzienodUrodzenia << " dni." << endl;
}
void zamienSekundyNaCzas(int sekundy) {
    int godziny = sekundy / 3600;
    int minuty = (sekundy % 3600) / 60;
    int pozostaleSekundy = sekundy % 60;

    cout << sekundy << " sekund to: " << godziny << ":" << minuty << ":" << pozostaleSekundy << endl;
}
void poleTrojkataZTrzechBokow(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double pole = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Pole trojkata o bokach " << a << ", " << b << ", " << c << " wynosi: " << pole << endl;
}
int main() {
    // int dzienUrodzin, miesiacUrodzin, rokUrodzin;
    // cout << "Podaj dzien urodzin: ";
    // cin >> dzienUrodzin;
    // cout << "Podaj miesiac urodzin: ";
    // cin >> miesiacUrodzin;
    // cout << "Podaj rok urodzin: ";
    // cin >> rokUrodzin;
    // DataOdUrodzin(dzienUrodzin, miesiacUrodzin, rokUrodzin);

    // int ileSekund;
    // cout << "Podaj ilosc sekund: ";
    // cin >> ileSekund;
    // zamienSekundyNaCzas(ileSekund);

    double a, b, c;
    cout << "Podaj dlugosc boku a: ";
    cin >> a;
    cout << "Podaj dlugosc boku b: ";
    cin >> b;
    cout << "Podaj dlugosc boku c: ";
    cin >> c;
    poleTrojkataZTrzechBokow(a,b,c);

    return 0;
}