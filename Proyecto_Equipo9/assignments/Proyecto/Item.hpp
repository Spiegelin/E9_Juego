#pragma once
#include <iostream>


class Item {

private:
    std::string nombre;
    std::string descripcion;
    int puntos;

public:
    Item();
    Item(std::string, std::string, int);
    ~Item();
    std::string getNombre();
    std::string getDescripcion();
    void setNombre(std::string);
    void setDescripcion(std::string);
    void mostrarItem();
};