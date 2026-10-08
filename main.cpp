#include <iostream>
#include <conio.h>
#include <math.h>

// TEMPERATURE CONVERTER (CELSIUS, KELVIN, FAHRENHEIT)


int main() {
	double celsius_to_kelvin, celsius_to_fahrenheit, 
	kelvin_to_celsius, kelvin_to_fahrenheit, fahrenheit_to_celsius,
	fahrenheit_to_kelvin, user_current_temperature;
	int user_choice;
	char more = 'Y';
	
	do {
		std::cout << "\t\t--------TEMPERATURE CONVERTER--------\n";
		std::cout << "\t\tThese are your choices\n\n";
		
		std::cout << "\t\t***CELSIUS AND KELVIN***\n";
		std::cout << "\t\t[1] Celsius to Kelvin\n";
		std::cout << "\t\t[2] Kelvin to Celsius\n\n";
		
		std::cout << "\t\t***CELSIUS AND FAHRENHEIT***\n";
		std::cout << "\t\t[3] Celsius to Fahrenheit\n";
		std::cout << "\t\t[4] Fahrenheit to Celsius\n\n";
		
		std::cout << "\t\t***FAHRENHEIT AND KELVIN***\n";
		std::cout << "\t\t[5] Fahrenheit to Kelvin\n";
		std::cout << "\t\t[6] Kelvin to Fahrenheit\n\n";
		
		
		std::cout << "\t\tWhich temperature converter would you like to use? ";
		std::cin >> user_choice;
		
		switch (user_choice) {
			case 1:
				// CELSIUS TO KELVIN CONVERSION
				std::cout << "\t\t***CELSIUS TO KELVIN***\n";
				std::cout << "\t\tEnter the sample Celsius number to convert it to Kelvin: ";
				std::cin >> user_current_temperature;
				
				celsius_to_kelvin = user_current_temperature + 273.15;
				std::cout << "\t\tThe conversion of Celsius to Kelvin is" << " " << celsius_to_kelvin << std::endl;
				break;
			
			case 2:
				// KELVIN TO FAHRENHEIT CONVERSION
				std::cout << "\n\t\t***KELVIN TO CELSIUS***\n";
				std::cout << "\t\tEnter the sample Kelvin number to convert it to Celsius: ";
				std::cin >> user_current_temperature;
				
				kelvin_to_celsius = user_current_temperature - 273.15;
				std::cout << "\n\t\tThe conversion of Kelvin to Celsius is" << " " << kelvin_to_celsius << std::endl;
				break;
				
			case 3:
				// CELSIUS TO FAHRENHEIT CONVERSION
				std::cout << "\n\t\t***CELSIUS TO FAHRENHEIT***\n";
				std::cout << "\t\tEnter the sample Celsius number to convert it to Fahrenheit: ";
				std::cin >> user_current_temperature;
				
				celsius_to_fahrenheit = 1.8 * user_current_temperature + 32;
				std::cout << "\t\tThe conversion of Celsius to Fahrenheit is" << " " << celsius_to_fahrenheit << std::endl;
				break;
			
			case 4:
				// FAHRENHEIT TO CELSIUS
				std::cout << "\n\t\t***FAHRENHEIT TO CELSIUS***\n";
				std::cout << "\t\tEnter the sample Fahrenheit number to convert it to Celsius: ";
				std::cin >> user_current_temperature;
				
				fahrenheit_to_celsius = user_current_temperature - 32 / 1.8;
				std::cout << "\t\tThe conversion of Fahrenheit to Celsius is" << " " << fahrenheit_to_celsius << std::endl;
				break;
				
			case 5:
				// FAHRENHEIT TO KELVIN
				std::cout << "\n\t\t***FAHRENHEIT TO KELVIN***\n";
				std::cout << "\t\tEnter the sample Fahrenheit number to convert it to Kelvin: ";
				std::cin >> user_current_temperature;
				
				fahrenheit_to_kelvin = user_current_temperature - 32 * 0.5 + 273.15;
				std::cout << "\t\tThe conversion of Fahrenheit to Kelvin is" << " " << fahrenheit_to_kelvin << std::endl;
				break;
				
			case 6:
				// KELVIN TO FAHRENHEIT
				std::cout << "\n\t\t**KELVIN TO FAHRENHEIT***\n";
				std::cout << "\t\tEnter the sample Kelvin number to convert it to Fahrenheit: ";
				std::cin >> user_current_temperature;
				
				kelvin_to_fahrenheit = user_current_temperature - 273.15 * 0.5 + 32;
				std::cout << "\t\tThe conversion of Kelvin to Fahrenheit is" << " " << kelvin_to_fahrenheit << std::endl;
				break;
		}
		std::cout << "\t\tDo you want to continue [Y/N?] ";
		std::cin >> more;
		std::system ("cls");
		
	}
		while (more == 'Y' || more == 'y');
		
	return 0;
	
}