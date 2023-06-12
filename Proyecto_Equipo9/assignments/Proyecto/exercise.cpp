#include <iostream>
#include <thread>
#include <chrono>
#include "Item.hpp"
#include "PersonajeGuerrero.hpp"
#include "PersonajeAmistoso.hpp"
using namespace std;

int main() 
{
  //CREACION DE MUNDOS
  Mundo mundo1("Eluryh", "Una nación de paz y armonia", NULL, NULL);
  Mundo mundo2("Amazonia", "Una nación de mujeres guerreras", NULL, NULL);
  Mundo mundo3("Calavera", "Una nación de piratas", NULL, NULL);
  Mundo mundo4("Espectra", "Una nación de los sueños", NULL, NULL);
  Mundo mundo5("CieloFuego", "Una nación de dragones", NULL, NULL);
  Mundo mundo6("Madafania", "Reino de la Oscuridad", NULL, NULL);


  //INTRODUCCION
  cout << "Bienvenvenido al juego de aventura" << endl;
  cout << "Ingrese cualquier tecla para continuar" << endl;
  cin.get();
  cout << "Ingrese su nombre: " << endl;
  string nombre;
  cin >> nombre;

  PersonajeGuerrero jugador(nombre, "El heroe de Eluryh", NULL, 500, 500, 10);

  cout << "Comenzando..." << endl;
  this_thread::sleep_for(chrono::milliseconds(1000));

  cout << "En un mundo asolado por la oscuridad y el caos, los temibles trolls negros conocidos como Madafanes" << endl;
  cout << "han sumido a los mundos en el miedo y la destrucción. Sin embargo, surge un valiente héroe llamado " << endl;
  cout << nombre << ", quien se embarca en una misión para liberar el mundo de la opresión de los Madafanes y restaurar la paz." << endl;

  //CREACION DE PERSONAJES SECUNDARIOS



}

