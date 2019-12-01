#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27,16,2);
#include <Keypad.h>
byte bufferPin=10;
byte senMov=11;
byte senPul=12;
byte control;
char boton;
char numero[7];
char paciente1[7]="244308";
char paciente2[7]="123456";
char paciente3[7]="374862";
byte contador;
const byte filas=4;
const byte columnas=4;
byte pinsFilas[filas]={9, 8, 7, 6};
byte pinsColumnas[columnas]={5, 4, 3, 2};
char teclas[filas][columnas]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

Keypad teclado = Keypad(makeKeymap(teclas), pinsFilas, pinsColumnas, filas, columnas);
void setup() {
  // put your setup code here, to run once:
pinMode(bufferPin,OUTPUT);
pinMode(senMov,INPUT);
pinMode(senPul,INPUT);
lcd.init();
lcd.backlight();
lcd.clear();
lcd.setCursor(0,0);
lcd.setCursor(0,0);
lcd.print("Bienvenido al");
lcd.setCursor(0,1);
lcd.print("Sist. pacientes");
lcd.display();
delay(2500);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Ingrese el No.");
lcd.setCursor(0,1);
lcd.print("del paciente");
lcd.display();
delay(2500);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Paciente No.");
lcd.setCursor(0,1);
}
void loop() {
  // put your main code here, to run repeatedly
boton=teclado.getKey();
if (boton){
  numero[contador]=boton;
  contador++;
  lcd.print(boton);
}
if(contador==6){
  if(!strcmp(numero,paciente1)){
    tone(bufferPin, 400, 200);
while(control<3){
    if(digitalRead(senMov)==HIGH){
  for( byte i = 1; i <= 3; i++ )
{
  tone(bufferPin, 315, 100);  
  delay(200);                 
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Movimiento");
  lcd.setCursor(0,1);
  lcd.print("Habitacion:505");
  lcd.display();
  delay(2000);
  lcd.clear();
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Drake");
  lcd.setCursor(0,1);
  lcd.print("Nathan");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Sexo:Masculino");
  lcd.setCursor(0,1);
  lcd.print("Edad:30 años");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Estatura:1.80 m");
  lcd.setCursor(0,1);
  lcd.print("Peso:76 kg");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Internado por:");
  lcd.setCursor(0,1);
  lcd.print("Heridas de bala");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Habitacion:505");
  lcd.display();
  delay(2000);
  control++;
    if(digitalRead(senPul)==HIGH){
    for( byte i = 1; i <= 10; i++ )
{
  tone(bufferPin, 800, 100);  
  delay(200);                 
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" <<EMERGENCIA>>");
  lcd.setCursor(0,1);
  lcd.print("Habitacion:505");
  lcd.display();
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Paciente No.");
  lcd.setCursor(0,1);
  control=5;
  }
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Paciente No.");
  lcd.setCursor(0,1);
  control=0;
  }
  if(!strcmp(numero,paciente2)){
    tone(bufferPin, 400, 200);
while(control<3){
    if(digitalRead(senMov)==HIGH){
  for( byte i = 1; i <= 3; i++ )
{
  tone(bufferPin, 315, 100);  
  delay(200);                 
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Movimiento");
  lcd.setCursor(0,1);
  lcd.print("Habitacion:1307");
  lcd.display();
  delay(2000);
  lcd.clear();
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Fisher");
  lcd.setCursor(0,1);
  lcd.print("Elena");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Sexo:Femenino");
  lcd.setCursor(0,1);
  lcd.print("Edad:29 años");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Estatura:1.65 m");
  lcd.setCursor(0,1);
  lcd.print("Peso:54 kg");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Internado por:");
  lcd.setCursor(0,1);
  lcd.print("Quemaduras");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Habitacion:1307");
  lcd.display();
  delay(2000);
  control++;
    if(digitalRead(senPul)==HIGH){
    for( byte i = 1; i <= 10; i++ )
{
  tone(bufferPin, 800, 100);  
  delay(200);                 
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" <<EMERGENCIA>>");
  lcd.setCursor(0,1);
  lcd.print("Habitacion:1307");
  lcd.display();
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Paciente No.");
  lcd.setCursor(0,1);
  control=5;
  }
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Paciente No.");
  lcd.setCursor(0,1);
  control=0;
  }  if(!strcmp(numero,paciente3)){
    tone(bufferPin, 400, 200);
while(control<3){
    if(digitalRead(senMov)==HIGH){
  for( byte i = 1; i <= 3; i++ )
{
  tone(bufferPin, 315, 100);  
  delay(200);                 
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Movimiento");
  lcd.setCursor(0,1);
  lcd.print("Habitacion:1108");
  lcd.display();
  delay(2000);
  lcd.clear();
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Sullivan");
  lcd.setCursor(0,1);
  lcd.print("Victor");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Sexo:Masculino");
  lcd.setCursor(0,1);
  lcd.print("Edad:55 años");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Estatura:1.78 m");
  lcd.setCursor(0,1);
  lcd.print("Peso:73 kg");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Internado por:");
  lcd.setCursor(0,1);
  lcd.print("Cancer de pulmon");
  lcd.display();
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Habitacion:1108");
  lcd.display();
  delay(2000);
  control++;
    if(digitalRead(senPul)==HIGH){
    for( byte i = 1; i <= 10; i++ )
{
  tone(bufferPin, 800, 100);  
  delay(200);                 
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" <<EMERGENCIA>>");
  lcd.setCursor(0,1);
  lcd.print("Habitacion:1108");
  lcd.display();
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Paciente No.");
  lcd.setCursor(0,1);
  control=5;
  }
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Paciente No.");
  lcd.setCursor(0,1);
  control=0;
  }
  if(strcmp(numero,paciente1)&&strcmp(numero,paciente2)&&strcmp(numero,paciente3)){
  tone(bufferPin,293,1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Paciente no");
  lcd.setCursor(0,1);
  lcd.print("encontrado");
  lcd.display();
  delay(2500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Paciente No.");
  lcd.setCursor(0,1);
  }
  contador=0;
}
}
