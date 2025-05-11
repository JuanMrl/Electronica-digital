#include <stdint.h>
#include <stdio.h>
#include <windows.h> // Para usleep (reemplazo de delay)


// Definiciones de constantes
#define in_A 6       // Entrada A que obedece a un botón
#define HIGH 1
#define LOW 0
#define INPUT 0
#define OUTPUT 1


int OutPin[] = {2, 3, 4, 5}; // Array de pines de salida

// Prototipos de funciones
int digitalRead(int pin);
void digitalWrite(int pin, int value);
void pinMode(int pin, int mode);
void Conteo(uint8_t number);

// Función principal (equivalente a setup + loop)
int main() {
    // Configuración de pines (setup)
    pinMode(in_A, INPUT); // Configura el pin como entrada
    
    for (int i = 0; i < 4; i++) {
        pinMode(OutPin[i], OUTPUT); // Configura pines como salida
        printf("Contador: %d\n", i);
    }

    // Bucle principal (loop)
    while(1) {
        for (int i = 0; i < 16; i++) {
            if (digitalRead(in_A) == HIGH) { // Si se presiona el botón
                i = 0; // Reinicia el contador
            }
            
            Conteo(i); // Muestra el número en los LEDs
            Sleep(25); // Delay de 25ms (25000 microsegundos)
        }
    }
    
    return 0;
}

// Función que escribe el número en los pines (equivalente a digitalWrite)
void Conteo(uint8_t number) {
    for (int i = 0; i < 4; i++) {
        if ((number >> i) & 0x01) { // Equivalente a bitRead
            digitalWrite(OutPin[i], HIGH);
        } else {
            digitalWrite(OutPin[i], LOW);
        }
    }
}

// Implementaciones básicas de las funciones de Arduino
// (Estas deben adaptarse al hardware específico)

int digitalRead(int pin) {
    // Implementación dependiente del hardware
    // Debe leer el estado del pin físico
    return 0; // Simulación - cambiar por lectura real
}

void digitalWrite(int pin, int value) {
    // Implementación dependiente del hardware
    // Debe escribir el valor en el pin físico
}

void pinMode(int pin, int mode) {
    // Implementación dependiente del hardware
    // Debe configurar la dirección del pin (entrada/salida)
}