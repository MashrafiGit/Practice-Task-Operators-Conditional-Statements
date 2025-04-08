#include <stdio.h>
int main()
{
    // let define variable
    int num;

    // get data from user
    scanf("%d", &num);

    // simply we use the modulus to verify user's data Even or Odd 
    if (num % 2 == 0)
    {
        printf("user's value is 'Even'");
    }
    else
    {
        printf("user's value is 'Odd'"); 
    }
    return 0;
}