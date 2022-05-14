#include<stdio.h>

int
main ()
{
 
 int p;
 printf ("enter the array size:\n");
 scanf ("%d", &p);
 int arr1[p];
 int arr2[p];
 int arr3[p];
 int i;
 for (i = 0; i < p; i++)
 { //building the first array
 printf ("enter %d th element of array 1:\n", i);
 scanf ("%d", (arr1 + i));
 }
 for (i = 0; i < p; i++)
 { //building the second array
 printf ("enter %d th element of array 2:\n", i);
 scanf ("%d", (arr2 + i));
 }
 for (i = 0; i < p; i++)
 { //building the third array.
 printf ("enter %d th element of array 3:\n", i);
 scanf ("%d", (arr3 + i));
 }
 /*DO THE FIRST TASK */
 int index, operation, array;
 printf ("enter the index of operation:\n");
 scanf ("%d", &index);
 printf ("print array to be selected:\n");
 scanf ("%d", &array);
 printf
 ("enter the value 0 for adding\n 1 for subtracting \n 2 for multiplication\n and 3 for division:\n");
 scanf ("%d", &operation);
 int a;
 switch (array)
 {
 case 1: //operations on first array.
 switch (operation)
{
case 0:
 printf ("enter number to be added:\n");
 scanf ("%d", &a);
 arr1[index] = arr1[index] + a;
 break;
case 1:
 printf ("enter the number to be subtracted:\n");
 scanf ("%d", &a);
 arr1[index] = arr1[index] - a;
 break;
case 2:
 printf ("enter the number to be multiplied with:\n");
 scanf ("%d", &a);
 arr1[index] = arr1[index] * a;
 break;
case 3:
 printf ("enter the number to divide by which is non 0:\n");
 scanf ("%d", &a);
 arr1[index] = arr1[index] / a;
 break;
default:
 break;
}
 case 2: //operations on 2nd array.
 switch (operation)
{
case 0:
 printf ("enter number to be added:\n");
 scanf ("%d", &a);
 arr2[index] = arr2[index] + a;
 break;
case 1:
 printf ("enter the number to be subtracted:\n");
 scanf ("%d", &a);
 arr2[index] = arr2[index] - a;
 break;
case 2:
 printf ("enter the number to be multiplied with:\n");
 scanf ("%d", &a);
 arr2[index] = arr2[index] * a;
 break;
case 3:
 printf ("enter the number to divide by which is non 0:\n");
 scanf ("%d", &a);
 arr2[index] = arr2[index] / a;
 break;
default:
 break;
}
 case 3: //operations on 3rd array.
 switch (operation)
{
case 0:
 printf ("enter number to be added:\n");
 scanf ("%d", &a);
 arr3[index] = arr3[index] + a;
 break;
case 1:
 printf ("enter the number to be subtracted:\n");
 scanf ("%d", &a);
 arr3[index] = arr3[index] - a;
 break;
case 2:
 printf ("enter the number to be multiplied with:\n");
 scanf ("%d", &a);
 arr3[index] = arr3[index] * a;
 break;
case 3:
 printf ("enter the number to divide by which is non 0:\n");
 scanf ("%d", &a);
 arr3[index] = arr3[index] / a;
 break;
default:
 break;
}
 default:
 break;
 }
 return 0;
}