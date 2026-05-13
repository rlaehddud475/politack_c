#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define __deprected_msg
int main(int argc, const char * argv[]) {
    int aa[3][4];
    int i,k;
    int val=1;
    for (i=0; i<3; i++) {
        for (k=0; k<4; k++) {
            aa[i][k]=val;
            val++;
        }
        
    }
    
    printf("aa[0][0]부터 aa[2][3]까지 출력\n");
    for (i=0; i<3; i++) {
        for (k=0; k<4; k++) {
            printf("%3d",aa[i][k]);
        }
        printf("\n");
    }
//    aa[0][0]=1; aa[0][1]=2; aa[0][2]=3; aa[0][3]=4;
//    aa[1][0]=5; aa[1][1]=6; aa[1][2]=7; aa[1][3]=8;
//    aa[2][0]=9; aa[2][1]=10; aa[2][2]=11; aa[2][3]=12;
//    printf("aa[0][0]부터 aa[2][3]까지 출력\n ");
//    printf("%3d %3d %3d %3d\n ",aa[0][0]=1, aa[0][1]=2, aa[0][2]=3, aa[0][3]=4);
//    printf("%3d %3d %3d %3d\n ", aa[1][0]=5, aa[1][1]=6, aa[1][2]=7, aa[1][3]=8);
//    printf("%3d %3d %3d %3d\n ", aa[2][0]=9, aa[2][1]=10, aa[2][2]=11, aa[2][3]=12);
//    char ss[20];
//    char tt[20];
//    int r1,r2;
//    puts("첫번쨰 문자열을 입력하세요 : ");
//    gets(ss);
//    puts("두번쨰 문자열을 입력하세요 : ");
//    gets(tt);
//    
//    r1=strlen(ss);
//    r2=strlen(tt);
//    printf("첫 번째 문자열의 길이 ==> %d\n",r1);
//    printf("두 번째 문자열의 길이 ==> %d\n",r2);
//    
//    if (strcmp(ss,tt)==0) {
//        
//        puts("두 문자열의 내용이 같습니다.\n");
//    }else{puts("두 문자열의 내용이 같습니다.\n");}
//    int sum = 0;
//    int n[4],i;
//
//    for(i=0; i<=3; i++){
//        printf("%d번째 숫자를 입력하세요 : ",i+1);
//        scanf("%d",&n[i]);
//        sum+=n[i];    //    }
//    printf("합계 ==> %d\n",sum);
//    char ss[8]="Basic-C";
//    int i;
//    ss[5]='#';
//    for (i=0; i<8; i++) {
//        printf("ss[%d] ==> %c\n",i,ss[i]);
//
//    }
//    printf("문자열 배열 ss ==> %s\n",ss);
    
    
}
