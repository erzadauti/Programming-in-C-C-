*CH-230-A
A3p8.c
Erza Dauti
edauti@constructor.university
*/



#include <stdio.h>

// Function to compute the sum of the numbers
float compute_sum(float numbers[], int count)
{
    float sum = 0.0;
    for (int i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    return sum;
}

// Function to compute the average of the numbers
float compute_average(float sum, int count)
{
    return sum / count;
}

int main()
{
    float numbers[10];
    int count = 0;
    float num;

    // Read numbers from the keyboard
    printf("Enter up to 10 floats (enter -99.0 to stop):\n");
    while (count < 10)
    {
        scanf("%f", &num);
        if (num == -99.0)
        {
            break;
        }
        numbers[count] = num;
        count++;
    }

    // Compute the sum and average
    float sum = compute_sum(numbers, count);
    float average = compute_average(sum, count);

    // Print the results
    printf("Sum: %02f\n", sum);
    printf("Average: %02f\n", average);

    return 0;
}