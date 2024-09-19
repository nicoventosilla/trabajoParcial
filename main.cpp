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
    int rondas = 0;
    int puntaje_jugador;
    int puntaje_computadora;
    int rondas_ganadas_jugador = 0, rondas_ganadas_computadora = 0;


    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Mostrar mensaje de bienvenida
    mensajeBienvenida();

    do
    {
        cout << "Cuantas rondas quieres jugar?" << endl;
        cin >> rondas;

        if (rondas <= 0)
        {
            cout << "El número de rondas debe ser mayor a 0" << endl;
        }
    }
    while (rondas <= 0);

    // Jugar las rondas
    for (int i = 1; i <= rondas; i++)
    {
        cout << "---------------------------------" << endl;
        cout << "          Ronda " << i << endl;
        cout << "---------------------------------" << endl;

        // Jugar ronda jugador
        cout << "ES TU TURNO!" << endl;
        cout << "Presiona Enter para lanzar los dados...";
        cin.get();
        puntaje_jugador = jugarRonda();
        cout << "Tu puntaje es: " << puntaje_jugador << endl;

        // Jugar ronda computadora
        cout << "TURNO DE LA COMPUTADORA!" << endl;
        puntaje_computadora = jugarRonda();
        cout << "El puntaje de la computadora es: " << puntaje_computadora << endl;

        // Determinar ganador de la ronda
        if (puntaje_jugador > puntaje_computadora)
        {
            cout << "Felicidades, ganaste la ronda!" << endl;
            rondas_ganadas_jugador++;
        }
        else if (puntaje_computadora > puntaje_jugador)
        {
            cout << "Perdiste la ronda!" << endl;
            rondas_ganadas_computadora++;
        }
        else
        {
            cout << "¡Empate!" << endl;
        }

        // Mostrar marcador
        cout << "Marcador:" << endl;
        cout << "Jugador: " << rondas_ganadas_jugador << " Computadora: " << rondas_ganadas_computadora << endl;

        // Pausa para continuar
        cout << "Presiona Enter para continuar...";
        cin.get();

        // Verificar si hay una ventaja insuperable
        if (rondas_ganadas_jugador > rondas / 2 || rondas_ganadas_computadora > rondas / 2)
        {
            break;
        }
    }

    // Determinar el ganador final
    cout << "---------------------------------" << endl;
    cout << "          Resultado Final        " << endl;
    cout << "---------------------------------" << endl;

    cout << "Marcador Final:" << endl;
    cout << "Jugador: " << rondas_ganadas_jugador << " Computadora: " << rondas_ganadas_computadora << endl;

    if (rondas_ganadas_jugador > rondas_ganadas_computadora)
    {
        cout << "Felicidades, ganaste el juego!" << endl;
    }
    else if (rondas_ganadas_computadora > rondas_ganadas_jugador)
    {
        cout << "¡Perdiste el juego!" << endl;
    }
    else
    {
        cout << "El juego termino en empate!" << endl;
    }

    return 0;
}
