#include <stdio.h> // Required for functions like strcpy and strcat

// There is no built in special class for strings. Instead, strings are just
// **sequences of characters that occupy contiguous memory locations**

int main(void)
{
    // C# equivalent: string name = "Connie";
    char name[] = "Connie";
    // All strings in C are null terminated, so the string "Connie" will occupy 
    // 7 bytes in memory - one for each letter and then the null char \0
    // Without the null char, if you attempted to read the string from memory, it 
    // would just keep going into the next spaces, regardless of what data type they really represent

    // To read a string from the console:
    char inputName[40]; // Has 39 chars for input and 1 for null
    scanf("%s", name);

    // The string format specifier "%s" can be changed to "%39s" to protect against bad input
    // This limits the incoming string to 39 chars
    
    // Note there is no & needed for strings before the variable name.
    // ** Rule in C: The name of an array is equivalent to the address of its first elemtent.**
    // It's almost like the & is already included in the array name.

    // Printing a string:
    printf("Nice to meet you, %s", inputName);

    // Copying strings (unsafe):
    char source[] = "source";
    char destination[100];
    strcpy(destination, source);

    // Concatenating strings (unsafe):
    // Appends source to destination
    strcat(destination, source);

    // To get the string "{inputName} is learning C.", instead of doing something like
    //     var message = inputName + " is " + "learning C."
    // You would do:
    char message[100];
    strcpy(message, inputName);
    strcpy(message, " is ");
    strcpy(message, "learning C.");

    // These functions are UNSAFE.
    // The safe versions have more runtime checks for things like buffer overflow
    
    // Safe string functions require destination buffer size as an argument:

    // Copying strings (safe):
    strcpy_s(message, 100, inputName);
    strcpy_s(message, 100, " is ");
    strcpy_s(message, 100, "learning C.");
    // Alternative, we can use a variable for the buffer size:
    strcpy_s(message, sizeof(message), "whatever");

    // These safe versions stop writing characters when the buffer size is reached
    // Yay, no overflows! ＼(＾O＾)／
}