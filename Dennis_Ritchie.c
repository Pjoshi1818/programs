// chapter 1 //
// basic to advanced concepts of C programming language//   26.6.2025

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

// with floating point for more accuracy:'   27.6.2025

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
// second version   28.6.2025
// #include<stdio.h>
// int main(){
//     double nc;
//     for(nc = 0 ; getchar() != EOF ; ++nc)
//     ;
//         printf("%.0f\n", nc);

//     return 0;
// }

// count new line   29.6.2025

// #include<stdio.h>
// int main(){
//   int nl =0 ,c ;
//   while(( c= getchar()) != EOF)
//   if( c == '\n')
//   ++nl;
//   printf("%d \n", nl);
//     return 0;
// }

// #include <stdio.h>

// #define IN 1   // inside a word
// #define OUT 0  // outside a word

// int main() {
//     int c, nl, nw, nc, state;

//     state = OUT;
//     nl = nw = nc = 0;

//     while ((c = getchar()) != EOF) {
//         ++nc;

//         if (c == '\n')
//             ++nl;

//         if (c == ' ' || c == '\n' || c == '\t')
//             state = OUT;
//         else if (state == OUT) {
//             state = IN;
//             ++nw;
//         }
//     }

//     printf("Lines: %d  Words: %d  Characters: %d\n", nl, nw, nc);
//     return 0;
// }

// Array                 30.6.2025

// #include<stdio.h>
// int main(){

//     int i ,c ,nwhite,nother;
//     nwhite = nother=0;
//     int arr[10];

//     for (i = 0 ; i < 10 ;i++ )
//         arr[i] = 0;

//     while((c = getchar()) != EOF)
//      if( c>= '0' && c<='9')
//         ++arr[c-'0'];
//         else if (c == ' '|| c== '\n' || c== '\t'  )
//         ++nwhite;
//         else
//             ++nother;

//             printf("degit = ");
//             for (i = 0 ; i < 10 ;i++ )
//                 printf("%d ",arr[i]);

//                 printf(" wj=hite spaces is  = %d, others = %d ",nwhite ,nother );

//     return 0 ;
// }

// power function :

// #include<stdio.h>
// int power( int m , int n);
// int main(){

//     for(int i  = 0; i<=10;i++){
//         printf(" %d \t   %d \t\t %d \n ",i  , power(2,i) , power(-3,i));

//     }

//     return 0;
// }
// power(int base , int n){
//         int p = 1;
//         for(int i = 1 ; i<=n;++i){
//             p = p*base;

//         }
//         return p;
//     }

#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0){
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }

    return 0;
}

//my_getline e 

int my_getline(char s[],int lim ){
    int c ,i;

    for(i=0 ;i<lim-1 && (c = getchar())!=EOF &&  c!='\n';++i){
        s[i]= c;
    }
        if(c=='\n'){
            s[i] = c;
            ++i;
        }
        s[i] = '\0';
        return i;
        
    }




void copy(char to[],char from[]){
    int i ;
    i = 0;
    while((to[i]= from[i]) != '\0'){
        ++i;
    }
    
}