#include<stdio.h>
int main(void)
{
int intType;
float floatType;
char charType;
long int longType;
long long int longlongType;
printf("Size of a char: %li byte(s)\n", sizeof(charType));  
printf("Size of an int:  %li byte(s)\n", sizeof(intType));
printf("Size of a long int: %li byte(s)\n", sizeof(longType)); 
printf("Size of a long long int: %li byte(s)\n", sizeof(longlongType));
printf("Size of a float: %li byte(s)\n", sizeof(floatType));
return (0);
}
