#include <iostream>
#include <thread>
#include <chrono>
#include "Item.hpp"
#include "PersonajeGuerrero.hpp"
#include "PersonajeAmistoso.hpp"
using namespace std;

int main() 
{
  //CREACION DE ITEMS
  Item* item1 = new Item("Manzana dorada" , "Una manzana que restaura la salud", 100);
  Item* item2 = new Item("Pocion de Salud", "Una poción que restaura la salud", 50);

  //CREACION DE MUNDOS

  Mundo* mundo6 = new Mundo("Madafania", "Reino de la Oscuridad", NULL, NULL,NULL);
  Mundo* mundo5 = new Mundo("CieloFuego", "Una nacion de dragones", NULL, NULL,mundo6);
  Mundo* mundo4 = new Mundo("Espectra", "Una nacion de los sueños", item1, NULL,mundo5);
  Mundo* mundo3 = new Mundo("Calavera", "Una nacion de piratas", NULL, NULL,mundo4);
  Mundo* mundo2 = new Mundo("Amazonia", "Una nacion de mujeres guerreras", item2, NULL,mundo3);
  Mundo* mundo1 = new Mundo("Eluryh", "Una nacion de paz y armonia", NULL, NULL,mundo2);

  //CREACION DE PERSONAJES SECUNDARIOS

  PersonajeGuerrero* p1 = new PersonajeGuerrero("Madafan basico", "El mas debil de los madafanes", mundo1, 100,100,10);
  mundo1->setPersonaje(p1);
  PersonajeAmistoso* p2 = new PersonajeAmistoso("Gilberta", "Una mujer enamorada de un madafan", mundo2,true,"Oh, viajero valiente, soy Gilberta, una humana atrapada en un amor no correspondido. Me he enamorado perdidamente de un troll negro, pero mi corazón solo conoce el dolor de la indiferencia. Sin embargo, puedo ayudarte en tu noble misión. En este oscuro y peligroso mundo, te ofrezco una Poción de Salud, un elixir que restaurará tus fuerzas en momentos de necesidad. Espero que encuentres la felicidad y el éxito en tu aventura. ¡Cuídate!");
  mundo2->setPersonaje(p2);
  PersonajeGuerrero* p3 = new PersonajeGuerrero("Madafan pirata", "Un madafan que se encuentra en la isla calavera",mundo3,150,150,20);
  mundo3->setPersonaje(p3);
  PersonajeAmistoso* p4 = new PersonajeAmistoso("Heredia", "Un mercader vanidoso", mundo4, true, "¡Saludos, querido aventurero! Soy Heredia, el ser más deslumbrante y encantador que haya pisado jamás estos mundos. Mi aspecto impecable y mi estilo inigualable son la envidia de todos. Pero, permíteme decirte algo, si deseas tener éxito en tu misión de liberar el mundo de los temidos Madafanes, debes encontrar la Espada del Destino, una reliquia legendaria capaz de derrotar incluso al más poderoso de los trolls negros. ¡Buena suerte en tu búsqueda!");
  mundo4->setPersonaje(p4);
  PersonajeGuerrero* p5 = new PersonajeGuerrero("Dragon negro","Guardian de la puerta de Madafania",mundo5,1000,1000,10);
  mundo5->setPersonaje(p5);
  PersonajeGuerrero* p6 = new PersonajeGuerrero("Rey de los Madafanes","El lider de la raza de los madafanes",mundo6,300,300,60);
  mundo6->setPersonaje(p6);
  
  //INTRODUCCION
  cout << "Bienvenvenido al juego de aventura" << endl;
  cout << "Ingrese cualquier tecla para continuar" << endl;
  cin.get();
  cout << "Ingrese su nombre: " << endl;
  string nombre;
  cin >> nombre;

  PersonajeGuerrero* jugador= new PersonajeGuerrero(nombre, "El heroe de Eluryh", mundo1, 500, 500, 20);

  cout << "Comenzando..." << endl;
  this_thread::sleep_for(chrono::milliseconds(1000));

  cout << "------------------------------------------------------------" << endl;
  cout << "En un mundo asolado por la oscuridad y el caos, los temibles trolls negros conocidos como Madafanes" << endl;
  cout << "han sumido a los mundos en el miedo y la destrucción. Sin embargo, surge un valiente héroe llamado " << endl;
  cout << nombre << ", quien se embarca en una misión para liberar el mundo de la opresión de los Madafanes y restaurar la paz." << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << " " << endl;
  cout << " " << endl;


  Mundo* mundoActual = mundo1;
  while(true){
      Personaje* personajeact = mundoActual->getPersonaje();
      mundoActual->mostrarMundo();
      jugador->imprime();

      break;
  }

 






}

