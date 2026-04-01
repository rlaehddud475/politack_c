#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void){
    
    int a,b;
    char ch;
    printf("수식을 한 줄로 띄어쓰기로 입력하세요 : ");
    scanf("%d %c %d",&a,&ch,&b);
    
    
    switch (ch) {
        case '+':
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d\n",a,b,a-b);
            break;
        case '/':
            printf("%d / %d = %d\n",a,b,a/b);
            break;
        case '*':
            printf("%d * %d = %d\n",a,b,a*b);
            break;
        case '%':
            printf("%d %% %d = %d\n",a,b,a%b);
            break;
        default:
            printf("연산자를 잘못 입력했습니다 \n");
            
    }
    
    
}

