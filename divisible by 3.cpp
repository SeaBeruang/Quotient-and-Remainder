/*
 * C program to find the number of integers divisible by 
 * 5 between the given range num1 and num2, where num1 < num2.
 *
 * Also find the sum of all these integer numbers which are divisible
 * by 5 and display the total.
 */
#include <stdio.h>
 
int main()
{
    int i, num1, num2, count = 0, sum = 0;
 
    printf("Enter the value of num1 and num2 \n");
    scanf("%d %d", &num1, &num2);
    /* Count the number and compute their sum*/
    printf("Integers divisible by 5 are \n");
    for (i = num1; i < num2; i++)
    {
        if (i % 3 == 0 && i % 6 != 0)
        {
            printf("%3d,", i);
            count++;
            sum = sum + i;
        }
    }
    printf("\n Number of integers divisible by 3 between %d and %d = %d\n", num1, num2, count);
    printf("Sum of all integers that are divisible by 5 = %d\n", sum);
}
