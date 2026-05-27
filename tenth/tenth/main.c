#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
//int fac(int n){
//    int result=1;
//    for(int i = 1; i<=n; i++){
//        result*=i;
//    }
//    return result;
//}
//int max (int a,int b){
//    int result;
//    if(a>b){
//        result=a;
//    }else {result=b;}
//    return result;
//}
//void func1(char a, char b){
//    int imsi;
//    imsi=a;
//    a=b;
//    b=imsi;
//
//}
//void func2(char *a, char *b){
//    int imsi;
//    imsi=*a;
//    *a=*b;
//    *b=imsi;
//
//}
//int a=100;
//int calc(int v1, int v2, int op){
//    int result;
//    switch (op) {
//        case 1:
//            result=v1+v2;
//            break;
//        case 2:
//            result=v1-v2;
//            break;
//        case 3:
//            result=v1*v2;
//            break;
//        case 4:
//            result=v1/v2;
//            break;
//    }
//    return result;
//}
//int plus(int v1,int v2){
//    int result;
//    result = v1+v2;
//    return result;
//}
//void func1(void){
//    int a =200;
//    printf("func1()에서 a의 값 ==> %d\n",a);
//}
double average(int arr[],int len){
    int sum=0;
    for (int i=0; i<len; i++) {
        sum+=arr[i];
    }
    return (double)sum/len;
}
    int main(int argc, const char * argv[]) {
       
        int arr[5]={10,20,30,40,50};
       
        printf("%.2f\n",average(arr,5));
//        int a;
//        printf("숫자를 입력하세요 : ");
//        scanf("%d",&a);
//        printf("%d의 팩토리얼 값은 %d입니다 \n",a,fac(a));
//        int a,b,res;
//        printf("비교할 두수를 입력하세요: ");
//        scanf("%d %d",&a,&b);
//        
//        res=max(a, b);
//        printf("%d와 %d 중에 큰 수는 : %d\n",a,b,res);
//    char x='A',y='Z';
//    printf("원래 값        : x=%c, y=%c\n",x,y);
//    func1(x, y);
//    printf("값을 전달한 후   : x=%c, y=%c\n",x,y);
//    func2(&x, &y);
//    printf("주소를 전달한 후 : x=%c, y=%c\n",x,y);
//    func1();
//    printf("main()에서 a의 값 ==> %d \n",a);
//    int res;
//    int oper,a,b;
//    printf("계산 입력(1:+,2:-,3:*,4:/): ");
//    scanf("%d",&oper);
//    printf("계산할 두 숫자를 입력 : ");
//    scanf("%d,%d",&a,&b);
//    res=calc(a,b, oper);
//    printf("계산 결과는 : %d \n",res);
//    int hap;
//    
//    hap=plus(100,200);
//    printf("100과 200의 plus() 함수 결과값 : %d \n",hap);
}

