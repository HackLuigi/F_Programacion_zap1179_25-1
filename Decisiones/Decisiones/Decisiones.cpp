// Decisiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>//Libreria para cambiar idiomas

int main()
{
    //Maneras de configurar para que soporte ñ y acentos
    setlocale(LC_ALL, "en_US");
    int Edad = 0;
    //sintaxys de decisiones
    //La palabra reservada es IF
    //Lo que esta dentro del parentesis si es verdad
    std::cout << "Hola usuario dame tu edad: \n";
    std::cin >> Edad;
    if (Edad >= 18)
    {
        //Se ejecuta esto
        std::cout << "Usted es mayor de edad \n";
    }
    //Decisiones doble sintaxys
    int Vidas = 0;
    bool continuar = false;
    std::cout << "Continue? \n";
    std::cin >> continuar;
    if (continuar == true)//si esto es verdadero
    {
        //Se ejecuta esto
        std::cout << "Elegiste verdadero osea continuar \n";
        std::cout << "Deposita todo el cambio de las tortillas para tener otra oportunidad \n";
    }
    else
    {
        //Si es falso se ejecuta esto.
        std::cout << "Elegiste Falso osea salir \n";
        std::cout << "Orale llevele a su jefecita las tortillas y la coca\n";
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
