#pragma once

#include <cstring>

enum EMode{
    kUnspecified,
    kF2C,
    kC2F
};

EMode ParseMode(char* mode);

double CelsiusToFahrenheit(double celsius);

double FahrenheitToCelsius(double fahrenheit);