//C program to check if a number is prime or not
#include <stdio.h>

int primecheck(int num)
{
    if (num%2==0||num%3==0||num%5==0||num%7==0)
    printf("Number is not prime");
    else
    printf("Number is prime");
}

int main()
{
    int num;
    printf("Enter the number of your choice: ");
    scanf("%d",&num);
    char result = primecheck(num);//calling primecheck function
    return 0;
}
