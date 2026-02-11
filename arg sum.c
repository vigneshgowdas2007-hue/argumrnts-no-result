#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
if (argc!=3){
printf("usage:./a.exe.num1num2\n");
return 1;

}
int a=atoi(argv[1]);
int b=atoi(argv[2]);
printf("sum=%d\n",a+b);
return 0;
}
