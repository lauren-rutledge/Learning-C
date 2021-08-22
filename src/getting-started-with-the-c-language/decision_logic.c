#include <stdio.h>
#include <string.h>

int main(void)
{
    //
    // ----------------- If-else -----------------
    //

    char password[20];
    printf("Please enter the password: ");
    scanf("%19s", password);

    // Can't compare strings with ==
    if (strcmp(password, "Pluralsight") == 0) {
        printf("Correct password! \n");
    } else {
        printf("Wrong password. :( \n");
    }

    //
    // ----------------- If-elseif -----------------
    //

    printf("Please enter an integer number: ");
    int number1;
    scanf("%d", &number1);

    printf("Please enter another integer number: ");
    int number2;
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("number1 > number2 \n");
    } else if (number1 < number2) {
        printf("number1 < number2 \n");
    } else {
        printf("number1 == number2 \n");
    }

    //
    // ----------------- Switch -----------------
    //

    // Switch statement expressions are limited to integral types such as int or char.
    // We would have to use the if-elseif ladder for strings or floats.
    // Switch cases have to be constant expressions - no ranges.

    int number;
    printf("Please enter an integer number: ");
    scanf("%d", &number);

    switch (number) {
    case 1:
        printf("You entered one. \n");
        break;
    case 10:
        printf("You entered ten. \n");
        break;
    case 64:
        printf("You entered sixty-four. \n");
    default:
        printf("You entered a number different than 1, 10, or 64. \n");
        break;
    }

    //
    // ----------------- Ternary Conditional Operator -----------------
    //

    int maxNumber = number1 > number2 ? number1 : number2;

    //
    // ----------------- Boolean values -----------------
    //

    // If an expression evaluates to 0, then it is false
    // Any value other than 0 is true
    // Beware of subtle bugs like this where the C# compiler would comlain because it wont
    // interpret 64 as a "truthy" value (no implicit conversion):
    printf("Please enter an integer number: ");
    int n;
    scanf("%d", &n);

    if (n = 64) { // Assignment operator returns 64 which is true, should be ==
        printf("This will always execute. \n");
    }

    return 0;
}