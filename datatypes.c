#include <stdio.h>


void printf_type_size (char type_name[], unsigned long size)
{
printf("%17s:%4lu \n", type_name, size);
}


int main ()
{

// Print C predefined datatypes size

printf_type_size("Integer", sizeof(int));
printf_type_size("Unsigned", sizeof(short));
printf_type_size("Short", sizeof(short));
printf_type_size("Unsigned short", sizeof(unsigned short));
printf_type_size("Long", sizeof(long));
printf_type_size("Unsigned Long", sizeof(unsigned long));

printf_type_size("Float", sizeof(float));
printf_type_size("Double", sizeof(double));
printf_type_size("Long double", sizeof(double));

printf_type_size("Char", sizeof(char));

printf_type_size("Array of 10 int", sizeof(int[10]));
printf_type_size("String <Hello>", sizeof("Hello"));
}
