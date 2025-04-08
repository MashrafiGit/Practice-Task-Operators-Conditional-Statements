#include <stdio.h>
int main()
{
    // let define variable
    int num;

    // get data from user
    scanf("%d", &num);

    // simply we use the grater than to verify user's data or Positive or Negative 
    if (num >= 0)
    {
        printf("user's value is 'Positive'");
    }
    else
    {
        printf("user's value is 'Negative'"); 
    }
    return 0;
}