#include<stdio.h>
#include<stdlib.h>
int main(){
char path[100];
printf("enter a path of file to open:");
scanf("%S",path);
system(path);
return 0;
}
