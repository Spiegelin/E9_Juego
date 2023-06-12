#include "PersonajeGuerrero.hpp"

// Constructores
PersonajeGuerrero::PersonajeGuerrero(){}

PersonajeGuerrero::PersonajeGuerrero(std::string _nombre, std::string _desc, Mundo* _ubi, int _saludTotal, int _saludActual, int _maxAtaque):Personaje(_nombre, _desc, _ubi) {
    saludTotal = _saludTotal;
    saludActual = _saludActual;
    maxAtaque = _maxAtaque;
}

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
    saludActual = _saludActual;
}

void PersonajeGuerrero::getMaxAtaque(int _maxAtaque) {
    maxAtaque = _maxAtaque;
}

// Métodos
bool isAlive();
int porcentajeSalud();
void barraVida();
void imprime() override;
int juega() override;
void recibeInteraccion(int) override;