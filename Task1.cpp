#include <iostream>
using namespace std;

double celsiusToFahrenheit(double c);
double celsiusToKelvin(double c);
double fahrenheitToCelsius(double f);
double fahrenheitToKelvin(double f);
double kelvinToCelsius(double k);
double kelvinToFahrenheit(double k);

int main() {
    int choiceFrom, choiceTo;
    double inputTemp, convertedTemp;

    cout << "Temperature Converter\n";
    cout << "1. Celsius\n2. Fahrenheit\n3. Kelvin\n";
    cout << "Select the input scale (1-3): ";
    cin >> choiceFrom;

    cout << "Enter the temperature value: ";
    cin >> inputTemp;

    cout << "Select the target scale (1-3): ";
    cin >> choiceTo;

    if (choiceFrom == choiceTo) {
        convertedTemp = inputTemp;
    } else {
        switch (choiceFrom) {
            case 1: // From Celsius
                if (choiceTo == 2)
                    convertedTemp = celsiusToFahrenheit(inputTemp);
                else if (choiceTo == 3)
                    convertedTemp = celsiusToKelvin(inputTemp);
                break;
            case 2: // From Fahrenheit
                if (choiceTo == 1)
                    convertedTemp = fahrenheitToCelsius(inputTemp);
                else if (choiceTo == 3)
                    convertedTemp = fahrenheitToKelvin(inputTemp);
                break;
            case 3: // From Kelvin
                if (choiceTo == 1)
                    convertedTemp = kelvinToCelsius(inputTemp);
                else if (choiceTo == 2)
                    convertedTemp = kelvinToFahrenheit(inputTemp);
                break;
            default:
                cout << "Invalid input scale selected.\n";
                return 1;
        }
    }

    cout << "Converted Temperature: " << convertedTemp << endl;
    return 0;
}

double celsiusToFahrenheit(double c) {
    return (c * 9/5) + 32;
}

double celsiusToKelvin(double c) {
    return c + 273.15;
}

double fahrenheitToCelsius(double f) {
    return (f - 32) * 5/9;
}

double fahrenheitToKelvin(double f) {
    return (f - 32) * 5/9 + 273.15;
}

double kelvinToCelsius(double k) {
    return k - 273.15;
}

double kelvinToFahrenheit(double k) {
    return (k - 273.15) * 9/5 + 32;
}
