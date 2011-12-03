#include <board.h>
#define r return
#define f for
#define n int
n i,j,l,w,t,z;void p(){f(i=0;i<81;i++)(i+1)%9?printf("%2d",b[i]):printf("%2d\n",b[i]);}n c(n s){z=(s/9)*9;f(i=z;i<z+9;i++)if(i!=s)if(b[i]==b[s])r 0;f(i=s%9;i<81;i+=9)if(i!=s)if(b[i]==b[s])r 0;l=s%9-s%3;w=(s/9)-(s/9)%3;f(i=0;i<3;i++)f(j=0;j<3;j++){t=(w+i)*9+l+j;if(t!=s)if(b[t]==b[s])r 0;}r 1;}n e(n s){while(b[s]++<9){if(c(s)){f(i=s;i<81&&b[i];i++){}i==81?p():e(i);}}r b[s]=0;}n main(){f(i=0;i<81&&b[i];i++){}e(i);}
