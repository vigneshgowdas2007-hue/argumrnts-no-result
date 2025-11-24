#include<stdio.h>
void display(int arr[],int n){
for(int i=0;i<n;i++){
    printf(" %d",arr[i]);
}
}
int main(){
int number[]={10,20,30,40,50};
display(number,5);
}
