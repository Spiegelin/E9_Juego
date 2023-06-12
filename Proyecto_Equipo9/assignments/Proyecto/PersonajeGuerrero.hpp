#pragma once

#include "Personaje.hpp"

class PersonajeGuerrero: public Personaje {
    public:
        // Constructores
        PersonajeGuerrero();
        PersonajeGuerrero(std::string, std::string, Mundo*, int, int, int);

        // Destructor
        ~PersonajeGuerrero();

        // Getters
        int getSaludTotal();
        int getSaludActual();
        int getMaxAtaque();

        // Setters
        void setSaludTotal(int);
        void setSaludActual(int);
        void getMaxAtaque(int);

        // Métodos
        bool isAlive();
        int porcentajeSalud();
        void barraVida();
        void imprime() override;
        int juega() override;
        void recibeInteraccion(int) override;
    private:
        int saludTotal;
        int saludActual;
        int maxAtaque;
};