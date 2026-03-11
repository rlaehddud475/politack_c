#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void){
    int a, b;
    int result;
    int k;
   
    
    printf("첫 번째 계산할 값을 입력하세요=>");
    scanf("%d",&a);
    printf("<1> 덧셈 <2> 뺄샘 <3> 곱샘 <4> 나눗샘==>");
    scanf("%d",&k);
    printf("두 번째 계산할 값을 입력하세요=>");
    scanf("%d",&b);
  
    if (k==1) {
        result=a+b;
        printf("%d + %d = %d\n",a,b,result);
    }else if(k==2){
        result=a-b;
        printf("%d - %d = %d\n",a,b,result);
    }else if (k==3){
        result=a*b;
        printf("%d * %d  = %d\n",a,b,result);
    }else{
        result=a/b;
        printf("%d / %d = %d\n",a,b,result);
    }
}
