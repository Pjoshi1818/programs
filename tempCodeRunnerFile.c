#include<STDIO.H>
 void display(int arr[]){
    for(int i= 0; i<4;i++){
printf("%d ",arr[i]);
    }
}

int main(){
    int arr[4]={1,2,3,4};
    display(arr);
    return 0;
}