#include<stdio.h>
int main()
{
int a = 446;
char b = 'C';
float c = 10.478;
double d = 104.789;

// print value and size of int variable
printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
printf("int a value: %d and size: %d bytes\n", b, sizeof(b));
printf("int a value: %d and size: %d bytes\n", c, sizeof(c));
printf("int a value: %d and size: %d bytes\n", d, sizeof(d));
return 0;
}

