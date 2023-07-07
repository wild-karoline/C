/*
 * Data types and their size
 *
 * Author: K. Wild
 * Date: 07.07.2023
 */

#include <stdio.h>
// get ranges 
#include <limits.h>

// check ASCII table for more info
char char_value = '\0'; 
int int_value;
short short_value = 0;
long long_value = 0;
long long long_long_value = 0;
float float_value = 0.0f;
double double_value = 0.0;
long double long_double_value = 0.0;

int main(void) 
{
  int_value = 0;
  printf("Size of char:		%2lu byte(s)\n", sizeof char_value);
  printf("Range of signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("Range of unsigned char: 0 to %d\n\n", UCHAR_MAX);
  printf("Size of int:		%2lu byte(s)\n", sizeof int_value);
  printf("Range of signed int: %d to %d\n", INT_MIN, INT_MAX);
  printf("Range of unsigned int: 0 to %u\n\n", UINT_MAX);
  printf("Size of short:	%2lu byte(s)\n", sizeof short_value);
  printf("Range of signed short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
  printf("Range of unsigned short int: 0 to %d\n\n", USHRT_MAX);
  printf("Size of long:		%2lu byte(s)\n", sizeof long_value);
  printf("Range of signed long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
  printf("Range of unsigned long int: 0 to %lu\n\n", ULONG_MAX);
  printf("Size of long long:	%2lu byte(s)\n", sizeof long_long_value);
  printf("Size of float:	%2lu byte(s)\n", sizeof float_value);
  printf("Size of double:	%2lu byte(s)\n", sizeof double_value);
  printf("Size of long double:	%2lu byte(s)\n", sizeof long_double_value);
  return 0;    
}