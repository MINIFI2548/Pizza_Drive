#include <Arduino.h>
#include <Motor.h>

class Pizza_Drive{
    private :
        Motor *motor1_;
        Motor *motor2_;
        Motor *motor3_;
    public : 
        Pizza_Drive(Motor *motor1, Motor *motor2, Motor *motor3):
        motor1_(motor1), motor2_(motor2), motor3_(motor3){}
        ~Pizza_Drive() = default;
        void run(float pwm1, float pwm2, float pwm3){
            motor1_->setPWM(pwm1);
            motor2_->setPWM(pwm2);
            motor3_->setPWM(pwm3);
        }
};