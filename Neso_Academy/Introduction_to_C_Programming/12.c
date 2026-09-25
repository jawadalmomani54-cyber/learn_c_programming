#include<stdio.h>
int fun();
int x=3;
int main(){
    int x=43;
    printf("%d\n", x);
    fun();
    return 0;
}
void fun(){
    printf("%d\n",x);
}