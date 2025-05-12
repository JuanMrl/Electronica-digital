// C++ code
//  Electronica Digital II
// Contador digital: Se utiliza un arduino para controlar el encendido y apagado de una matrix de arduinos se
// utiliza un arduino mega para que cada salida analogica forme un numero en la matriz de leds
#include <stdint.h>
#include <stdio.h>
#include <windows.h>

#define D 9

#define A0_OFF   analogWrite(D, HIGH);
#define A0_ON    analogWrite(D, LOW);
#define A1_OFF   analogWrite(A1, 255);     
#define A1_ON    analogWrite(A1, 0);
#define A2_OFF   analogWrite(A2, 255);
#define A2_ON    analogWrite(A2, 0);
#define A3_OFF   analogWrite(A3, 255);
#define A3_ON    analogWrite(A3, 0);
#define A4_OFF   analogWrite(A4, 255);
#define A4_ON    analogWrite(A4, 0);
#define A5_OFF   analogWrite(A5, 255);
#define A5_ON    analogWrite(A5, 0);

#define TIME     delay(1000);
int conteo = 0;
                                  
void setup()
{
  //--OUTPUT
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);


  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);

  Serial.begin(9600); 

  
}

void loop()
{ 

while(conteo<50){
conteo++;
cero();  
}
conteo = 0; 

while(conteo<50){
conteo++;
uno();  
}
conteo = 0;

while(conteo<50){
conteo++;
dos();  
}
conteo = 0;

while(conteo<50){
conteo++;
tres();  
}
conteo = 0;

while(conteo<50){
conteo++;
cuatro();  
}
conteo = 0;

while(conteo<50){
conteo++;
cinco();  
}
conteo = 0;

while(conteo<50){
conteo++;
seis();  
}
conteo = 0;

while(conteo<50){
conteo++;
siete();  
}
conteo = 0;

while(conteo<50){
conteo++;
ocho();  
}
conteo = 0;

while(conteo<50){
conteo++;
nueve();  
}
conteo = 0;

//10
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
cero();  
}
conteo = 0;

//11
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
uno();  
}
conteo = 0;

//12
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
dos();  
}
conteo = 0;

//13
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
tres();  
}
conteo = 0;

//14
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
cuatro();  
}
conteo = 0;

//11
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
cinco();  
}
conteo = 0;

//11
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
seis();  
}
conteo = 0;

//18
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
siete();  
}
conteo = 0;

//19
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
ocho();  
}
conteo = 0;



//19
while(conteo<50){
conteo++;
digitalWrite(5,HIGH);
  A0_ON;
  A1_ON;
  A2_ON;
  A3_ON;
  A4_ON;
  A5_ON;
nueve();
digitalWrite(5,LOW);  
}
conteo = 0;



//20
while(conteo<200){
conteo++;
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);        
digitalWrite(3,HIGH);  
digitalWrite(4,HIGH);
  A0_ON; 
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(2,HIGH);        
digitalWrite(3,LOW);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(2,HIGH);        
digitalWrite(3,LOW);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);        
digitalWrite(3,LOW);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);        
digitalWrite(3,LOW);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(2,HIGH);        
digitalWrite(3,HIGH);  
digitalWrite(4,HIGH);
  A0_OFF; 
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);  
}
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(2,LOW);        
digitalWrite(3,LOW);  
digitalWrite(4,LOW);
  A0_OFF; 
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
conteo = 0;


}

















