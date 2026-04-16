
#include <stdio.h>

int main(void) {
    //    int i;
    //    i=0;
    //    while (i<5) {
    //        printf("while문을 공부합니다. \n");
    //        i++;
    //    }
    //    int hap = 0;
    //    int i;
    //    i=1;
    //    while (i<=10) {
    //        hap=hap+i;
    //        i++;
    //    }
    //    printf("1에서 10까지의 합 : %d \n", hap);
//    int a,b;
//    char ch;
//    while (1) {
//        printf("계산할 두 수를 입력 (멈추려먼 Ctrl+C) : ");
//        scanf("%d %d",&a,&b);
//        printf("계산할 연산자를 입력하세요 : ");
//        scanf(" %c",&ch);
//        
//        switch (ch) {
//                
//            case '+':
//                printf("%d + %d = %d 입니다\n",a,b,a+b);
//                break;
//            case '-':
//                printf("%d - %d = %d 입니다\n",a,b,a-b);
//                break;
//            case '*':
//                printf("%d * %d = %d 입니다\n",a,b,a*b);
//                break;
//            case '/':
//                printf("%d / %d = %d 입니다\n",a,b,a/b);
//                break;
//            case '%':
//                printf("%d %% %d = %d 입니다\n",a,b,a%b);
//                break;
//                
//            default:
//                printf("연산자를 잘못 입력했습니다 \n");
//              
//        }
//        }
//    int menu;
//    do{
//        printf("\n 손님 주문하시겠습니까? \n");
//        printf("<1>카페라뗴 <2>카푸치노 <3>아메리카노 <4>그만 시킬래요 ==> ");
//        scanf("%d",&menu);
//        switch (menu) {
//            case 1:
//                printf("#카페라뗴 주문하셨습니다. \n");
//                break;
//            case 2:
//                printf("#카푸치노 주문하셨습니다. \n");
//                break;
//            case 3:
//                printf("#아메리카노 주문하셨습니다. \n");
//                break;
//            case 4:
//                printf("#주문하신 커피 드리겠습니다. \n");
//                break;
//                
//            default:
//                printf("잘못 주문하셨습니다. \n");
//                break;
//        }
//    }while(menu!=4);
//    int hap = 0;
//    int i;
//    for (i=0; i<=100; i++) {
//        if (i%3==0) {
//            continue;
//            
//        }
//        hap += i;
//    }printf("1~100까지의 합(3의 배수 제외): %d \n",hap);
//    int n = 0;
//    printf("수를 입력하세요 : ");
//    scanf("%d",&n);
//    if (n>0) {
//        printf("%d는 양수입니다.\n",n);
//    }else if(n<0){
//        printf("%d는 음수입니다.\n", n);
//        
//    }else{
//        printf("0입니다.\n");
//    }
//    if(n<0){
//        n = -n;
//    }
//    printf("절대값 : %d \n", n);
//    int year = 0;
//    printf("년도를 입력하세요 : ");
//    scanf("%d",&year);
//    
//    if (year%4==0) {
//        printf("%d는 윤년입니다\n",year);
//    }else if (year%100==0){
//        printf("%d는 평년입니다\n",year);
//    }else if (year%400==0){
//        printf("%d는 윤년입니다\n",year);
//    }else{
//        printf("%d는 평년입니다.\n",year);
//    }
//    int a=0,b=0;
//    printf("두 수를 입력하세요 : ");
//    scanf("%d %d",&a,&b);
//    if (a<b) {
//        printf("%d\n",b);
//    }else if (a>b){
//        printf("%d \n",a);
//    }else{
//        printf("같은 수 입니다.\n");
//    }
//    int num = 0;
//    printf("수를 입력하세요 : ");
//    scanf("%d",&num);
//    if (num%3==0) {
//        printf("%d는 3의 배수입니다. \n", num);
//    }else{
//        printf("%d는 3의 배수가 아닙니다.\n", num);
//    }
    int n =0;
    int hap=0;
    printf("수를 입력하세요 : ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        if(i%2==1){
            hap+=i;
        }}printf("1부터 %d의 홀수의 합은 : %d\n",n,hap);
//    for (int i=2; i<=n; i++) {
//        if(i/2==1){
//            hap+=i;
//        }}printf("1부터 %d의 짝수의 합은 : %d\n",n,hap);
}
