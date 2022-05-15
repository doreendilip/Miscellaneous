#include <stdio.h>
#include <string.h>

struct event{
char name[10];
int fee;
char place[10];
char coname[10];
int phone;
};
int main(){
int i;
struct event event1[1];
for(i=0;i<1;i++){
printf("\nname of event:");
scanf("%s",&event1[i].name);
printf("\nenter registration fee:");
scanf("%d",&event1[i].fee);
printf("\nenter the place:");
scanf("%s",&event1[i].place);
printf("\nPhone number:");
scanf("%d",&event1[i].phone);
}
int j;
struct event event2[1];
for(j=0;j<1;j++){
printf("\nname of event:");
scanf("%s",&event2[j].name);
printf("\nenter registration fee:");
scanf("%d",&event2[j].fee);
printf("\nenter the place:");
scanf("%s",&event2[j].place);
printf("\nPhone number:");
scanf("%d",&event2[j].phone);
}
int f;
printf("What event would you like to choose?1,2,3(both)\n:");
scanf("%d",&f);
if(f==1){
printf("You have chosen event 1 here are the details");
for(i=0;i<1;i++){
printf("\n%s\n%d\n%s\n%d",event1[i].name,event1[i].fee,event1[i].place,event1[i].phone);
}
};
if(f==2){
printf("You have chosen event 2 here are the details");
for(j=0;j<1;j++){
printf("\n%s\n%d\n%s\n%d",event2[j].name,event2[j].fee,event2[j].place,event2[j].phone);
}
}
if(f==3){
 printf("You have chosen events 1 and 2 here are the details:");
 for(i=0;i<1;i++){
printf("\n%s\n%d\n%s\n%d",event1[i].name,event1[i].fee,event1[i].place,event1[i].phone);
}
 for(j=0;j<1;j++){
printf("\n%s\n%d\n%s\n%d",event2[j].name,event2[j].fee,event2[j].place,event2[j].phone);
 }
}
return 0;
}