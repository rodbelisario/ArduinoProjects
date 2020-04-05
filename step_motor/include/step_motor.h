#ifndef MOTORDEPASSO_H_
#define MOTORDEPASSO_H_
#include <Arduino.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <Pin.h>

class MotorDePasso
{

private:
    Pin pin;
    Pin ledPin_1; // número do pino do LED
    Pin ledPin_2; // número do pino do LED
    Pin ledPin_3; // número do pino do LED
    Pin ledPin_4; // número do pino do LED

    Pin ledPin_5; // número do pino do LED
    Pin ledPin_6; // número do pino do LED
    Pin ledPin_7; // número do pino do LED
    Pin ledPin_8; // número do pino do LED

    int tempoDePasso = 0;
    int passos = 0;
    int passosMaximo = 0;
    int direcao = 0;
    int npasso = 1;

public:
    MotorDePasso();

    void definePinosMotor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    
    void passoDisableMotor();
    void passo(int passo_num);

    void definePinosMotor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void definePinosMotor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8);

    void passoDisableMotor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passoDisableMotor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8);

    void passo_0_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passo_0_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8);

    void passo_1_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passo_1_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8);

    void passo_2_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passo_2_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8);

    void passo_3_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passo_3_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8);

    void passo_4_Motor1(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passo_4_Motor2(int ledPin_5, int ledPin_6, int ledPin_7, int ledPin_8);

    void passoBipolarParaleloMotor1(int direcao, int tempoDePasso, int passosMaximo);
    void passoBipolarSerieMotor1(int direcao, int tempoDePasso, int passosMaximo);

    void passoBipolarParaleloMotor2(int direcao, int tempoDePasso, int passosMaximo);
    void passoBipolarSerieMotor2(int direcao, int tempoDePasso, int passosMaximo);

    virtual ~MotorDePasso();
};

#endif /* MOTORDEPASSO_H_ */