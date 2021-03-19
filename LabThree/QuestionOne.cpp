//
// Created by Clirim on 3/18/2021.
//

#include <iostream>
#include <cstring>

using namespace std;

class Potpisuvac {
    //vasiot kod ovde
    char ime[20];
    char prezime[20];
    char embg[14];
public:
    Potpisuvac(char *ime = " ", char *prezime = " ", char *embg = " ") {
        strcpy(this->ime, ime);
        strcpy(this->prezime, prezime);
        strcpy(this->embg, embg);
    };

    Potpisuvac(const Potpisuvac &other) {
        strcpy(this->ime, other.ime);
        strcpy(this->prezime, other.prezime);
        strcpy(this->embg, other.embg);
    };

    const char *getembg() {
        return embg;
    }

};

class Dogovor {
    //vasiot kod ovde
    int broj;
    char kategorija[50];
    Potpisuvac potpisuvac[3];
public:
    Dogovor(int broj, char kategorija[50], Potpisuvac potpisuvac[3]) {
        this->broj = broj;
        strcpy(this->kategorija, kategorija);
        for (int i = 0; i < 3; i++) {
            this->potpisuvac[i] = potpisuvac[i];
        }
    }

    bool proverka() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(strcmp(potpisuvac[i].getembg(), potpisuvac[j].getembg()) == 0 && i != j) {
                    return true;
                }

            }
        }
        return false;
    }
};


    int main() {
        char embg[14], ime[20], prezime[20], kategorija[50];
        int broj, n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> embg >> ime >> prezime;
            Potpisuvac p1(ime, prezime, embg);
            cin >> embg >> ime >> prezime;
            Potpisuvac p2(ime, prezime, embg);
            cin >> embg >> ime >> prezime;
            Potpisuvac p3(ime, prezime, embg);
            cin >> broj >> kategorija;
            Potpisuvac p[3];
            p[0] = p1;
            p[1] = p2;
            p[2] = p3;
            Dogovor d(broj, kategorija, p);
            cout << "Dogovor " << broj << ":" << endl;
            if (d.proverka())
                cout << "Postojat potpishuvaci so ist EMBG" << endl;
            else
                cout << "Ne postojat potpishuvaci so ist EMBG" << endl;
        }
        return 0;
    }

