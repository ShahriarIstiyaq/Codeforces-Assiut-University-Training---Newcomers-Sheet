// Swapping With Matrix.

int arr[510][510];
int num_of_element;

#include <stdio.h>

// void swap(int *num1, int *num2)
// {
//     int temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
// }

void swapRow(int row1, int row2)
{
    for (int i = 1; i <= num_of_element; i++)
    {
        int temp = arr[row1][i];
        arr[row1][i] = arr[row2][i];
        arr[row2][i] = temp;
    }
}

void swapCol(int col1, int col2)
{
    for (int i = 1; i <= num_of_element; i++)
    {
        int temp = arr[i][col1];
        arr[i][col1] = arr[i][col2];
        arr[i][col2] = temp;
    }
}

int main()
{

    int num1, num2;
    scanf("%d", &num_of_element);
    scanf("%d%d", &num1, &num2);

    for (int i = 1; i <= num_of_element; i++)
        for (int j = 1; j <= num_of_element; j++)
            scanf("%d", &arr[i][j]);

    swapRow(num1, num2);
    swapCol(num1, num2);

    for (int i = 1; i <= num_of_element; i++)
    {
        for (int j = 1; j <= num_of_element; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }
}