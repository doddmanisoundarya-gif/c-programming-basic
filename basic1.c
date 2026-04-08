//  Arithmetic operator

#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);
    printf("The addition is:%d\n", num1+num2);
    printf("The subraction is:%d\n", num1-num2);
    printf("The multiplicatio is:%d\n", num1*num2);
    printf("The division is:%d\n", num1/num2);
    
    return 0;
}

// Arithmetic operator by using switch

#include<stdio.h>
int main(){
    int num1, num2;
    char op;
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    switch(op){
        case '+':
        printf("Result: %d", num1+num2);
        break;
        case '-':
        printf("Result: %d", num1-num2);
        break;
        case '*':
        printf("Result: %d", num1*num2);
        break;
        case '/':
        if(num2==0){
            printf("Error: not divisible by zero\n");
        }
        else{
            printf("Result: %d", num1/num2);
        }
        break;
        default:
        printf("Invalid number");
    }
    return 0;
}

// marks of students and there average

#include<stdio.h>
int main(){
    char name[]="sonu";
    int rollno=51;
    float m1, m2, m3, m4, m5, total, per;
    printf("Enter science marks: ");
    scanf("%f", &m1);
    printf("Enter social marks: ");
    scanf("%f", &m2);
    printf("Enter maths marks: ");
    scanf("%f", &m3);
    printf("Enter kannada marks: ");
    scanf("%f", &m4);
    printf("Enter english marks: ");
    scanf("%f", &m5);
    total=m1+m2+m3+m4+m5;
    per=total/5;
    printf("The average marks is: %f\n", total);
    printf("Percentage of sonu is: %f", per);
    
}

// Grade accordint to student grades

#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks of the student: ");
    scanf("%d", &marks);
    if(marks>95&&marks<=100){
            printf("Excellent");
        }
    else if(marks>75&&marks<=95){
            printf("Grade A");
        }
    else if(marks>55&&marks<=75){
            printf("Grade B");
        }
    else if(marks>40&&marks<=55){
            printf("Grade C");
        }
    else if(marks>25&&marks<=40){
            printf("Grade D");
        }
    return 0;
}
