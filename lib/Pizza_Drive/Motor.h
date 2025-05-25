#include <Arduino.h>

class Motor{
    private:
        uint8_t ENB_;
        uint8_t PWMA_;
        uint8_t PWMB_;
        uint8_t ENCX_;
        uint8_t ENCA_;
        uint8_t ENCB_;
        bool Reverse_ = false;
    public:
        Motor(uint8_t Enable, uint8_t PWM_A, uint8_t PWM_B, uint8_t Encoder_X, uint8_t Encoder_A, uint8_t Encoder_B):
        ENB_(Enable), PWMA_(PWM_A), PWMB_(PWM_B), ENCX_(Encoder_X), ENCA_(Encoder_A), ENCB_(Encoder_B){begin();}
        Motor(uint8_t Enable, uint8_t PWM_A, uint8_t PWM_B):
        Motor(Enable, PWM_A, PWM_B, 0, 0, 0){}
        ~Motor() = default;
        void begin(){
            pinMode(ENB_, OUTPUT);
            pinMode(PWMA_, OUTPUT);
            pinMode(PWMB_, OUTPUT);
            if(ENCX_ != 0){
                pinMode(ENCX_, INPUT);
                pinMode(ENCA_, INPUT);
                pinMode(ENCB_, INPUT);
            }
        }
        void setPWM(float PWM){
            PWM = constrain(PWM, -255, 255);
            if(PWM < 0){
                digitalWrite(ENB_, HIGH);
                analogWrite(PWMA_, abs(PWM));
                analogWrite(PWMB_, 0);
            }else if(PWM > 0){
                digitalWrite(ENB_, HIGH);
                analogWrite(PWMA_, 0);
                analogWrite(PWMB_, abs(PWM));
            }else{
                digitalWrite(ENB_, HIGH);
                analogWrite(PWMA_, 0);
                analogWrite(PWMB_, 0);
            }
        }
}; 