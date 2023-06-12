#include "Mundo.hpp"


Mundo::Mundo(){
    this->nombre = "";
    this->descripcion = "";
    this->mundosiguiente = NULL;
    this->items = NULL;
    this->refpersonaje = NULL;
}

Mundo::Mundo(std::string nombre, std::string descripcion, Item* items, Personaje* refpersonaje){
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->mundosiguiente = NULL;
    this->items = items;
    this->refpersonaje = refpersonaje;
}

Mundo::~Mundo(){
    delete this->items;
    delete this->refpersonaje;
}

std::string Mundo::getNombre(){
    return this->nombre;
}

std::string Mundo::getDescripcion(){
    return this->descripcion;
}

void Mundo::setNombre(std::string nombre){
    this->nombre = nombre;
}

void Mundo::setDescripcion(std::string descripcion){
    this->descripcion = descripcion;
}

void Mundo::setMundoSiguiente(Mundo* mundosiguiente){
    this->mundosiguiente = mundosiguiente;
}

void Mundo::mostrarMundo(){
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Descripcion: " << this->descripcion << std::endl;
}