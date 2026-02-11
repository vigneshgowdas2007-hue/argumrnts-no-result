#include<stdio.h>
#include<stdlib.h>

int main(){
int *data=(int*)malloc(4*sizeof(int));
if(data==NULL){
        printf("allocation failed!\n");
return 1;
}
printf("memory allocated succesfully!\n");
free(data);
printf("memory freed succesfully !\n");
return 0;
}

