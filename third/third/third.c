#include <stdio.h>
#include <string.h>
int main(void){
    //    printf("%d\n",123);
    //    printf("%5d\n",123);
    //    printf("%05d\n",123);
    //
    //    printf("%f\n",123.45);
    //    printf("%7.1f\n",123.45);
    //    printf("%7.3f\n",123.45);
    //
    //    printf("%s\n","Basic-C");
    //    printf("%10s\n","Basic-C")
    //    printf("\n줄바꿈\n연습\n");
    //    printf("\t탭키\t연습\n");
    //    printf("이것을\r덮어씁니다 \n");
    //    printf("\a\a\a삐소리 3번\n");
    //    printf("글자가 \"강조\" 되는 효과\n");
    //    printf("\\\\\\ 역슬래시 세 개 출력\n");
    //    int a;
    //    float b;
    //    a=123.45;
    //    b=200;
    //    printf("a의 값은 ==> %d\n",a);
    //    printf("b의 값은 ==> %f\n",b);
    //    int a,b,c,d;
    //    a=100+100;
    //    b=a+100;
    //    c=a+b-100;
    //    d=a+b+c;
    //    printf("a, b, c, d 의 값 ==> %d,%d,%d,%d\n", a,b,c,d);
    //    a=b=c=d=100;
    //    printf("a, b, c, d 의 값 ==> %d,%d,%d,%d\n", a,b,c,d);
    //    a=100;
    //    a=a+200;
    //    printf("a의 값 ==> %d\n", a);
//    int a=100,b=200;
//    float result;
//    result=a/b;
//    result=(float)a/(float)b;
//    printf("%2.1f \n", result);
//    float a =0.1234567890123456789012345f;
//    double b = 0.1234567890123456789012345;
//    printf("%30.25f \n",a);
//    printf("%30.25lf \n",b);
//    char a,b,c;
//    
//    a = 'A';
//    printf("%c \n",a);
//    printf("%d \n",a);
//    
//    b='a';
//    c=b+5;
//    printf("%c \n",b);
//    printf("%c \n",c);
//    
//    c=90;
//    printf("%c \n",c);
//    char str1[10];
//    char str2[10];
//    char str3[10]="CookBook";
//    strcpy(str1, "Basic-C");
//    strcpy(str2, str3);
//    printf("str1 ==> %s \n",str1);
//    printf("str2 ==> %s \n",str2);
//    printf("str3 ==> %s \n",str3);
    char str[10] = "0123456789";
    printf("str ==> %s \n", str);
    str[0] = 'I';
    str[1] = 'T';
    str[2] = 'C';
    str[3] = 'o';
    str[4] = 'o';
    str[5] = 'k';
    str[6] = '\0';
    printf("str ==> %s \n", str);
    printf("str[7] ==> %c \n", str[7]);
    printf("str[50] ==> %c \n", str[50]);
}
