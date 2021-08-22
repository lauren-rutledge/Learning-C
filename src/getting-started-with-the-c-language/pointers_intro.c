#include <stdio.h>

// No good, this passes by value :(
void BuggySwap(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
}

// Passes by reference (kinda) using pointers
void GoodSwap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Initial values: \n x = %d; y = %d \n\n", x, y);
    // The BuggySwap function operates on copies of x and y
    BuggySwap(x, y);

    printf("Values after calling BuggySwap: \n x = %d; y = %d \n", x, y);

    // Passes pointers to x and y
    GoodSwap(&x, &y);
    printf("Values after calling GoodSwap: \n x = %d; y = %d \n", x, y);

    return 0;
}

void PointerNotes(void)
{
    // Pointers
    // A pointer is essentially a variable that stores a memory address

    // Let's say we create a variable like this
    // It will have a memory address in hexadecimal like 0x001234AB
    int n = 64;
    // We can then create another variable to be a pointer to n
    // This means that p contains the memory address of n
    int *p = &n;
    // We can also initialize a pointer to null which signifies that the
    // pointer isn't pointing to anything
    int *nullPointer = NULL;

    // Pointer dereferencing
    // We can write a new value into n using the pointer p. This allows us 
    // to access the pointer target for (in this case) both reading and writing
    *p = 500;
}