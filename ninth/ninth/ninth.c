#include <stdio.h>
#include <string.h>
#define  _CRT_SECURE_NO_WARNINGS

int main(int argc, const char * argv[]) {
    char ss[100];
    int count, i;
    char *p;
    printf("문자열을 입력하새요 : ");
    scanf("%s",ss);
    count = strlen(ss);
    p=ss;
    printf("내용을 거꾸로 출력 ==> ");
    for (i=0; i<count; i++) {
        printf("%c",*(p+count-(i+1)));
    }
    printf("\n");
//    char s[8]="Basic-C";
//    char *p;
//    int i;
//    p=s;
//    for (i=sizeof(s)-2; i>=0; i--) {
//        printf("%c",*(p+i));
//    }
//    printf("\n");
//    char s[8]="Basic-C";
//    char *p;
//    p=s;
//    printf("&s[3] ==> %s \n",&s[3]);
//    printf("p+3 ==> %s \n\n",p+3);
//    printf("s[3] ==> %c \n",s[3]);
//    printf("*(p+3) ==> %c \n",*(p+3));
//    char ch;
//    char*p;
//    char*q;
//    ch='A';
//    p=&ch;
//    q=p;
//    *q='Z';
//    printf("ch가 가지고 있는 값 : ch ==> %c \n\n",ch);
//    char ch;
//    char*p;
//    ch='A';
//    p=&ch;
//    printf("ch가 가지고 있는 값 : ch ==> %c \n",ch);
//    printf("ch가 가지고 있는 주소 : ch ==> %d \n",&ch);
//    printf("p가 가지고 있는 값 : p ==> %d \n",p);
//    printf("p가 가지고 있는 주소 : *p ==> %c \n",*p);
//    int aa[3]={10,20,30};
//    printf("aa[0]의 값은 %d, 주소는 %d \n",aa[0],&aa[0]);
//    printf("aa[1]의 값은 %d, 주소는 %d \n",aa[1],&aa[1]);
//    printf("aa[2]의 값은 %d, 주소는 %d \n",aa[2],&aa[2]);
//    printf("배열 이름 aa의 값(=주소)는 %d \n",aa);
//    int a=100;
//    int b=200;
//    printf("변수 a의 주소는 %p 입니다.\n",&a);
//    printf("변수 b의 주소는 %p 입니다.\n",&b);
//    char stack[5];
//    int top = 0;
//    stack[top]='A';
//    printf("%c 자동차가 터널에 들어감 \n",stack[top]);
//    top++;
//    
//    stack[top]='B';
//    printf("%c 자동차가 터널에 들어감 \n",stack[top]);
//    top++;
//    
//    stack[top]='C';
//    printf("%c 자동차가 터널에 들어감 \n",stack[top]);
//    top++;
//    printf("\n");
//    top--;
//    printf("%c 차가 터널을 빠져나감 \n",stack[top]);
//    stack[top]=' ';
//    top--;
//    printf("%c 차가 터널을 빠져나감 \n",stack[top]);
//    stack[top]=' ';
//    top--;
//    printf("%c 차가 터널을 빠져나감 \n",stack[top]);
//    stack[top]=' ';
}
