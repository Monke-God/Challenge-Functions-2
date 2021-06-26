#include <stdio.h>

int checkPrime(int num, int i)
{
    if (i == 1)
    {
        return 1;//numbers half is 1 that means nubmer is 2 so its prime
    }
    else
    {
        if (num % i == 0)
        {
            return 0;// num % i = 0 means that number is perfectly divisible by its half which means it is not prime 
        }
        else
        {
            return checkPrime(num, i - 1);//we will check if its is perfectly divisilble by any number below its half except 1
        }
    }
}
int main()
{
    int n;
    printf("Input the number to check wether it is prime or not\n");
    scanf("%d", &n);
    if (checkPrime(n, n / 2))//giving the number and its half as input 
    {
        printf("The number you have given as input is prime\n");
    }
    else
    {
        printf("The number you have given as input is not a prime\n");
    }
    return 0;
}
