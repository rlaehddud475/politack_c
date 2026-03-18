#include <stdio.h>
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
    int a=100,b=200;
    float result;
//    result=a/b;
    result=(float)a/(float)b;
    printf("%2.1f \n", result);
    
}
