#include<stdio.h>
void tower (int n,char S, char H, char D){
if(n==0) return ;
tower(n-1,S,D,H);
printf("%c->%c\n",S,D);
tower(n-1,H,S,D);
return ;
}

int main(){
    int n;
    printf("enter the no. of disk");
    scanf("%d ",&n);
    tower(n,'A','B','C');
        return 0;
}