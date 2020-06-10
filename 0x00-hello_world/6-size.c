#include<stdio.h>
int main() {
int intType;
float floatType;
char charType;
long int longType;
long long int longlongType
printf("Size of a char: %d byte(s)\n", sizeof(charType));  
printf("Size of an int:  %d byte(s)\n", sizeof(intType));
 printf("Size of a long int: %ld byte(s)\n", sizeof(longType)); 
printf("Size of a long long int: %d byte(s)\n", sizeof(longlongType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));
return(0);

}
