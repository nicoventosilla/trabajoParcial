#include <iostream>
#include <cstdlib>  // Para usar rand() y srand()
#include <ctime>   // Para usar time()
using namespace std;

void mensajeBienvenida()
{
    cout << "*************************************" << endl;
    cout << "*    BIENVENIDO AL JUEGO CDICE!     *" << endl;
    cout << "*  TIRA LOS DADOS Y VENCE A LA PC   *" << endl;
    cout << "*                                   *" << endl;
    cout << "*    EL QUE CONSIGA EL MAYOR        *" << endl;
    cout << "*   PRODUCTO CON LOS DADOS GANA!    *" << endl;
    cout << "*************************************" << endl;
    cout << "Presiona Enter para continuar...";
    cin.get(); // Esperar a que el usuario presione Enter
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

    cout << endl << "RESULTADO DE LOS DADOS:" << endl;
    mostrarDado(dado1);
    mostrarDado(dado2);
    mostrarDado(dado3);

    return dado1 * dado2 * dado3;
}

int main()
{
    int rondas = 0;
    int puntaje_jugador, puntaje_computadora;
    int rondas_ganadas_jugador = 0, rondas_ganadas_computadora = 0;

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Mostrar mensaje de bienvenida
    mensajeBienvenida();

    // Solicitar el número de rondas
    do
    {
        cout << endl << "CUANTAS RONDAS QUIERES JUGAR?" << endl;
        cin >> rondas;

        if (rondas <= 0)
        {
            cout << endl << "el numero de rondas debe ser mayor a cero" << endl;
        }
    }
    while (rondas <= 0);

    cin.ignore(); // Limpiar el buffer de entrada

    // Jugar las rondas
    for (int i = 1; i <= rondas; i++)
    {
        cout << endl;
        cout << "---------------------------------" << endl;
        cout << "            RONDA " << i << endl;
        cout << "---------------------------------" << endl;

        // Jugar ronda jugador
        cout << endl << "ES TU TURNO!" << endl;
        cout << "Presiona Enter para lanzar los dados...";
        cin.get(); // Esperar a que el usuario presione Enter
        puntaje_jugador = jugarRonda();

        cout << "TU PUNTAJE ES: " << puntaje_jugador << endl;

        // Jugar ronda computadora
        cout << endl << "TURNO DE LA COMPUTADORA!" << endl;
        puntaje_computadora = jugarRonda();

        cout << "EL PUNTAJE DE LA COMPUTADORA ES: " << puntaje_computadora << endl;

        // Determinar ganador de la ronda
        if (puntaje_jugador > puntaje_computadora)
        {
            cout << endl << "FELICIDADES, GANASTE LA RONDA!" << endl;
            rondas_ganadas_jugador++;
        }
        else if (puntaje_computadora > puntaje_jugador)
        {
            cout << endl << "PERDISTE LA RONDA!" << endl;
            rondas_ganadas_computadora++;
        }
        else
        {
            cout << endl << "EMPATE!" << endl;
        }

        // Mostrar marcador
        cout << endl << "MARCADOR:" << endl;
        cout << "JUGADOR: " << rondas_ganadas_jugador << " COMPUTADORA: " << rondas_ganadas_computadora << endl;

        // Pausa para continuar
        cout << endl << "Presiona Enter para continuar...";
        cin.get(); // Esperar a que el usuario presione Enter
    }

    // Determinar el ganador final
    cout << endl;
    cout << "---------------------------------" << endl;
    cout << "          RESULTADO FINAL        " << endl;
    cout << "---------------------------------" << endl;

    cout << "MARCADOR FINAL:" << endl;
    cout << "JUGADOR: " << rondas_ganadas_jugador << " COMPUTADORA: " << rondas_ganadas_computadora << endl;

    if (rondas_ganadas_jugador > rondas_ganadas_computadora)
    {
        cout << endl << "FELICIDADES, GANASTE EL JUEGO!" << endl;
    }
    else if (rondas_ganadas_computadora > rondas_ganadas_jugador)
    {
        cout << endl << "PERDISTE EL JUEGO!" << endl;
    }
    else
    {
        cout << endl << "EL JUEGO TERMINÓ EN EMPATE!" << endl;
    }

    return 0;
}
