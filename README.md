# SensorMonitor - C++

A C++ sensor simulation project for object-oriented programming and preparation for embedded environments.

## Description

This project implements a sensor simulation system in C++ using object-oriented programming. It demonstrates the use of abstract classes, inheritance, and polymorphism to create different types of sensors (temperature, pressure).

## Features

- **Abstract `Capteur` class** : Base interface for all sensors
- **Temperature sensor** : Simulates temperature readings between 20.0°C and 30.0°C
- **Pressure sensor** : Simulates pressure readings between 990 hPa and 1020 hPa
- **Extensible system** : Easy to add new sensor types

## Project Structure

```
SensorMonitor/
├── src/
│   ├── capteur.hpp      # Abstract Capteur class
│   ├── capteur.cpp      # Capteur class implementation
│   └── main.cpp         # Main program with demonstration
├── makefile             # Compilation script
├── .gitignore          # Files to ignore by Git
└── README.md           # This file
```

## Prerequisites

- C++17 compatible compiler (g++, clang++, etc.)
- Make (for compilation)

## Compilation and Execution

```bash
# Compile the project
make

# Run the program
./sensor_monitor
```

## Example Output

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

## Cleanup

```bash
# Remove compiled files
make clean
```

## Architecture

The project uses the **Template Method** design pattern with an abstract `Capteur` class that defines the common interface for all sensors. Each concrete sensor implements the pure virtual method `lireValeur()` to provide its own simulated data.

## Possible Extensions

- Adding new sensor types (humidity, light, etc.)
- Graphical interface for data visualization
- Data saving to file
- Network communication to simulate remote sensors
- Interface for embedded environment (Arduino, Raspberry Pi)


