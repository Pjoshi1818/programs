                        //chapter 1 //
                         //basic to advanced concepts of C programming language//


// #include <stdio.h>
// int main(){

//     printf("hello, world ");

//     return 0;
// }

// print fhrenheit-Celsious table for fhre. = 0 ,20 ,40,......300;//
 
// #include<stdio.h>
// int main(){
//     int far ,cal;
//     int lower= 0;
//     int upper =300;
//     int step= 20;

// far = lower;
//     while(far <= upper){
//         cal = 5* (far-32) /9;
//         printf("%d \t %d \n", far ,cal);
//         far = far + step;
//     }
//     return 0;
// }

// with floating point for more accuracy:'

// #include<stdio.h>
// float main(){
//     float far ,cal;
//     float lower= 0;
//     float upper =300;
//     float step= 20;

// far = lower;
//     while(far <= upper){
//         cal = (5.0/9.0) * (far-32.0) ;
//         printf("%3f \t %6f \n", far ,cal);
//         far = far + step;
//     }
//     return 0;
// }

// character input output

// #include<stdio.h>
// int main(){
//      int c ;
//      c= getchar();
//      while (c =! EOF){
// putchar(c);
// c= getchar();
//      }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      int c ;
//        printf("The value of EOF is: %d\n", EOF);
     
//      while ((c=getchar()) != EOF){
// putchar(c);

//      }
//     return 0;
// }

// #include<stdio.h>
// int main(){
         
//         long nc =0 ;
//         int c;
//         while( getchar() != EOF){
//             ++nc;
//             printf("%ld\n",nc);

//         }
//     return 0;
// }
                                //second version 
// #include<stdio.h>
// int main(){
//     double nc;
//     for(nc = 0 ; getchar() != EOF ; ++nc)
//     ;
//         printf("%.0f\n", nc);

    
//     return 0;
// }

                        // count new line 
                    
// #include<stdio.h>
// int main(){
//   int nl =0 ,c ;
//   while(( c= getchar()) != EOF)
//   if( c == '\n')
//   ++nl;
//   printf("%d \n", nl);
//     return 0;
// }

#include <stdio.h>

#define IN 1   // inside a word
#define OUT 0  // outside a word

int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;

        if (c == '\n')
            ++nl;

        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("Lines: %d  Words: %d  Characters: %d\n", nl, nw, nc);
    return 0;
}
