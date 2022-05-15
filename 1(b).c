#include<stdio.h>

int main(){
 int choice=5;//later used for loop control.
 char arr1[50]={0};//declaring the first array
 char arr2[50]={0};//declaring the second array
 /*We create a while loop which runs and terminates on user command*/
 /*depending on user choice operations will be carried out*/
 while(choice!=0){
 int iteration=0;
 printf("Select operation\n");
 printf("enter 1 for addition of characters in 1st array\n");
 printf("enter 2 for deletion of characters in 1st array\n");
 printf("enter 3 for modifying an character in array 1\n");
 printf("enter 0 for terminating:\n");
 printf("please note that array size is of 50 elements only.\n");
 scanf("%d",&choice);
 if(choice== 1){//this is for first type of task.
 char input;
 printf("enter the character to add in array 1 :\n");
 scanf("%c",&input);
 arr1[iteration]=input;
 arr2[iteration]=(int)input;//using typecasting.
 printf("%c has ASCII value %d in array 2 now\n",input,input);
 }
 else if (choice==2){//this is for 2nd type of task.
 int input;
 printf("enter the index to delete:\n");
 scanf("%d",&input);
 arr1[input]=0;
 arr2[input]=0;
 printf("deletion succesful.\n");
 }
 else if(choice==3){//for 3rd type of task.
 int input;
 char modification;
 printf("enter the index to modify\n");
 scanf("%d",&input);
 printf("enter new element:\n");
 scanf("%c",&modification);
 printf("the initial values are %c in array 1 and %d in array 2\n",arr1[input],arr2[input]);
 arr1[input]=modification;
 arr2[input]=(int)modification;
 printf("the modification is succesful\n");
 printf("the final values are %c in array 1 and %d in array 2\n",arr1[input],arr2[input]);
 }
 else if(choice==0){
 break;
 }
 else{
 printf("enter a valid number please\n");
 }
 iteration=iteration+1;
 }
 return 0;
}
