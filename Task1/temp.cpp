#include <iostream>

using namespace std;

int main() {
    float temp, kelvin, celsius, far;  // far - Fahrenheit
    int choice;
    
    cout << "Units are:" << endl;
    cout << "1. Kelvin" << endl;
    cout << "2. Celsius" << endl;
    cout << "3. Fahrenheit" << endl;
    cout << "Choose the unit you want to convert: ";
    cin >> choice;

    switch(choice) {
        case 1:  // temp is in Kelvin
            cout << "Enter the temperature in Kelvin: ";
            cin >> kelvin;
            celsius = kelvin - 273.15;
            far = 1.8 * celsius + 32;
            cout << "Temperature in Celsius is: " << celsius << endl;
            cout << "Temperature in Fahrenheit is: " << far << endl;
            break;

        case 2:  // temp is in Celsius
            cout << "Enter the temperature in Celsius: ";
            cin >> celsius;
            kelvin = celsius + 273.15;
            far = 1.8 * celsius + 32;
            cout << "Temperature in Kelvin is: " << kelvin << endl;
            cout << "Temperature in Fahrenheit is: " << far << endl;
            break;

        case 3:  // temp is in Fahrenheit
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> far;
            celsius = (far - 32) * 5 / 9;
            kelvin = celsius + 273.15;
            cout << "Temperature in Kelvin is: " << kelvin << endl;
            cout << "Temperature in Celsius is: " << celsius << endl;
            break;

        default:
            cout << "Please enter a valid option!" << endl;
            break;
    }

    return 0;
}
