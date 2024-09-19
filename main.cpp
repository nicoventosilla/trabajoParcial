#include <iostream>
#include <cstdlib>  // Para usar rand() y srand()
#include <ctime>   // Para usar time()
using namespace std;

void mensajeBienvenida()
{
    cout << "*************************************" << endl;
    cout << "*   ¡Bienvenido al juego CDice!     *" << endl;
    cout << "*  Tira los dados y vence a la PC   *" << endl;
    cout << "*    El que consiga el mayor        *" << endl;
    cout << "*   producto con los dados gana!    *" << endl;
    cout << "*************************************" << endl;
    cout << "Presiona Enter para continuar...";
    cout << endl;
    cin.get();
}


int lanzarDado()
{
    return rand() % 6 + 1;
}

void mostrarDado(int valor)
{
    switch (valor)
    {
    case 1:
        cout << endl;
        cout << "[     ]\n";
        cout << "[  o  ]\n";
        cout << "[     ]\n";
        cout << endl;
        break;
    case 2:
        cout << endl;
        cout << "[ o   ]\n";
        cout << "[     ]\n";
        cout << "[   o ]\n";
        cout << endl;
        break;
    case 3:
        cout << endl;
        cout << "[ o   ]\n";
        cout << "[  o  ]\n";
        cout << "[   o ]\n";
        cout << endl;
        break;
    case 4:
        cout << endl;
        cout << "[ o o ]\n";
        cout << "[     ]\n";
        cout << "[ o o ]\n";
        cout << endl;
        break;
    case 5:
        cout << endl;
        cout << "[ o o ]\n";
        cout << "[  o  ]\n";
        cout << "[ o o ]\n";
        cout << endl;
        break;
    case 6:
        cout << endl;
        cout << "[ o o ]\n";
        cout << "[ o o ]\n";
        cout << "[ o o ]\n";
        cout << endl;
        break;
    }
}


int jugarRonda()
{
    int dado1 = lanzarDado();
    int dado2 = lanzarDado();
    int dado3 = lanzarDado();

    cout << "Resultado de los dados:" << endl;
    mostrarDado(dado1);
    mostrarDado(dado2);
    mostrarDado(dado3);

    int producto = dado1 * dado2 * dado3;

    return producto;
}


int main()
{
    // Mostrar mensaje de bienvenida
    mensajeBienvenida();

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    int puntaje_jugador, puntaje_maximo_jugador = 0;
    int puntaje_computadora, puntaje_maximo_computadora = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "---------------------------------" << endl;
        cout << "          Ronda " << i << endl;
        cout << "---------------------------------" << endl;

        // Jugar ronda jugador
        cout << "* Turno del jugador" << endl;
        cout << "Presiona Enter para lanzar los dados...";
        cin.get();
        puntaje_jugador = jugarRonda();
        puntaje_maximo_jugador += puntaje_jugador;

        cout << "El puntaje del jugador es: " << puntaje_jugador << endl;

        // Jugar ronda computadora
        cout << endl;
        cout << "* Turno de la computadora" << endl;
        puntaje_computadora = jugarRonda();
        puntaje_maximo_computadora += puntaje_computadora;

        cout << "El puntaje de la computadora es: " << puntaje_computadora << endl;
        cout << endl;

        cin.get();
    }

    cout << "Puntaje maximo jugador: " << puntaje_maximo_jugador << endl;
    cout << "Puntaje maximo computadora: " << puntaje_maximo_computadora << endl;

    if (puntaje_maximo_jugador > puntaje_maximo_computadora)
    {
        cout << "Felicidades! Has ganado!" << endl;
    }
    else if (puntaje_maximo_jugador < puntaje_maximo_computadora)
    {
        cout << "Lo siento! Has perdido!" << endl;
    }
    else
    {
        cout << "Empate!" << endl;
    }

    return 0;
}
