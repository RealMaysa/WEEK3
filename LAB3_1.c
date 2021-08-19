#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);  
while(n>9){
    int sum=0,r=0;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }n=sum;
    
}printf("%d",n);

return 0;}
    