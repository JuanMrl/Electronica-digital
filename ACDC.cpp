// C++ code
//  LAB Electronica Digital II
//  Juan Morales
// Definiciones de pines
#define LDR_pin A0

// Pines de los LEDs
#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9

// Variable para la lectura del LDR
int LDR_read = 0;

void setup() {
  // Configurar el pin del LDR como entrada
  pinMode(LDR_pin, INPUT);
  
  // Configurar los pines de los LEDs como salidas
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

  // Iniciar comunicación serial (para depuración)
  Serial.begin(9600); 
}

void loop() {
  // Leer el valor del LDR (rango: 0-1023)
  LDR_read = analogRead(LDR_pin);
  Serial.println(LDR_read); // Opcional: ver el valor en el Monitor Serial

  // Encender LEDs según la intensidad de luz
  if (LDR_read <= 114) {
    apagarTodosLosLEDs();
  } 
  else if (LDR_read <= 227) {
    encenderHasta(1);
  } 
  else if (LDR_read <= 341) {
    encenderHasta(2);
  } 
  else if (LDR_read <= 455) {
    encenderHasta(3);
  } 
  else if (LDR_read <= 568) {
    encenderHasta(4);
  } 
  else if (LDR_read <= 682) {
    encenderHasta(5);
  } 
  else if (LDR_read <= 796) {
    encenderHasta(6);
  } 
  else if (LDR_read <= 909) {
    encenderHasta(7);
  } 
  else {
    encenderHasta(8); // Todos los LEDs encendidos
  }

  delay(100); // Pequeña pausa para evitar fluctuaciones
}

// Función auxiliar para apagar todos los LEDs
void apagarTodosLosLEDs() {
  for (int i = led1; i <= led8; i++) {
    digitalWrite(i, LOW);
  }
}

// Función auxiliar para encender LEDs hasta cierto número
void encenderHasta(int cantidad) {
  apagarTodosLosLEDs(); // Primero apagar todos
  for (int i = 0; i < cantidad; i++) {
    digitalWrite(led1 + i, HIGH);
  }
}