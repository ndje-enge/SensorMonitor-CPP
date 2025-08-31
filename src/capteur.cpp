#include "capteur.hpp"

Capteur::Capteur(const std::string& nom) : nom(nom) {}

Capteur::~Capteur() {}

std::string Capteur::getNom() const {
    return nom;
}