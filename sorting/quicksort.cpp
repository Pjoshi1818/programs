// #include <iostream>
// using namespace std;
// void swap(int arr[],int i , int j){
//     // int temp=arr[i];
//     // arr[i]=arr[j];
//     // arr[j]=temp;
//     swap(arr[i],arr[j]);
// }
//  int part(int arr[],int l,int r){
//     int pivot=arr[r];
//     int i=l-1;
//     for(int j=l ; j<r;j++){
//         if(arr[j]< pivot){
//             i++;
//             swap(arr,i,j);
//         }
//     }
//     swap(arr,i+1,r);
//     return i;
// }
// void quicksort(int arr[],int l, int r){
//     if(l<r){
//         int pi= part(arr,l,r);
//         quicksort(arr,l,pi-1);
//         quicksort(arr,pi+1,r);
//     }
// }
// int main(){
//     // int n;
//     int arr[5]={0,5,6,52,7};
//     quicksort(arr,0,4);
//     for(int i=0;i<5;i++){
//     cout<<arr[i]<<endl;
//     }

// }