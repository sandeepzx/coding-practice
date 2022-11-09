#include<stdio.h>
 
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
int currency(rs){
    printf("%d\n",rs);
    if(rs>0){
        
        
        if(rs-2000>=0){
            rs-=2000;
            a++;
            if(rs>=0){
                return currency(rs);
            }else {
            return rs;
            }
        }
        if (rs-500>=0) {
            rs-=500;
            b++;
            if(rs>=0){
                return currency(rs);
            }else {
            return rs;
            }
        }
        if (rs-200>=0) {
            rs-=200;
            c++;
            if(rs>=0){
                return currency(rs);
            }else {
            return rs;
            }
        }
        if (rs-100>=0) {
            rs-=100;
            d++;
            if(rs>=0){
                return currency(rs);
            }else {
            return rs;
            }
        }
        if (rs-50>=0) {
            rs-=50;
            e++;
            if(rs>=0){
                return currency(rs);
            }else {
            return rs;
            }
        }
        if (rs-20>=0) {
            rs-=20;
            f++;
            if(rs>=0){
                return currency(rs);
            }else {
            return rs;
            }
        }
        if (rs-10>=0) {
            rs-=10;
            g++;
            if(rs>=0){
                return currency(rs);
            }else {
            return rs;
            }
        }
        if (rs-5>=0) {
            rs-=5;
            h++;
            if(rs>=0){
                return currency(rs);
            }else {
            return rs;
            }
        }
        if (rs-1>=0) {
            rs-=1;
            i++;
            if(rs>0){
                return currency(rs);
            }else {
            return rs;
            }
        }
    }
}
        
 
int main(){
    int num;
    // printf("Enter the currency:\n");
    scanf("%d", &num);
    currency(num);
 
    printf("Currency  Count\n");
        
    printf("2000: %d\n",a);
    printf("500: %d\n",b);
    printf("200: %d\n",c);
    printf("100: %d\n",d);
    printf("50: %d\n",e);
    printf("20: %d\n",f);
    printf("10: %d\n",g);
    printf("5: %d\n",h);
    printf("1: %d\n",i);
}
