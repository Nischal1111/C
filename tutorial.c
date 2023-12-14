#include <stdio.h>

// int main()
// {
//     int array[5] = {1, 2, 3, 4, 5};
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         printf("\nIndex: %d value:%d", i, array[i]);
//     }
//     return 0;
// }

// int main()
// {
//     int size, i;

//     printf("Enter size: ");
//     scanf("%d", &size);

//     int a[size];

//     printf("Enter elements: ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Entered elements are: ");
//     for (i = 0; i < size; i++)
//     {
//         printf("\nIndex:%d value:%d", i, a[i]);
//     }

//     return 0;
// }

int main()
{
    int a[2][3] = {{0, 1, 2}, {3, 4, 5}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nRow: %d column: %d value: %d", i, j, a[i][j]);
        }
    }
}