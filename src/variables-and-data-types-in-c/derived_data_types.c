/*
Arrays:
    - Regular array, same as C#:
      int arr[5] = { 1, 2, 3, 4, 5 };
    - Mutltidimensional arrays with N dimensions
      int arr[5][4]; or int arr[10][5][2];
Pointers:
    - A variable that stores the address of another variable where this address
      is the memory location where the variable's value is stored .
*/
    int main() 
    {
        float var1 = 5;
        float *p = &var1;
        printf("%f \n", p); // Writes the address of the pointer
        printf("%f \n", *p); // Writes the value of the variable (5)
    }
/*
Functions:
    - To create a function, you should provide a function declaration and a 
      function definition. The declaration is defined before the function 
      definition and is outside of the main function.
*/      
    #include <stdio.h>
    #include <stdint.h>

    int calculateSum(int x, int y); // function declaration

    int main()
    {
        int sum = calculateSum(1, 2);
        printf("%d \n", sum);
    }

    int calculateSum(int x, int y) // function definition
    {
        return x + y;
    }
/*
Structures:
    - Represents a collection of members (variables), of possibly different
      types, into a single user defined type.
*/
    struct addressStruct
    {
        char name[100];
        char street[100];
        char city[50];
        char state[20];
        int pin;
    };

    int main() 
    {
        struct addressStruct miCasa = { "My House", "Street1", "City", "State", 0 };
        strcpy(miCasa.name, "Mi Casa");
        printf("%s \n", miCasa.name);
        printf("%s \n", miCasa.street);
    }
/*
Unions:
    - Similar to the struct type except that union uses the same memory location
    - Only one property of your union can contain a value at any given time,
      aka all properties share the same value.
*/
    union addressUnion
    {
        char name[100];
        char street[100];
        char city[50];
        char state[20];
        int pin;
    };

    int main() 
    {
        union addressUnion miCasa = { "My House" };
        printf("%s \n", miCasa.name); // My House
        strcpy(miCasa.street, "My Street");
        printf("%s \n", miCasa.street); // My Street
        printf("%s \n", miCasa.name); // My Street
    }