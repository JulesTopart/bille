
#include <Arduino.h>
#include <Servo.h>

Servo footA;
Servo footB;
Servo kneeA;
Servo kneeB;
Servo body;
Servo lockA;
Servo lockB;


void attachA(bool state){
    if(state) lockA.write(10);
    else lockA.write(50);
}

void attachB(bool state){
    if(state) lockB.write(20);
    else lockB.write(50);
}

void pos0(){

    kneeA.write(0);
    kneeB.write(5);

    footA.write(60);
    footB.write(85);
    
    body.write(65);

    attachA(true);
    attachB(false);
}

void pos1(){
    kneeA.write(30);
    kneeB.write(5);

    footA.write(60);
    footB.write(85);
    body.write(50);

    attachA(true);
    attachB(false);
}

void pos2(){

}

void pos3(){

}




void setup(){
    footA.attach(2);
    footB.attach(6);
    kneeA.attach(4);
    kneeB.attach(7);
    body.attach(5);
    lockA.attach(8);
    lockB.attach(3);
}



void loop(){

    pos0();
    //delay(1000);
    //pos1();



    delay(2000);
    //while(true);

}

