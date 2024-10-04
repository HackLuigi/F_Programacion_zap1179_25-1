// Practica_4_decisiones_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "en_us");

    std::string apodo = "RANJ";
    std::string apodo_usuario;
    std::string contra = "54321";
    std::string contra_usuario;
    std::cout << "Hola usuario, porfavor ingrese un nombre de usuario" << std::endl;
    std::getline(std::cin, apodo_usuario); //getline sirve para los espacios en strings
    if (apodo == apodo_usuario)
    {
        std::cout << "Ingrese contraseña para confirmar identidad" << std::endl;
        std::getline(std::cin, contra_usuario);
        if (contra == contra_usuario)
        {
            std::cout << apodo << " detectado, iniciando sistema" << std::endl;
            std::cout << "Iniciando preguntas de seguridad" << std::endl;
        }
        else
        {
            std::cout << "Alerta, infraccion de seguridad y privacidad detectada, apagando sistema\n";
        }
    }
    else
    {
        std::cout << "Usuario no reconocido, apagando sistema para tomar medidas de seguridad\n";
    }

    //Decisiones multiples
    int opcion = 0;
    std::cout << "Que es lo que hace al despertar?\n";
    std::cout << "1-. Tomar un baño 2-. Desayuna? 3-. Corre porque es tarde para usted?\n";
    std::cin >> opcion;
    switch (opcion) //Evaluaremos la opcion dependiendo del caso
    {
    case 1:
        std::cout << "Disfute el bañoñ. Se ejecuta la primera opcion\n";
        break;
    case 2:
        std::cout << "Disfure de su desayuno!. Se ejecuta la segunda opcion\n";
        break;
    case 3:
        std::cout << "Corra corra!!!!, Se ejecuta la tercera opcion\n";
        break;
    default:
        std::cout << "Opcion fuera de rango\n";
        break;
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
