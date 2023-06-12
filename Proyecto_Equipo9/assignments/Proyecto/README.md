# Proyecto - Resolución de la situación problema

En esta parte puedes explicar de qué se trata tu proyecto y qué clases contiene brevemente.

## Descripción básica de la carpeta Proyecto

*Dentro de la carpeta Proyecto agrega los archivos necesarios para la solución de tu proyecto, no olvides que para compilar debes moverte a la carpeta Proyecto con el comando cd assignments/Proyecto*

La carpeta contiene el código fuente y el archivo de construcción ```make```.

La carpeta `build` contiene el codigo binario generado por el archivo de construcción ```make```.

Consulta el archivo assignments/README.md para instrucciones sobre la compilación y ejecución del proyecto.

En este proyecto a consola (sólo textual) es muy importante el uso de los temas del curso: Herencia, polimorfismo, clases abstractas, sobrecarga de operadores y manejo de excepciones.

En este juego tendremos un jugador, de 3 a 5 cuartos/mundos que se exploran de manera sucesiva, ítems y de 3 a 5 personajes, uno en cada cuarto/mundo con los que el jugador interactuará de alguna manera.

Los personajes en los cuartos serán distintos, pueden ser solamente aquellos que cuenten una historia y que te digan qué obtienes al entrar, permiten el libre paso por el mundo.

Por otro lado, estarán aquellos magos negros, trolls o como les quieras decir, los cuáles serán personajes antagónicos en tu juego y con los cuales deberás luchar para poder pasar al siguiente mundo. En el mundo donde haya uno de estos personajes, no habrá ítems o regalos. Si pierdes contra el personaje, pierdes el juego. El juego deberá decirte contra quien perdiste y en qué mundo.

Todos los personajes del juego tienen:

Un nombre.
Una descripción.
Una ubicación (cuarto/mundo). (Apuntador a mundo)
Un imprime que despliega con un bonito formato su nombre y ubicación.
Tienen además un método abstracto que se llama juega/actúa o como quieras llamarlo, lo que deberá hacer es que el personaje lleve a cabo la acción para lo cual está destinado. Devuelve un entero.
Además, un método abstracto que se llama recibeInteracción o como quieras llamarlo, el cual recibe un entero, no devuelve nada. Deberá actuar de acuerdo al personaje del que se trate.
El jugador principal y los que pelean en los cuartos son personajes "guerreros" (o como quieras llamarlos) y aparte de tener todo lo anterior, tienen:

Puntos de salud totales (lo máximo que tiene al inicio del juego)
Puntos de salud actuales.
Debe tener también un valor entero que represente el máximo valor de ataque.
Necesitas un método que te diga si el personaje está vivo o no. Un personaje está vivo si aún tiene puntos salud.
El personaje debe poder calcular su porcentaje de salud, de manera que necesitas un método que devuelva un int entre 0 y 100. Se calcula usando los valores de puntos de salud totales y los actuales.
El personaje debe ser capaz de imprimir su barra de vida. Su barra de vida, en realidad son 20 caracteres que indican el % de vida que tiene el personaje. Por ejemplo puedes poner un % para indicar vida y un = o un . o cualquier otro caracter que tu decidas el cual indicará lo perdido. Así un 80% de vida pudiera mostrarse como: %%%%%%%%%%%%%%%%====
El imprime de estos personajes debe imprimir aparte de nombre y ubicación, su barra de vida.
El método actúa/juega deberá elegir un número aleatorio entre 0 y el máximo que tienes de ataque, se imprime a pantalla un mensaje que podría ser: “NombrePersonaje ataca con x puntos salud” (el mensaje lo puedes determinar tú) donde x es el valor del número aleatorio obtenido, además devuelve ese número.
El método recibeInteracción recibe una cantidad entera que representará la cantidad de daño que te hace otro personaje, lo primero que debes hacer es desplegar un mensaje que diga “NombrePersonaje recibiste x daño” donde x es el valor entero que recibe el método. Deberá actualizar su valor de vida actual (en este punto debes ser cuidadoso, si lo que perdiste te lleva a números negativos, has que se actualice sólo a 0 su salud actual), si el personaje aún se encuentra con vida despliega su barra de vida y si no despliega el mensaje el personaje a muerto.
También tendremos a los personajes “amistosos” que sólo nos cuentan una historia. Si el jugador entre a un cuarto donde está este tipo de personajes, el personaje solamente despliega a pantalla la historia o el diálogo y le indica al personaje tomar el item del cuarto/mundo. Este tipo de personajes además de lo que tienen los Personajes comunes, tienen lo siguiente:

Un estatus que indica que si está o no dispuesto a hablar.
Una historia o diálogo
El método juega/actúa en este tipo de personajes, si su estatus es de querer hablar, despliegan la historia. Además de desplegar la descripción del item que hay en el cuarto/mundo y devuelve un entero que representa la cantidad de Salud que proporciona el item del cuarto/mundo. Si su estatus es de no querer hablar, sólo dicen que “No están dispuestos a hablar”.
El método recibeInteraccion recibe un entero. Si el entero en mayor a 3, se activa el método jugar de este personaje. En caso de que no sea así, se despliega un mensaje “NombrePersonaje dormido”
Los ítems pueden ser elementos que otorgan puntos de salud. Tienen las siguientes características:

Nombre
Puntos que otorgan
Imprime que despliega a pantalla lo que son y los puntos que otorgan.
Los cuartos o mundos son ubicaciones dentro de tu juego. Tienen las siguientes características:

Nombre
Mundo Siguiente, el cual es una referencia al mundo que se encuentra a continuación. Recuerda que estarán de manera lineal, de un mundo solo puedes pasar al siguiente, no se puede regresar.
Un item, el cual puede ser nulo si no hay item en ese mundo o puede ser la referencia o apuntador a un item que se encuentra en ese mundo.
Debe tener su método imprime que puede desplegar el nombre del mundo y si tu quieres alguna descripción, si quieres descripción del mundo, deberías agregarla como característica.
NOTA: Te recomiendo que en el mundo, el item y el cuarto siguiente sean apuntadores.

En el programa principal deberás crear de 3 a 5 mundos (te recomiendo que los crees dinámicamente, de maner que tus variables son apuntadores), y una cantidad igual de Personajes. Asegúrate de poner personajes Guerreros o Amistosos como gustes, pero que haya de los 2 tipos de personajes. Recuerda que por eso implementamos el polimorfismo. Te sugiero crear los Personajes de manera dinámica (uso de apuntadores). Así mismo crea al jugador que es un Personaje de tipo guerrero. Cuando lo crees deberá tener todos los puntos posibles y su ubicación en el primer cuarto, donde vaya a comenzar la historia.

La forma de jugarlo puedes generarla tu, pero sugiero lo siguiente, desplegarle al usuario en qué cuarto está y hacer que juegue o actue con el personaje que está también en ese cuarto. Si es un personaje “amistoso” y le dice lo que hay en el cuarto, inmediatamente el personaje agrega los puntos Salud que le dió el item y si no simplemente puede avanzar al siguiente cuarto. En el siguiente cuarto, lo mismo, se puede desplegar la información del cuarto o empezar a interactuar con el personaje, cuando es un personaje “guerrero” deben luchar hasta que uno de los dos muera, si muere el personaje del cuarto/mundo, el jugador puede pasar al siguiente cuarto/mundo, de lo contrario se acaba el juego.

Recuerda que al final tendrás que agregar al menos una sobrecarga de operadores y una excepción en el lugar que quieras de tu programa.