    //**** / prime number \****
    #include<iostream>
    using namespace  std;
    bool prime(int n ){
                for(int i =2; i<n/2;i++){
                    if(n%i==0){
                        cout<<" not prime";
                        return;
                    }
                    cout<<"prime"
;                }
    }
    int main(){
        int n ;
        cin>>n;
        prime(n);

        return 0;
    }