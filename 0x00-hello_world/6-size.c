#include<stdio.h>
int main() {
int intType;
float floatType;
char charType;
long int longType;
long long int longlongType;
printf("Size of a char: %c byte(s)\n", sizeof(charType));  
printf("Size of an int:  %d byte(s)\n", sizeof(intType));
 printf("Size of a long int: %li byte(s)\n", sizeof(longType)); 
printf("Size of a long long int: %lli byte(s)\n", sizeof(longlongType));
printf("Size of a float: %f byte(s)\n", sizeof(floatType));
return(0);

}
