#include <stdio.h>
int sum(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sm = sum(num1,num2);
    printf("the sum of two no is : %d\n",sm);
    int sb = sub(num1,num2);
    printf("the difference of two no is : %d\n",sb);
    int m = mul(num1,num2);
    printf("the product of two no is : %d\n",m);

    
    return 0;
}

