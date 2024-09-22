# 🎲 CDice: Juego de Dados en C++

Este es un sencillo juego de dados hecho en C++ llamado **CDice**. En este juego, el objetivo es vencer a la computadora
obteniendo el mayor producto de los valores de tres dados en cada ronda.

## 🚀 ¿Cómo funciona el juego?

1. El jugador y la computadora lanzan tres dados en cada ronda.
2. Se multiplica el valor de los tres dados para obtener un puntaje.
3. El jugador con el puntaje más alto en una ronda gana esa ronda.
4. Al final de las rondas, se determina quién es el ganador del juego.
5. Si ambos jugadores obtienen el mismo puntaje en una ronda, es un empate.

## 📝 Reglas del juego

- El jugador elige cuántas rondas quiere jugar.
- Después de cada ronda, se compara el puntaje del jugador con el de la computadora.
- El que gane más rondas será declarado el ganador del juego.

## 📋 Requisitos

- Tener instalado un compilador de C++ (como **g++**) o un entorno de desarrollo como **Visual Studio**.
- Cualquier sistema operativo compatible con C++ (Windows, macOS, Linux).

## ▶️ Instrucciones para ejecutar

1. Clona este repositorio:

    ```bash
    git clone https://github.com/tuusuario/cdice.git
    ```

2. Compila el programa:

    ```bash
    g++ cdice.cpp -o cdice
    ```

3. Ejecuta el juego:

    ```bash
    ./cdice
    ```

## 🛠 Tecnologías usadas

- **C++**: Lenguaje de programación para construir el juego.
- **rand() y srand()**: Para generar números aleatorios en los dados.
- **ctime**: Para inicializar la semilla de los números aleatorios.

## 🙌 Cómo contribuir

¡Las contribuciones son bienvenidas! Si deseas mejorar el código, corregir errores o agregar nuevas características,
sigue estos pasos:

1. **Fork** este repositorio.
2. Crea una nueva rama (`git checkout -b feature-nueva-caracteristica`).
3. Haz los cambios que desees y **haz commit** de ellos (`git commit -m "Agrega nueva característica"`).
4. Sube tus cambios a la rama (`git push origin feature-nueva-caracteristica`).
5. Abre un **Pull Request** y describe tus cambios para que podamos revisarlos.

Recuerda revisar los **issues** antes de comenzar, para evitar duplicar trabajo. ¡Gracias por tu interés en contribuir!