#include <stdio.h> // Required for printf and scanf

// This is considered the "function prototype/declaration" instead of C#'s "method signature"
float ConvertToCelcius(float temperatureInFahrenheit) 
{
    float temperatureInCelsius = (temperatureInFahrenheit - 32.0) * 5.0 / 9.0;
    return temperatureInCelsius;
}

int main(void) 
{
    /*
        // Essentially Console.WriteLine()
        printf("Please enter a temperature value in Fahrenheit: ");
        float temperatureInFahrenheit;
        // Console.ReadLine()
        // "%f" is a format specifier that tells the compiler what type of data to expect from the user
        // & means "address of" (is a pointer) that tells scanf where the variable is located in memory
        // &temperatureInFahrenheit == "Write the value that's read from the user to memory location 0x0064C0A1 (example)"
        scanf("%f", &temperatureInFahrenheit);
        float temperatureInCelsius = ConvertToCelcius(temperatureInFahrenheit);
        // Similar to string.Format
        // The %f format specifier tells the compiler that the output variable is a float
        // The .2 in "%.2f" specifies that we only want two decimal places to be shown
        printf("The corresponding temperature in Celsius is %.2f C. \n", temperatureInCelsius);
    */

    // Print table header
    puts("Temperature Conversion Table");
    puts("============================");
    
    // Print table values, one row at a time
    for (float tempInF = 10.0; tempInF < 100.0; tempInF += 5.0)
    {
        float tempInC = ConvertToCelcius(tempInF);
        // .1 limits decimal places to 1 digit, 5.1 does same as well as 
        // specifying the number(s) before the digit has to occupy 5 spaces
        printf(" %.1f F      |      %5.1f C \n", tempInF, tempInC);
    }
    
    puts("----------------------------");

    return 0;
}