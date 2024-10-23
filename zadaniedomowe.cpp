#include <iostream>
#include <string>

class Student {
private:
    // Prywatne pola, dostępne tylko wewnątrz klasy
    std::string imie;
    int wiek;
    float sredniaOcen;

public:
    // Konstruktor
    Student(std::string _imie, int _wiek, float _sredniaOcen) {
        imie = _imie;
        wiek = _wiek;
        sredniaOcen = _sredniaOcen;
    }

    // Getter dla imienia
    std::string getImie() {
        return imie;
    }

    // Setter dla imienia
    void setImie(std::string _imie) {
        imie = _imie;
    }

    // Getter dla wieku
    int getWiek() {
        return wiek;
    }

    // Setter dla wieku
    void setWiek(int _wiek) {
        if (_wiek > 0) {  // Dodanie prostego warunku walidacji
            wiek = _wiek;
        } else {
            std::cout << "Wiek musi być dodatni!" << std::endl;
        }
    }

    // Getter dla średniej ocen
    float getSredniaOcen() {
        return sredniaOcen;
    }

    // Setter dla średniej ocen
    void setSredniaOcen(float _sredniaOcen) {
        if (_sredniaOcen >= 0.0 && _sredniaOcen <= 6.0) {  // Zakładamy, że oceny są w skali 0-6
            sredniaOcen = _sredniaOcen;
        } else {
            std::cout << "Średnia ocen musi być w zakresie 0-6!" << std::endl;
        }
    }

    // Funkcja publiczna, która wyświetla informacje o studencie
    void wyswietlInformacje() {
        std::cout << "Imię: " << imie << ", Wiek: " << wiek << ", Średnia ocen: " << sredniaOcen << std::endl;
    }
};

int main() {
    // Tworzymy obiekt klasy Student
    Student s1("Jan", 20, 4.5);

    // Wyświetlamy informacje o studencie
    s1.wyswietlInformacje();

    // Modyfikujemy dane studenta za pomocą setterów
    s1.setImie("Anna");
    s1.setWiek(22);
    s1.setSredniaOcen(5.0);

    // Wyświetlamy zaktualizowane informacje
    s1.wyswietlInformacje();

    return 0;
}
