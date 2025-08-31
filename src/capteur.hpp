#ifndef CAPTEUR_HPP
#define CAPTEUR_HPP

#include <string>

class Capteur {
protected:
    std::string nom;

public:
    Capteur(const std::string& nom);
    virtual ~Capteur();

    virtual double lireValeur() = 0; // méthode abstraite
    std::string getNom() const;
};

#endif // CAPTEUR_HPP