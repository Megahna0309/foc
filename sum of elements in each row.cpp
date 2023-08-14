#include <stdio.h>
int main() 
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int matrix[rows][columns];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < columns; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Sum of elements in each row:\n");
    for (int i = 0; i < rows; i++) 
	{
        int rowSum = 0;
        for (int j = 0; j < columns; j++) 
		{
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }
    return 0;
}