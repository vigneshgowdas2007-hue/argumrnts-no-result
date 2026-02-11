#include<stdio.h>
union data{
int i;
float f;char ch;
};
int main (){
union data d;
d.i=10;
printf("d.i=%d\n",d.i);
d.f=5.75;
printf("d.f=%2f\n",d.f);
printf("\nafter all asignments:\n");
printf("d.i=%d(garbage)\n",d.i);
printf("d.f=%2f(garbage)\n",d.f);
return  0;

}
