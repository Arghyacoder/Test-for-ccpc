#include<stdio.h>

int main(){
    int a, b, d, sum = 0;
    printf("Enter the first term of the sequence = ");
    scanf("%d", &a);
    printf("Enter the common difference of the sequence = ");
    scanf("%d", &d);    
    printf("Enter the last terms in the sequence = ");
    scanf("%d", &b);
    // printf("The sequence is: ");
    for(int i = a; i <= b; i = i + d){
        // printf("%d", i);
        if(i%2==0){
            // printf("\n%d",i);
            sum = sum + i;
        }
    } 
    printf("--------------------------------------\n");
    printf("The sum of the even numbers = %d", sum);  
    printf("\n--------------------------------------\n");

    return 0;

}
