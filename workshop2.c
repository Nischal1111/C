#include <stdio.h>

// int perimeter(int l, int b)
// {
//     printf("%d", 2 * (l + b));

//     return 0;
// }
// int main()
// {
//     int length, breadth;

//     printf("Enter length;");
//     scanf("%d", &length);
//     printf("Enter breadth;");
//     scanf("%d", &breadth);

//     perimeter(length, breadth);
//     return 0;
// }

// int mid(int x1, int y1, int x2, int y2)
// {
//     printf("THe first mid is: %d", ((x1 + y1) / 2));
//     printf("THe second mid is: %d", ((x2 + y2) / 2));
//     return 0;
// }
// int main()
// {
//     int x1, y1, x2, y2;
//     printf("Enter x1:");
//     scanf("%d", &x1);
//     printf("Enter y1:");
//     scanf("%d", &y1);
//     printf("Enter x2:");
//     scanf("%d", &x2);
//     printf("Enter y2:");
//     scanf("%d", &y2);

//     mid(x1, y1, x2, y2);
// }

// int great(int num1, int num2)
// {
//     if (num1 > num2)
//     {
//         printf("Num1 is greater number.");
//         return num1;
//     }
//     else
//     {
//         printf("Num2 is greater number.");
//         return num2;
//     }
// }
// int main()
// {
//     int num1, num2;
//     printf("Enter first number:");
//     scanf("%d", &num1);
//     printf("Enter second number:");
//     scanf("%d", &num2);

//     great(num1, num2);

//     return 0;
// }
// #include <math.h>

// float velocityCalc(float v, float u, float a, float t)
// {
//     if (isnan(u))
//     {
//         u = v - (a * t);
//         printf("Initial vrlocity: %f", u);
//         return u;
//     }
//     else if (isnan(a))
//     {
//         a = (v - u) / t;
//         printf("acceleration : %f", a);
//         return a;
//     }
//     else if (isnan(t))
//     {
//         t = (v - u) / a;
//         printf("Time: %f", t);
//         return t;
//     }
//     else
//     {
//         v = u + (a * t);
//         printf("Final vrlocity: %f", v);
//         return v;
//     }
// }

// int main()
// {
//     float v, u, a, t;

//     printf("Final: ");
//     scanf("%f", &v);
//     printf("Initial Velocity: ");
//     scanf("%f", &u);
//     printf("Acc: ");
//     scanf("%f", &a);
//     printf("Time:");
//     scanf("%f", &t);

//     if (v == 999)
//     {
//         v = NAN;
//     }
//     else if (u == 999)
//     {
//         u = NAN;
//     }
//     else if (a == 999)
//     {
//         a = NAN;
//     }
//     else
//     {
//         t = NAN;
//     }

//     float fv = velocityCalc(v, u, a, t);

//     return 0;
// }

// void eqn(double a, double b, double c, double d, double e, double f)
// {
//     double x = (e * c - b * f) / (a * e - b * d);
//     double y = (a * f - c * d) / (a * e - b * d);
//     printf("The intersection point is at (x, y) = (%.2f, %.2f)\n", x, y);
// }
// int main()
// {
//     double a, b, c, d, e, f;
//     printf("Enter values for ax+by=c and dx+ey=f:\n");
//     printf("Enter a,b,c,d,e,f:");
//     scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
//     eqn(a, b, c, d, e, f);
//     return 0;
// }
#include <string.h>
// int main()
// {
//     char string1[20], string2[20];
//     printf("Enter name:");
//     scanf("%s", string1);
//     printf("Enter other name:");
//     scanf("%s", string2);
//     printf("%s", strcpy(string1, string2));
//     return 0;
// }
// int sumof(int arr[], int size)
// {
//     int i, sum = 0;
//     for (i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
// int main()
// {
//     int array[] = {1, 2, 3, 4, 5};
//     int size = sizeof(array) / sizeof(array[0]);
//     int sum = sumof(array, size);
//     printf("Sum of array is %d", sum);
//     return 0;
// }
// int main()
// {
//     int a = 45;
//     int *p;
//     p = &a;
//     printf("%d", *p);
//     printf("%d", &p);
//     printf("%d", &a);
//     printf("%d", p);
// }