#include "MotorDePasso.h"
#include <Arduino.h>
#include "Pin.h"
using namespace std;

MotorDePasso::MotorDePasso()
{
}

MotorDePasso::~MotorDePasso()
{
  // TODO Auto-generated destructor stub
}

void MotorDePasso::definePinosMotor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{
  this->ledPin_1 = Pin(ledPin_1);
  this->ledPin_2 = Pin(ledPin_2);
  this->ledPin_3 = Pin(ledPin_3);
  this->ledPin_4 = Pin(ledPin_4);
  
  pinMode(this->ledPin_1, OUTPUT);
  pinMode(this->ledPin_2, OUTPUT);
  pinMode(this->ledPin_3, OUTPUT);
  pinMode(this->ledPin_4, OUTPUT);
  return;
}

void MotorDePasso::passoDisableMotor()
{
  this->ledPin_1.off();
  this->ledPin_2.off();
  this->ledPin_3.off();
  this->ledPin_4.off();
  return;
}

void MotorDePasso::passo(int passo_num)
{
  switch (passo_num)
  {
  case 1:
    this->ledPin_1.on();
    this->ledPin_2.off();
    this->ledPin_3.off();
    this->ledPin_4.off();
    break;
  
  case 2:
    this->ledPin_1.off();
    this->ledPin_2.on();
    this->ledPin_3.off();
    this->ledPin_4.off();
    break;
  
  case 3:
    this->ledPin_1.off();
    this->ledPin_2.off();
    this->ledPin_3.on();
    this->ledPin_4.off();
    break;
  
  case 4:
    this->ledPin_1.off();
    this->ledPin_2.off();
    this->ledPin_3.off();
    this->ledPin_4.on();
    break;
  
  default:
    this->ledPin_1.off();
    this->ledPin_2.off();
    this->ledPin_3.off();
    this->ledPin_4.off();
    break;
  }
  
  return;
}


