#include "PersonajeAmistoso.hpp"

// Constructores
PersonajeAmistoso::PersonajeAmistoso(){}

PersonajeAmistoso::PersonajeAmistoso(std::string _nombre, std::string _desc, Mundo* _ubi, bool _estatus, std::string _historia):Personaje(_nombre, _desc, _ubi) {
    estatus = _estatus;
    historia = _historia;
}

// Destructor
PersonajeAmistoso::~PersonajeAmistoso(){}

// Getters
bool PersonajeAmistoso::getEstatus() {
    return estatus;
}

std::string PersonajeAmistoso::getHistoria() {
    return historia;
}

// Setters
void PersonajeAmistoso::setEstatus(bool _estatus) {
    estatus = _estatus;
}

void PersonajeAmistoso::setHistoria(std::string _historia) {
    historia = _historia;
}

// Métodos
int PersonajeAmistoso::juega() {
    if (getEstatus()) {
        // Despliega su historia y quién es
        std::cout << "-------------------------------------" << std::endl;
        Personaje::imprime();
        std::cout << "MI HISTORIA" << std::endl;
        std::cout << historia << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        
        // Indica que item está en el cuarto
        std::cout << "EL ITEM QUE SE ENCUENTRA EN ESTE MUNDO ES:" << std::endl;
        Personaje::getUbi() -> getItem() -> getDescripcion();
        std::cout << "-------------------------------------" << std::endl;
        return Personaje::getUbi() -> getItem() -> getPuntos();
    } else {
        std::cout << "-------------------------------------" << std::endl;
        Personaje::imprime();
        std::cout << "NO ESTÁ DISPUESTO A HABLARTE" << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        return 0;
    }
}

void PersonajeAmistoso::recibeInteraccion(int num) {
    if (num > 3) {
        juega();
    } else {
        std::cout << "-------------------------------------" << std::endl;
        std::cout << Personaje::getNombre() << "ESTÁ DORMIDO, NO LO MOLESTES" << std::endl;
        std::cout << "-------------------------------------" << std::endl;
    }
}