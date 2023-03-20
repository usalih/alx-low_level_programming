#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/** main - a program that would assign a random number to the variable 'n' each time it is executed 
 * by checking the value of 'n' and printing the right output stateme
 * Return 1 (Success)
 * */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0) 
{
    printf("%d is positive\n", n);
} 
else if (n == 0) 
{
    printf("%d is zero\n", n);
} 
else 
{
    printf("%d is negative\n", n);
}
return (0);
}
