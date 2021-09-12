#include <XantoI2C.h>

#include "XantoKT0803L.h"

const uint8_t PIN_SCL = 8; //Пин СКЛ, в пиноуте на вашу плату найдите пин который работает как СКЛ
const uint8_t PIN_SDA = 9; //Пин СДА, в пиноуте на вашу плату найдите пин который работает как СДА

XantoKT0803L fm(PIN_SCL, PIN_SDA);

char snprintf_buffer[19] = "0x00 76543210 0x00";

fm.setFrequency(998); //частота 99.8 ФМ

void setup() {
}
void loop() {  
