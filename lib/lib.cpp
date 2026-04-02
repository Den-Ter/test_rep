#include "lib.h"

EMode ParseMode(char* mode){
    if (strcmp(mode, "f2c") == 0) return kF2C;
    if (strcmp(mode, "c2f") == 0) return kC2F;
    return kUnspecified;
}


double CelsiusToFahrenheit(double celsius){
    return celsius * 9 / 5 + 32;
}

double FahrenheitToCelsius(double fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}