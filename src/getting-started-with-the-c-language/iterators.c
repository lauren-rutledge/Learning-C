#include <stdio.h>
#include <string.h>

int main(void) 
{
    //
    // ----------------- for loop -----------------
    //

    // Prints the string "Underline me!" then a row of _ to underline it
    char stringToUnderline[] = "Underline me!";
    printf("%s \n", stringToUnderline);
    int length = strlen(stringToUnderline);
    for (int i = 0; i < length; i++)
    {
        putchar('-');
    }
    putchar('\n');

    // Prints a * box around the string "Center"
    char centeredText[] = "Center";
    int borderWidth = strlen(centeredText) + 5;
    for (int i = 0; i < borderWidth - 1; i++)
    {
        putchar('*');
    }
    printf("\n* %s *\n", centeredText);
    for (int i = 0; i < borderWidth -1; i++)
    {
        putchar('*');
    }

    // Prints a table of multiplication values
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            // %3 specifies a minimum width of three spaces
            printf("%3d ", i*j);
        }
        putchar('\n');
    }

    // Output:
    /*
         1   2   3   4   5   6   7   8   9  10
         2   4   6   8  10  12  14  16  18  20
         3   6   9  12  15  18  21  24  27  30
         4   8  12  16  20  24  28  32  36  40
         5  10  15  20  25  30  35  40  45  50
         6  12  18  24  30  36  42  48  54  60
         7  14  21  28  35  42  49  56  63  70
         8  16  24  32  40  48  56  64  72  80
         9  18  27  36  45  54  63  72  81  90
        10  20  30  40  50  60  70  80  90 100
    */ 

    //
    // ----------------- while loop -----------------
    //

    // Uses the while loop to compute the length of a string (like strlen)
    char string[] = "Iterate me";
    int strLength = 0;
    while (string[strLength] != '\0') {
        strLength ++;
    }

    printf("String: \"%s\" \n", string);
    printf("Length: %d chars \n", strLength);
    

    //
    // ----------------- do-while -----------------
    //

    char answer[10];
    int i = 0;

    do {
        i++;
        printf("Iteration #%d \n", i);
        printf("Do you want to continue? [Enter NO to quit] ");
        scanf("%9s", answer);
    } while (strcmp(answer, "NO") != 0);


    return 0;
}