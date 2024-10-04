#include <iostream>
#include <math.h>
#include <locale>
#include <string>

long int main()
{
    bool Ejercicio = false;
    bool Comer_salud = false;
    bool Dormir = false;
    std::string Nombre_completo;
    std::string Comida
    std::string Chatarra = "donas" "galletas" "frituras";
    char sexo;
    int Edad = 0;
    int Peso = 0;
    float altura;

    std::cout << "Hola, soy tu doctor, porfavor, sientate, necesito hacerte unas preguntas\n" << std::endl
    std::cout << "Para empezar, digame su nombre y sexo porfavor" << std::endl;
    std::getline(std::cin, Nombre_completo);
    std::cin >> sexo;
    std::cout << "Entonces eres " << Nombre_completo << " " << sexo << " de " << Edad << " años ¿Correcto?" << std::endl;
    std::cout << "Digame ¿Come saludable? Responda si o no porfavor" << std::endl;
    std::cin >> Comer_salud;
    if (Comer_salud == true)
    {
        std::cout << "Ya veo ¿Y se ejercita bien?" << std::endl;
        if (Ejercicio == true)
        {
            std::cout << "Ok ¿Y duerme bien? Recuerde que 8 horas son minimo lo que el cuerpo debe dormir" << std::endl;
            std::cin >> Dormir;
        }
        else
        {

        }
    }
    else
    {
        std::cout << "Ya veo ¿Y se ejercita bien?" << std::endl
        std::cin >> Ejercicio;
        if (Ejercicio == true)
        {

        }
        else
        {

        }
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   5. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
