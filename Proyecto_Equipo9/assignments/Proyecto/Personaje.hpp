#pragma once

#include <iostream>
#include "Mundo.hpp"

class Mundo;

class Personaje {
    public:
        // Constructores
        Personaje();
        Personaje(std::string, std::string, Mundo*);

        // Destructor
        ~Personaje();

        // Getters
        std::string getNombre();
        std::string getDesc();
        Mundo* getUbi();

        // Setters
        void setNombre(std::string);
        void setDesc(std::string);
        void setUbi(Mundo*);

        // Métodos
        virtual void imprime();
        virtual int juega() = 0;
        virtual void recibeInteraccion(int) = 0;
    private:
        std::string nombre;
        std::string desc;
        Mundo* ubi;
};