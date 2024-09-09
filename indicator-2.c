#include <stdio.h>

void cubearray(int *array, int row, int col)
 {
    int size = row * col;
    for (int i = 0; i < size; i++)
	{
        array[i] = array[i] * array[i] * array[i];
    } 
}

main()
{
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int array[row][col];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < row; i++) 
	{
        for (int j = 0; j < col; j++)
		 {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    cubearray(&array[0][0], row, col);


    printf("Array after cubing the elements:\n");
    for (int i = 0; i < row; i++)
	 {
        for (int j = 0; j < col; j++)
		 {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

}
