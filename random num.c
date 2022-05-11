
#include <stdio.h>
#include <stdlib.h>
/**
 * Get random number between 0 and max_number [0, max_number).
 * @param max_number
 * @return Random number
 */

int get_random_number(int max_number)
{
    int randomNum = rand() % max_number;
    return randomNum;
}

int main ()
{
    int number;   
    printf("Enter an integer as max_number: ");  
    scanf("%d", &number);
    printf("%d\n", get_random_number(number);
    return 0;
}