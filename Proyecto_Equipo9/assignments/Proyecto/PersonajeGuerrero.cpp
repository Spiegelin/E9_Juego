#include "PersonajeGuerrero.hpp"
#include <cstdlib> // Para los números aleatorios

// Constructores
PersonajeGuerrero::PersonajeGuerrero(){}

PersonajeGuerrero::PersonajeGuerrero(std::string _nombre, std::string _desc, Mundo* _ubi, int _saludTotal, int _saludActual, int _maxAtaque):Personaje(_nombre, _desc, _ubi) {
    saludTotal = _saludTotal;
    saludActual = _saludActual;
    maxAtaque = _maxAtaque;
}

// Destructor
PersonajeGuerrero::~PersonajeGuerrero(){}

// Getters
int PersonajeGuerrero::getSaludTotal() {
    return saludTotal;
}

int PersonajeGuerrero::getSaludActual() {
    return saludActual;
}

int PersonajeGuerrero::getMaxAtaque() {
    return maxAtaque;
}

// Setters
void PersonajeGuerrero::setSaludTotal(int _saludTotal) {
    saludTotal = _saludTotal;
}

void PersonajeGuerrero::setSaludActual(int _saludActual) {
    // Evitar valores negativos
    if (_saludActual < 0) {
        saludActual = 0;
    } else {
        saludActual = _saludActual;
    } 
}

void PersonajeGuerrero::getMaxAtaque(int _maxAtaque) {
    maxAtaque = _maxAtaque;
}

// Métodos
bool PersonajeGuerrero::isAlive() {
    if (getSaludActual() > 0) {
        return true;
    } else {
        return false;
    }
}

int PersonajeGuerrero::porcentajeSalud()  {
    return ((getSaludTotal() - getSaludActual()) * 100) / getSaludTotal();
}

void PersonajeGuerrero::barraVida() {
    int max = 20;
    int cantP = (porcentajeSalud() * max) / 100;
    int cantI = max - cantP;

    for (int i=0; i < cantP;i++) {
        std::cout << "%";
    }

    for (int i=0;i < cantP; i++) {
        std::cout << "=";
    }
    std::cout << std::endl;
}

void PersonajeGuerrero::imprime() {
    Personaje::imprime();
    std::cout << "SALUD: "; barraVida(); std::cout << std::endl;
    std::cout << "-------------------------------------" << std::endl;
}

int PersonajeGuerrero::juega() {
    int num = std::rand() % getMaxAtaque()+1; // de 0 al ataque Máximo
    std::cout << "-------------------------------------" << std::endl;
    std::cout << Personaje::getNombre() << "REALIZÓ UN ATAQUE DE " << num << "PUNTOS DE SALUD" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    return num;
}

void PersonajeGuerrero::recibeInteraccion(int num) {
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "OHHHH NO " << Personaje::getNombre() << " RECIBISTE " << num << "PUNTOS DE DAÑO" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    setSaludActual(getSaludActual() - num);

    if (getSaludActual() <= 0) {
        std::cout << "...MORISTE..." << std::endl;
        std::cout << "-------------------------------------" << std::endl;
    } else {
        imprime();
    }
}