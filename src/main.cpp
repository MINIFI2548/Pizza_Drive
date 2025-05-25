#include <Arduino.h>
#include <Pizza_Drive.h>

#define MOTOR1_ENB 3
#define MOTOR1_PWM_A 4
#define MOTOR1_PWM_B 5
#define MOTOR1_ENC_X 6
#define MOTOR1_ENC_A 7
#define MOTOR1_ENC_B 8
// Motor motor1(MOTOR1_ENB, MOTOR1_PWM_A, MOTOR1_PWM_B, MOTOR1_ENC_X, MOTOR1_ENC_A, MOTOR1_ENC_B); // with encoder
Motor motor1(MOTOR1_ENB, MOTOR1_PWM_A, MOTOR1_PWM_B); // without encoder

#define MOTOR2_ENB 20
#define MOTOR2_PWM_A 19
#define MOTOR2_PWM_B 18
#define MOTOR2_ENC_X 21
#define MOTOR2_ENC_A 16
#define MOTOR2_ENC_B 17
// Motor motor2(MOTOR2_ENB, MOTOR2_PWM_A, MOTOR2_PWM_B, MOTOR2_ENC_X, MOTOR2_ENC_A, MOTOR2_ENC_B); // with encoder
Motor motor2(MOTOR2_ENB, MOTOR2_PWM_A, MOTOR2_PWM_B); // without encoder

#define MOTOR3_ENB 9
#define MOTOR3_PWM_A 10
#define MOTOR3_PWM_B 11
#define MOTOR3_ENC_X 13
#define MOTOR3_ENC_A 15
#define MOTOR3_ENC_B 14
// Motor motor3(MOTOR3_ENB, MOTOR3_PWM_A, MOTOR3_PWM_B, MOTOR3_ENC_X, MOTOR3_ENC_A, MOTOR3_ENC_B); // with encoder
Motor motor3(MOTOR3_ENB, MOTOR3_PWM_A, MOTOR3_PWM_B); // without encoder

Pizza_Drive driver(&motor1, &motor2, &motor3);





void setup() {

}

void loop() {

}
