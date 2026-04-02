#include <iostream>
#include <cstring>
#include "lib/lib.cpp"



int main(int argc, char** argv) {
    if (argc != 3){
        std::cout << "Usage ./degree_conventer f2c 123!";
        return 1;
    }

    double degrees = std::stod(argv[2]);
    EMode mode = ParseMode(argv[1]);
    switch (mode)
    {
        case kF2C:
            std::cout << "C = " << FahrenheitToCelsius(degrees) << '\n';
            break;
        case kC2F:
            std::cout << "F = " << CelsiusToFahrenheit(degrees) << '\n';
        default:
            std::cout << "Error";
            break;
    }
}