#include <stdio.h>
// int main()
// {
//     int i;
//     int sum = 0;
//     for (i = 1; i <= 10; i++)
//     {
//         sum = sum + i;
//     }
//     printf("The sum is:%d", sum);
//     return 0;
// }

// int main()
// {
//     int i;
//     int fact = 1;
//     for (i = 5; i >= 1; i--)
//     {
//         fact *= i;
//     }
//     printf("The fact is: %d", fact);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char alp;

//     printf("Enter a character: ");
//     scanf(" %c", &alp);

//     if (alp >= 'A' && alp <= 'Z')
//     {
//         alp = alp + 32;
//     }

//     printf("Character in lowercase: %c\n", alp);

//     return 0;
// }

// int main()
// {
//     char ch;
//     printf("Enter:");
//     ch = getche();

//     while (ch != 13)
//     {
//         if (ch >= 'A' && ch <= 'Z')
//         {
//             ch = ch + 32;
//         }
//         printf("\n%c", ch);
//         printf("Enter:");
//         ch = getche();
//         printf("\n%c", ch);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int rows;
//     char ch = 'A';

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c ", ch);
//         }
//         ch++;
//         printf("\n");
//     }

//     return 0;
// }
// int cube()
// {
//     int num;
//     printf("Enter number:");
//     scanf("%d", &num);
//     int cube = num * num * num;
//     printf("The cube is: %d", cube);
//     return cube;
// }

// int main()
// {
//     cube();
//     return 0;
// }
void swap(int *num1, int *num2, int *num3)
{
    int swap = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = swap;
}
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Before swap: num1=%d, num2=%d , num3=%d\n", num1, num2, num3);
    swap(&num1, &num2, &num3);
    printf("After swap: num1=%d, num2=%d, num3=%d\n", num1, num2, num3);
    return 0;
}