#include<stdio.h>
int main(){
    float x= 3.11223344556677889900;
    double y=3.11223344556677889900;
    long double z=3.11223344556677889900 ;
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
    printf("%.16f\n",x);
    printf("%.16f\n",y);
    printf("%.21lf\n",y);
}