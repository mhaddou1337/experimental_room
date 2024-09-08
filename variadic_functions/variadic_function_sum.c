
/*
Variadic Sum Function

    Objective: Write a function that computes the sum of an Variadic Sum Function

    Objective: Write a function that computes the sum of an arbitrary number of integers.
    Example Function: int sum(int count, ...);
    Usage: int total = sum(4, 1, 2, 3, 4); // This should return 10. number of integers.
    Example Function: int sum(int count, ...);
    Usage: int total = sum(4, 1, 2, 3, 4); // This should return 10.
*/

#include <stdio.h>
#include <stdarg.h>

int sum_calc(int c, ...)
{
    va_list numbers;
    va_start(numbers, c);
    int index = 0;
    int num_sum = 0;
    while (index < c)
    {
        num_sum += (int)va_arg(numbers,int);
        printf("%d \n", num_sum);
        index++;
    }

    va_end(numbers);
    
    return(num_sum);
}
int main(void)
{
    printf("return of function is \"%d \"", sum_calc(4, 1, 2, 3, 4));
    return(0);
}
