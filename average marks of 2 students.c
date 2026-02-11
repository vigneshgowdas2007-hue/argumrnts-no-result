#include<stdio.h>
struct student{

int id;
char name[20 ];
float marks;
};
int main (){
    float average;

struct student s1={101,"priya",89.5};
struct student s2={110,"vignesh",95};
average=(s1.marks+s2.marks)/2;

printf("name:%s\n",s1.name);
printf("marks:%2f\n",s1.marks);

printf("name:%s\n",s2.name);
printf("marks:%2f\n",s2.marks);
printf("average;%.2f",average);
return 0;

}

