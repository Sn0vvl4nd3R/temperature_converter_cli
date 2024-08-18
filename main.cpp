#include <iostream>
#include <cstring>
#include <cstdlib>

double fahrenheit_to_celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

double celsius_to_fahrenheit(double celsius) {
    return (9.0 / 5.0) * celsius + 32.0;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " [-c | --Celsius | -f | --Fahrenheit] <value>" << std::endl;
        return 1;
    }

    double value = std::stod(argv[2]);

    if (std::strcmp(argv[1], "-c") == 0 || std::strcmp(argv[1], "--Celsius") == 0) {
        std::cout << celsius_to_fahrenheit(value) << " Fahrenheit" << std::endl;
    } else if (std::strcmp(argv[1], "-f") == 0 || std::strcmp(argv[1], "--Fahrenheit") == 0) {
        std::cout << fahrenheit_to_celsius(value) << " Celsius" << std::endl;
    } else {
        std::cerr << "Invalid option. Use -c or --Celsius for Celsius to Fahrenheit conversion, or -f or --Fahrenheit for Fahrenheit to Celsius conversion." << std::endl;
        return 1;
    }

    return 0;
}
