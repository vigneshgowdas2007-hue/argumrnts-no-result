#include<stdio.h>
struct student{

int id;
char name[20 ];
float marks;
};
int main (){
struct student s1={101,"priya",89.5};
struct student s2={110,"vignesh",95};
struct student s3={120,"chandan",99};
printf("ID:%d\n",s1.id);
printf("name:%s\n",s1.name);
printf("marks:%2f\n",s1.marks);
printf("ID:%d\n",s2.id);
printf("name:%s\n",s2.name);
printf("marks:%2f\n",s2.marks);
printf("ID:%d\n",s3.id);
printf("name:%s\n",s3.name);
printf("marks:%2f\n",s3.marks);
return 0;

}

