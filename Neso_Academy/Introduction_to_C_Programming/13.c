#include<stdio.h>
int main(){
    int x=2;
    {
        int x=4;
        printf("%d\n", x);
    }
    printf("%d\n", x);
    return 0;
}