#include<stdio.h>
int main(){
    int far ,cal;
    int lower= 0;
    int upper =300;
    int step= 20;

far = lower;
    while(far <= upper){
        cal = 5* (far-32) /9;
        printf("%d \t %d \n", far ,cal);
        far = far + step;
    }
    return 0;
}