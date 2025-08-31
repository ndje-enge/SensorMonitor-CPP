#include <iostream>
#include <cstdlib>  
#include <ctime>   
#include <vector>
#include "capteur.hpp"


class CapteurTemperature : public Capteur {
public:
    CapteurTemperature() : Capteur("Capteur de température") {}

    double lireValeur() override {
        // Simule une température entre 20.0 et 30.0
        return 20.0 + static_cast<double>(rand() % 1000) / 100.0;
    }
};


class CapteurPression : public Capteur {
public:
    CapteurPression() : Capteur("Capteur de pression") {}

    double lireValeur() override {
        // Simule une pression entre 990 et 1020 hPa
        return 990.0 + static_cast<double>(rand() % 300) / 10.0;
    }
};

int main() {
    srand(static_cast<unsigned>(time(nullptr))); // init aléatoire

    // Tableau de capteurs
    std::vector<Capteur*> capteurs;
    capteurs.push_back(new CapteurTemperature());
    capteurs.push_back(new CapteurPression());

    // Lire 5 valeurs pour chaque capteur
    for (Capteur* capteur : capteurs) {
        std::cout << "Nom du capteur : " << capteur->getNom() << std::endl;

        for (int i = 0; i < 5; ++i) {
            double valeur = capteur->lireValeur();
            std::cout << "  Lecture " << i + 1 << " : " << valeur;

            if (capteur->getNom().find("température") != std::string::npos) {
                std::cout << " °C";
            } else {
                std::cout << " hPa";
            }

            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    // Libération mémoire
    for (Capteur* capteur : capteurs) {
        delete capteur;
    }

    return 0;
}
