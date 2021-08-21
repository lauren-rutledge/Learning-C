#include <stdio.h> // Required for functions like strcpy and strcat
#include <string.h> // Required for functions like strcpy_s and strcat_s 

// There is no built in special class for strings. Instead, strings are just
// **sequences of characters that occupy contiguous memory locations**

int main(void)
{
    // C# equivalent: string name = "Connie";
    char sampleName[] = "Connie";
    // All strings in C are null terminated, so the string "Connie" will occupy 
    // 7 bytes in memory - one for each letter and then the null char \0
    // Without the null char, if you attempted to read the string from memory, it 
    // would just keep going into the next spaces, regardless of what data type they really represent

    printf("What is your name?\n");

    // To read a string from the console:
    char name[40]; // Has 39 chars for input and 1 for null
    scanf("%s", name);

    // The string format specifier "%s" can be changed to "%39s" to protect against bad input
    // This limits the incoming string to 39 chars
    
    // Note there is no & needed for strings before the variable name.
    // ** Rule in C: The name of an array is equivalent to the address of its first elemtent.**
    // It's almost like the & is already included in the array name.

    // Printing a string:
    printf("Nice to meet you, %s.\n", name);

    // Copying strings (unsafe):
    char source[] = "source";
    char unsafeDestination[100];
    strcpy(unsafeDestination, source);

    // Concatenating strings (unsafe):
    // Appends source to destination
    strcat(unsafeDestination, source);

    // To get the string "{inputName} is learning C.", instead of doing something like
    // var message = inputName + " is " + "learning C."
    // You would do:
    char unsafeMessage[100];
    // Initializing a string to empty right after allocation can help prevent
    // weird chars from being prepended to it
    unsafeMessage[0] = '\0';
    strcat(unsafeMessage, name);
    strcat(unsafeMessage, " is ");
    strcat(unsafeMessage, "learning C.");

    // These functions are UNSAFE.
    // The safe versions have more runtime checks for things like buffer overflow
    // Safe string functions require destination buffer size as an argument.

    // Copying strings (safe):
    char safeDestination[100];
    strcpy_s(safeDestination, 100, source);

    // Concatenating strings (safe):
    char safeMessage[100];
    safeMessage[0] = '\0';
    strcat_s(safeMessage, 100, name);
    strcat_s(safeMessage, 100, " is ");
    strcat_s(safeMessage, 100, "learning C.");
    // Alternative, we can use a variable for the buffer size:
    strcat_s(safeMessage, sizeof(safeMessage), "\nGoodbye.");

    // These safe versions stop writing characters when the buffer size is reached
    // Yay, no overflows! ＼(＾O＾)／

    // Puts is an alternative to printf that doesn't take any formatting
    // It also appends a \n at the end
    puts(safeMessage);

    return 0;
}