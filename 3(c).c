
#include<stdio.h>

int main(){
 int size,i;
 printf("enter the size of the arrays:\n");
 scanf("%d",&size);
 int arr1[size];
 int arr2[size];
 int arr3[size];
 /*WE BUILD THE ARRAYS AS EVEN NUMBERED ARRAYS.*/
 for(i=0;i<size;i++){
 int a;
 printf("enter the element %d th of array 1:\n",i);
 scanf("%d",&a);
 if(a%2==0){
 arr1[i]=a;
 }
 else{
 arr1[i]=a+1;
 }
 }
 for(i=0;i<size;i++){
 int a;
 printf("enter the element %d th of array 2:\n",i);
 scanf("%d",&a);
 if(a%2==0){
 arr2[i]=a;
 }
 else{
 arr2[i]=a+1;
 }
 }
 for(i=0;i<size;i++){
 int a;
 printf("enter the element %d th of array 3:\n",i);
 scanf("%d",&a);
 if(a%2==0){
 arr3[i]=a;
 }
 else{
 arr3[i]=a+1;
 }
 }/*FINDING LOWEST ELEMENT*/
 int min=100;
 for(i=0;i<size;i++){//move across the 1st array.
 if(arr1[i]<min){
 min=arr1[i];
 }
 }
 for(i=0;i<size;i++){//move across the 2nd array.
 if(arr2[i]<min){
 min=arr2[i];
 }
 }
 for(i=0;i<size;i++){//move across the 3rd array.
 if(arr3[i]<min){
 min=arr3[i];
 }
 }
 printf("the minimum element is : %d",min);
 return 0;
}