#include<iostream>
using namespace std;
int main(){

    int arr[] = {2,8,1,6,3};
    
    for(int i = 0 ;i < 5-1;i++){
        for(int j = 0; j < 5-i-1; j++){ 
        if (arr[j]> arr[j+1]){
            int temp ;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

        }
    } }
  for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}