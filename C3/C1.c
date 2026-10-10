#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,gpa;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    double x=a/5+b/10+c/10+d*3/5;
    double X=ceil(x);
    if(X<60.00){
        printf("0.00");
    }
    else{
        gpa=4-3*(100-X)*(100-X)/1600;
        printf("%.2f",gpa);
    }
    return 0;
}