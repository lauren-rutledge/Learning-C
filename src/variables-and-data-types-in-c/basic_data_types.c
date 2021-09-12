/*
Integral Types:
    Integer
        - signed and unsigned
        - short and long
        - fixed-width integer types
        - #include <stdint.h>
        - #include <inttypes.h> (added in C99)
            - Includes all definitions in the stdint header 
              plus some macros to use the printf operations of these types
    Char
        - char, unsigned char, signed char
        - Relies on the ASCII table
    Boolean
        - Added in the C99 standard
        - Can also store integers in this type where zero is converted to false and positive numbers are true
        - #include <stdbool.h>
    Enumeration
    Bit
        - unsigned int age : 7;
            - 7 bits is enough to range from age 0 to 128
            - This overrides the default 32-bit size of int and instead only uses 7 bits
    Void

Fixed-width Integer Types:
    - The fixed-width integer types enable you to use integer types with specific sizes to make your program
      portable and behave the same way in different systems
    - All these types are defined in the <inttypes.h> header and in the <stdint.h> header

    Exact-width
        - Enables you to specify the exact size of the integer type
            - int8_t
            - int16_t
            - int32_t
            - int64_t
            - uint8_t
            - uint16_t
            - uint32_t
            - uint64_t
    Minimum-width
        - Enables you to define an integer type with int_least n bits where n stands for the number of bits specified in the type
            - int_least8_t
            - int_least16_t
            - int_least32_t
            - int_least64_t
            - uint_least8_t
            - uint_least16_t
            - uint_least32_t
            - uint_least64_t
    Fastest minimum-width
        - Enables you to run your code in different systems with different architectures while maximizing the performance of your code
          when managing these variables 
            - int_fast8_t
            - int_fast16_t
            - int_fast32_t
            - int_fast64_t
            - uint_fast8_t
            - uint_fast16_t
            - uint_fast32_t
            - uint_fast64_t
    Greatest-width
        - Enables you to define variables with the signed or unsigned integer type with the maximum size available
        - Useful in scenarios where you need to store loads of information in those variables 
            - intmax_t
            - uintmax_t

Floating Types:
    Float
        - Smallest and fastest of the three floating types available
        - Declaration: float x = 3.0;
        - Format: 
            - printf("%f", x);
            - scanf("%f", &x);
    Double
        - Provides a bigger size to store bigger real numbers
        - Declaration: double x = 3.0;
        - Format:
            - printf("%f", x);
            - scanf("%f", &x);
    Long Double
        - Biggest
        - Declaration: long double x = 3.0;
        - Format: 
            - printf("%lf", x);
            - scanf("%lf", &x);
    docs.microsoft.com/en-us/cpp/c-language/storage-of-basic-types

Complex Types:
    Can be represented in the following form:
        - x + yi    (i2 = -1) // i squared, not "i two"
        - 3.0 + 4.0i = 3.0 + 4.0 * _Complex_I
    Header: #include <complex.h>
    Standard types:
        - float complex or float_Complex
        - double complex or double_Complex
        - long double complex or long double_Complex
    Microsoft's types:
        - _Fcomplex
        - _Dcomplex
        - _Lcomplex
    https://docs.microsoft.com/en-us/cpp/c-runtime-library/complex-math-support?view=msvc-160&viewFallbackFrom=vs-2019
*/