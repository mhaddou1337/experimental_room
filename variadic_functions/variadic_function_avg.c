/*
Variadic Average Calculator

    Objective: Implement a function to calculate the average of a given set of numbers.
    Example Function: double average(int count, ...);
    Usage: double avg = average(5, 1, 2, 3, 4, 5); // This should return 3.0.
*/

#include <stdio.h>
#include <stdarg.h>

double avg_calc(int c, ...)
{
    va_list numbers;
    va_start(numbers,c);
    int index = 0;
    double sum_numbers = 0;
    while (index < c)
    {
       sum_numbers = sum_numbers + va_arg(numbers,int);
       index++;
    }

    va_end(numbers);
    return(sum_numbers / c);
}
int main(void)
{
    printf("average of given numbers is \"%0.2lf\"", avg_calc(5, 1, 2, 3, 4, 5));
    return(0);
}