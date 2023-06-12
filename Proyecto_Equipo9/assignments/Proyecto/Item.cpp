#include "Item.hpp"
#include <iostream>

Item::Item(){
    this->nombre = "";
    this->descripcion = "";
    this->puntos = 0;
}

Item::Item(std::string nombre, std::string descripcion, int puntos){
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->puntos = puntos;
}


std::string Item::getNombre(){
    return this->nombre;
}

std::string Item::getDescripcion(){
    return this->descripcion;
}

int Item::getPuntos(){
    return this->puntos;
}

void Item::setNombre(std::string nombre){
    this->nombre = nombre;
}

void Item::setDescripcion(std::string descripcion){
    this->descripcion = descripcion;
}

void Item::mostrarItem(){
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Descripcion: " << this->descripcion << std::endl;
    std::cout << "Puntos: " << this->puntos << std::endl;
}