# SensorMonitor - C++

Un projet C++ de simulation de capteurs pour la programmation orientée objet et se préparer à un environnement embarqué.

## Description

Ce projet implémente un système de simulation de capteurs en C++ utilisant la programmation orientée objet. Il démontre l'utilisation de classes abstraites, l'héritage et le polymorphisme pour créer différents types de capteurs (température, pression).

## Fonctionnalités

- **Classe abstraite `Capteur`** : Interface de base pour tous les capteurs
- **Capteur de température** : Simule des lectures de température entre 20.0°C et 30.0°C
- **Capteur de pression** : Simule des lectures de pression entre 990 hPa et 1020 hPa
- **Système extensible** : Facile d'ajouter de nouveaux types de capteurs

## Structure du projet

```
SensorMonitor/
├── src/
│   ├── capteur.hpp      # Classe abstraite Capteur
│   ├── capteur.cpp      # Implémentation de la classe Capteur
│   └── main.cpp         # Programme principal avec démonstration
├── makefile             # Script de compilation
├── .gitignore          # Fichiers à ignorer par Git
└── README.md           # Ce fichier
```

## Prérequis

- Compilateur C++ compatible C++17 (g++, clang++, etc.)
- Make (pour la compilation)

## Compilation et exécution

```bash
# Compiler le projet
make

# Exécuter le programme
./sensor_monitor
```

## Exemple de sortie

```
Nom du capteur : Capteur de température
  Lecture 1 : 25.67 °C
  Lecture 2 : 22.34 °C
  Lecture 3 : 28.91 °C
  Lecture 4 : 24.12 °C
  Lecture 5 : 26.78 °C

Nom du capteur : Capteur de pression
  Lecture 1 : 1012.3 hPa
  Lecture 2 : 1005.7 hPa
  Lecture 3 : 1018.9 hPa
  Lecture 4 : 1008.2 hPa
  Lecture 5 : 1015.6 hPa
```

## Nettoyage

```bash
# Supprimer les fichiers compilés
make clean
```

## Architecture

Le projet utilise le pattern de conception **Template Method** avec une classe abstraite `Capteur` qui définit l'interface commune pour tous les capteurs. Chaque capteur concret implémente la méthode virtuelle pure `lireValeur()` pour fournir ses propres données simulées.

## Extensions possibles

- Ajout de nouveaux types de capteurs (humidité, luminosité, etc.)
- Interface graphique pour visualiser les données
- Sauvegarde des données dans un fichier
- Communication réseau pour simuler des capteurs distants
- Interface pour environnement embarqué (Arduino, Raspberry Pi)

## Licence

Ce projet est fourni à des fins éducatives.
