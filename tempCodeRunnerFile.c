#include<stdio.h>
    int main(){
            

        int i ,c ,nwhite,nother;
        int arr[10];

        for (i = 0 ; i < 10 ;i++ ){
            arr[i] = 0;
        }
        while((c = getchar()) != EOF)
         if( c>= 0 && c<=9)
            ++arr[c-'0'];
            else if (c == ' '|| c== '\n' || c== '\t'  )
            ++nwhite;
            else
                ++nother;



                printf("degit = ");
                for (i = 0 ; i < 10 ;i++ ){
                    printf("%d ",arr[i]);
                    printf(" wj=hite spaces is  = %d, others = %d ",nwhite ,nother );
        }
        return 0 ;
    }