#include<stdio.h>
int main(void)
{
int intType;
float floatType;
char charType;
long int longType;
long long int longlongType;
printf("Size of a char: %u byte(s)\n", sizeof(charType));  
printf("Size of an int: %u byte(s)\n", sizeof(intType));
printf("Size of a long int: %u byte(s)\n", sizeof(longType)); 
printf("Size of a long long int: %u byte(s)\n", sizeof(longlongType));
printf("Size of a float: %u byte(s)\n", sizeof(floatType));
return (0);
}
