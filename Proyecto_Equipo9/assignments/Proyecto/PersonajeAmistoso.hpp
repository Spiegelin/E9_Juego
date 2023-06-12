#pragma once

#include "Personaje.hpp"

class PersonajeAmistoso: public Personaje {
    public:
        // Constructores
        PersonajeAmistoso();
        PersonajeAmistoso(std::string, std::string, Mundo*, bool, std::string);
        
        // Getters
        bool getEstatus();
        std::string getHistoria();

        // Setters
        void setEstatus(bool);
        void setHistoria(std::string);

        // Métodos
        int juega() override;
        void recibeInteraccion(int) override;
    private:
        bool estatus;
        std::string historia;
};