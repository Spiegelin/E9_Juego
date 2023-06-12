#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() 
{
  cout << "Bienvenvenido al juego de aventura" << endl;
  cout << "Ingrese cualquier tecla para continuar" << endl;
  cin.get();
  cout << "Ingrese su nombre: " << endl;
  string nombre;
  cin >> nombre;

  cout << "Comenzando..." << endl;
  this_thread::sleep_for(chrono::milliseconds(1000));

  cout << "En un mundo asolado por la oscuridad y el caos, los temibles trolls negros conocidos como Madafanes" << endl;
  cout << "han sumido a los mundos en el miedo y la destrucción.Sin embargo, surge un valiente héroe llamado" << endl;
  cout << nombre << ", quien se embarca en una misión para liberar el mundo de la opresión de los Madafanes y restaurar la paz." << endl;
}

