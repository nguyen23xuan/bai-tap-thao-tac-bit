#include <stdio.h>
#include <stdint.h>
// #include <struct.c>

#define HIGH 1
#define LOW 0
uint8_t PORTa = 0b00000000;

void digitalWrite(uint8_t PIN, uint8_t status){
    uint8_t PORTx = 0b10000000;
    if(status == HIGH){
        PORTa = PORTa | PORTx >> PIN;
    }else{
        PORTx = ~ (PORTx >> PIN);
        PORTa = PORTa & PORTx;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(0, HIGH);
    digitalWrite(2, LOW);
    printf("%d", PORTa);

    //-------
    printf("\nin ra bay ba");
    printf("\nin ra bay ba");
    printf("\nin ra bay ba");
    return 0;
}
