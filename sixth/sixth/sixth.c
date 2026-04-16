

#include <stdio.h>

int main(void) {
//    int hap=0;
 
    int i,k;
//    for (i=0; i<5; i++) {
//        printf("안녕하세요? 빙글빙글 for문울 공부 중입니다 \n");
//    }
//    for (i=1; i<=5; i++) {
//        printf("%d \n",i);}
//    for (i=1; i<=12345; i++) {
//        hap=hap+i;
//        
//    }
//    printf("1에서 12345까지의 합 : %d \n", hap);
//    int num;
//    printf("값 입력 : ");
//    scanf("%d", &num);
//    for(i=1; i<=num; i++){
//        hap+=+i;
//    }
//    printf("1에서 %d까지의 합 : %d \n", num,hap);
//    int num1,num2,num3;
//    printf("시작값, 끝갑, 중간값 입력 : ");
//    scanf("%d %d %d", &num1,&num2,&num3);
//    for(i=num1; i<=num2; i=i+num3){
//        hap+=i;
//    }
//    printf("%d에서 %d까지 %d씩 증가한 값의 합 : %d \n" ,num1,num2,num3,hap);
//    int dan;
//    printf("몇 단 : ");
//    scanf("%d", &dan);
//    for (i=1; i<=9; i++) {
//        printf("%d X %d = %d \n",dan,i,dan*i);
//            }
//    for (i=1; i<=9; i++) {
////        printf("## %d 단 ## \n",i);
//        for (k=2; k<=9; k++) {
//            printf("%2d X %2d = %2d ",k,i,k*i);
//        }   printf("\n"); }
    int a,b;
//    i=0;
//    for (; ; ) {
//        printf("%d \n" , i);
//        i++;
//    }
    for(; ; ){
        printf("더할 두 수를 입력 (멈추려면 Ctrl+C) : ");
        scanf("%d %d", &a,&b);
        printf("%d + %d = %d\n" ,a,b,a+b);
    }
}
