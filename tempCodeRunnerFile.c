    #include<stdio.h>
    int power( int m , int n);
    int main(){
         

        for(int i  = 0; i<=10;i++){
            printf(" %d \t   %d \t  %d \n ",i  , power(2,i) , power(-3,i));
            
        }

        
        return 0;
    }
    power(int base , int n){
            int p = 1;
            for(int i = 1 ; i<=n;++i){
                p = p*base;
                
            }
            return p;
        }