void cero(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;    
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;        
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;    
  delay(2);
//4
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;    
  delay(2);
//5
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;    
  delay(2);

//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
  
  

}
```cpp
// C++ code
//  Electronica Digital II
// Contador digital: Se utiliza un arduino para controlar el encendido y apagado de una matrix de arduinos se
// utiliza un arduino mega para que cada salida analogica forme un numero en la matriz de leds

#include <stdint.h>
#include <stdio.h>
#include <windows.h>

#define D 9

// Define constants for analog write values
#define ANALOG_MIN 0
#define ANALOG_MAX 255

// Define constants for pin states
#define PIN_HIGH HIGH
#define PIN_LOW LOW

// Define constants for analog pin states
#define A0_ON analogWrite(A0, ANALOG_MIN)
#define A0_OFF analogWrite(A0, ANALOG_MAX)
#define A1_ON analogWrite(A1, ANALOG_MIN)
#define A1_OFF analogWrite(A1, ANALOG_MAX)
#define A2_ON analogWrite(A2, ANALOG_MIN)
#define A2_OFF analogWrite(A2, ANALOG_MAX)
#define A3_ON analogWrite(A3, ANALOG_MIN)
#define A3_OFF analogWrite(A3, ANALOG_MAX)
#define A4_ON analogWrite(A4, ANALOG_MIN)
#define A4_OFF analogWrite(A4, ANALOG_MAX)
#define A5_ON analogWrite(A5, ANALOG_MIN)
#define A5_OFF analogWrite(A5, ANALOG_MAX)

// Define constant for delay time
#define TIME delay(1000)

int conteo = 0;

void setup() {
  // Set pin modes
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Count from 0 to 9
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 50; j++) {
      switch (i) {
        case 0:
          cero();
          break;
        case 1:
          uno();
          break;
        case 2:
          dos();
          break;
        case 3:
          tres();
          break;
        case 4:
          cuatro();
          break;
        case 5:
          cinco();
          break;
        case 6:
          seis();
          break;
        case 7:
          siete();
          break;
        case 8:
          ocho();
          break;
        case 9:
          nueve();
          break;
      }
    }
  }

  // Count from 10 to 19
  for (int i = 10; i < 20; i++) {
    for (int j = 0; j < 50; j++) {
      switch (i) {
        case 10:
          diez();
          break;
        case 11:
          once();
          break;
        case 12:
          doce();
          break;
        case 13:
          trece();
          break;
        case 14:
          catorce();
          break;
        case 15:
          quince();
          break;
        case 16:
          dieciseis();
          break;
        case 17:
          diecisiete();
          break;
        case 18:
          dieciocho();
          break;
        case 19:
          diecinueve();
          break;
      }
    }
  }

  // Count from 20 to 29
  for (int i = 20; i < 30; i++) {
    for (int j = 0; j < 50; j++) {
      switch (i) {
        case 20:
          veinte();
          break;
        case 21:
          veintiuno();
          break;
        case 22:
          veintidos();
          break;
        case 23:
          veintitres();
          break;
        case 24:
          veinticuatro();
          break;
        case 25:
          veinticinco();
          break;
        case 26:
          veintiseis();
          break;
        case 27:
          veintisiete();
          break;
        case 28:
          veintiocho();
          break;
        case 29:
          veintinueve();
          break;
      }
    }
  }
}

// Function to display number 0
void cero() {
  digitalWrite(2, PIN_HIGH);
  digitalWrite(3, PIN_HIGH);
  digitalWrite(4, PIN_HIGH);
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_HIGH);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_HIGH);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_HIGH);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_HIGH);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_HIGH);
  digitalWrite(3, PIN_HIGH);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}

// Function to display number 1
void uno() {
  digitalWrite(2, PIN_LOW);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_LOW);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_ON;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_LOW);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_ON;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_LOW);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_LOW);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_LOW);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}

// Function to display number 2
void dos() {
  digitalWrite(2, PIN_HIGH);
  digitalWrite(3, PIN_HIGH);
  digitalWrite(4, PIN_HIGH);
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_LOW);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_LOW);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_HIGH);
  digitalWrite(3, PIN_HIGH);
  digitalWrite(4, PIN_HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);

  digitalWrite(2, PIN_HIGH);
  digitalWrite(3, PIN_LOW);
  digitalWrite(4, PIN_LOW);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);

 
void uno(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_ON;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_ON;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF; 
  delay(2);
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON; 
  delay(2);  
 
 
}






void dos(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);

  

}








void tres(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
 

}





void cuatro(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}




void cinco(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}




void seis(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,LOW);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
    digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}




void siete(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}





void ocho(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}




void nueve(){
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_ON;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//2
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_ON;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//3
  digitalWrite(2,HIGH); // COL 14       
  digitalWrite(3,HIGH);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_ON;
  A3_OFF;
  A4_OFF;
  A5_OFF;
  delay(2);
//4
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_ON;
  A4_OFF;
  A5_OFF;
  delay(2);
  //5
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_ON;
  A5_OFF;
  delay(2);
//6
  digitalWrite(2,LOW); // COL 14       
  digitalWrite(3,LOW);  // COL 6
  digitalWrite(4,HIGH);  // COL 2 
  A0_OFF;
  A1_OFF;
  A2_OFF;
  A3_OFF;
  A4_OFF;
  A5_ON;
  delay(2);
}