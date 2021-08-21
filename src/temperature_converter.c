#include <stdio.h> // Required for printf and scanf

int main(void) 
{
    // Essentially Console.WriteLine()
    printf("Please enter a temperature value in Fahrenheit: ");
    float temperatureInFahrenheit;
    // Console.ReadLine()
    // "%f" is a format specifier that tells the compiler what type of data to expect from the user
    // & means "address of" (is a pointer) that tells scanf where the variable is located in memory
    // &temperatureInFahrenheit == "Write the value that's read from the user to memory location 0x0064C0A1 (example)"
    scanf("%f", &temperatureInFahrenheit);
    float temperatureInCelsius = (temperatureInFahrenheit - 32) * 5 / 9; 
    // Similar to string.Format
    // The %f format specifier tells the compiler that the output variable is a float
    // The .2 in "%.2f" specifies that we only want two decimal places to be shown
    printf("The corresponding temperature in Celsius is %.2f C. \n", temperatureInCelsius);
    
    return 0;
}