/*
void MotorDePasso::definePinosMotor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{

  this->ledPin_1 = Pin(ledPin_1);
  this->ledPin_2 = Pin(ledPin_2);
  this->ledPin_3 = Pin(ledPin_3);
  this->ledPin_4 = Pin(ledPin_4);
  
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);
  pinMode(ledPin_4, OUTPUT);
}

void MotorDePasso::definePinosMotor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8)
{

  this->ledPin_5 = Pin(ledPin_5);
  this->ledPin_6 = Pin(ledPin_6);
  this->ledPin_7 = Pin(ledPin_7);
  this->ledPin_8 = Pin(ledPin_8);
  pinMode(ledPin_5, OUTPUT);
  pinMode(ledPin_6, OUTPUT);
  pinMode(ledPin_7, OUTPUT);
  pinMode(ledPin_8, OUTPUT);
}

void MotorDePasso::passoDisableMotor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{
  
  digitalWrite(ledPin_1,HIGH);
  digitalWrite(ledPin_2,HIGH);
  digitalWrite(ledPin_3,HIGH);
  digitalWrite(ledPin_4,LOW);
  
  Serial.println("PASSO DISABLE MOTOR 1");
  Serial.println(ledPin_1);
  Serial.println(ledPin_2);
  Serial.println(ledPin_3);
  Serial.println(ledPin_4);
}

void MotorDePasso::passoDisableMotor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8)
{
  Serial.println("PASSO DISABLE MOTOR 2");
  Serial.println(ledPin_5);
  Serial.println(ledPin_6);
  Serial.println(ledPin_7);
  Serial.println(ledPin_8);
}

void MotorDePasso::passo_0_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{

  Serial.println("PASSO 0 MOTOR 1");
  Serial.println(ledPin_1);
  Serial.println(ledPin_2);
  Serial.println(ledPin_3);
  Serial.println(ledPin_4);
}

void MotorDePasso::passo_0_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8)
{

  Serial.println("PASSO 0 MOTOR 2");
  Serial.println(ledPin_5);
  Serial.println(ledPin_6);
  Serial.println(ledPin_7);
  Serial.println(ledPin_8);
}

void MotorDePasso::passo_1_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{

  Serial.println("PASSO 1 MOTOR 1");
  Serial.println(ledPin_1);
  Serial.println(ledPin_2);
  Serial.println(ledPin_3);
  Serial.println(ledPin_4);
}

void MotorDePasso::passo_1_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8)
{

  Serial.println("PASSO 1 MOTOR 2");
  Serial.println(ledPin_5);
  Serial.println(ledPin_6);
  Serial.println(ledPin_7);
  Serial.println(ledPin_8);
}

void MotorDePasso::passo_2_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{

  Serial.println("PASSO 2 MOTOR 1");
  Serial.println(ledPin_1);
  Serial.println(ledPin_2);
  Serial.println(ledPin_3);
  Serial.println(ledPin_4);
}

void MotorDePasso::passo_2_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8)
{

  Serial.println("PASSO 2 MOTOR 2");
  Serial.println(ledPin_5);
  Serial.println(ledPin_6);
  Serial.println(ledPin_7);
  Serial.println(ledPin_8);
}

void MotorDePasso::passo_3_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{

  Serial.println("PASSO 3 MOTOR 1");
  Serial.println(ledPin_1);
  Serial.println(ledPin_2);
  Serial.println(ledPin_3);
  Serial.println(ledPin_4);
}

void MotorDePasso::passo_3_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8)
{

  Serial.println("PASSO 3 MOTOR 2");
  Serial.println(ledPin_5);
  Serial.println(ledPin_6);
  Serial.println(ledPin_7);
  Serial.println(ledPin_8);
}

void MotorDePasso::passo_4_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{

  Serial.println("PASSO 4 MOTOR 1");
  Serial.println(ledPin_1);
  Serial.println(ledPin_2);
  Serial.println(ledPin_3);
  Serial.println(ledPin_4);
}

void MotorDePasso::passo_4_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8)
{

  Serial.println("PASSO 4 MOTOR 2");
  Serial.println(ledPin_5);
  Serial.println(ledPin_6);
  Serial.println(ledPin_7);
  Serial.println(ledPin_8);
}

void MotorDePasso::passoBipolarParaleloMotor1(int direcao, int tempoDePasso, int passosMaximo)
{
  Serial.println("MODO BIPOLAR PARALELO MOTOR 1");
  delay(tempoDePasso);
  MotorDePasso::passo_0_Motor1(LOW, LOW, LOW, LOW);
  delay(tempoDePasso);
  MotorDePasso::passo_1_Motor1(LOW, LOW, LOW, HIGH);
  delay(tempoDePasso);
  MotorDePasso::passo_2_Motor1(HIGH, HIGH, LOW, LOW);
  delay(tempoDePasso);
  MotorDePasso::passo_3_Motor1(LOW, HIGH, HIGH, LOW);
  delay(tempoDePasso);
  MotorDePasso::passo_4_Motor1(LOW, LOW, HIGH, HIGH);
  delay(tempoDePasso);
}

void MotorDePasso::passoBipolarParaleloMotor2(int direcao, int tempoDePasso, int passosMaximo)
{
  Serial.println("MODO BIPOLAR PARALELO MOTOR 2");
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_0_Motor2(0, 0, 0, 0);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_1_Motor2(1, 0, 0, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_2_Motor2(1, 1, 0, 0);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_3_Motor2(0, 1, 1, 0);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_4_Motor2(0, 0, 1, 1);
  delayMicroseconds(tempoDePasso);
}

void MotorDePasso::passoBipolarSerieMotor1(int direcao, int tempoDePasso, int passosMaximo)
{
  Serial.println("MODO BIPOLAR SÉRIE MOTOR 1");
  MotorDePasso::passo_0_Motor1(0, 0, 0, 0);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_1_Motor1(1, 0, 0, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_2_Motor1(0, 1, 0, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_3_Motor1(0, 1, 1, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_4_Motor1(1, 0, 1, 0);
  delayMicroseconds(tempoDePasso);
}

void MotorDePasso::passoBipolarSerieMotor2(int direcao, int tempoDePasso, int passosMaximo)
{
  Serial.println("MODO BIPOLAR SÉRIE MOTOR 2");
  MotorDePasso::passo_0_Motor2(0, 0, 0, 0);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_1_Motor2(1, 0, 0, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_2_Motor2(0, 1, 0, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_3_Motor2(0, 1, 1, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_4_Motor2(1, 0, 1, 0);
  delayMicroseconds(tempoDePasso);
}
*/


