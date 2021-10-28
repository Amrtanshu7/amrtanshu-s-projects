#include<stdio.h>
#include<math.h>
//create a structure for term of the polynomial to store the coefficient and exopnent of variable in the polynomial.
struct term 
{
    int coef;
    int expo;
} ;
//start the main function

void main()
{
    int n,i,sum=0;//declare n for number of terms , sum for the final value of polynomial and i for iteration
    printf("Suppose the polynomial is ax^2+bx+c\nthen the number of terms are 3 \nand exponent of last term is 0:\n");
    printf("enter the number of terms:");
    scanf("%d",&n);
    struct term poly[n];// create an array for terms in the polynomial
    int term_[n],x;// another array to store the multiplication of coefficient with variable raise to exponent
    printf("enter the value of x at which you want to evaluate the polynomial:");//input the variable where the user wants to evaluate the polynomial
    scanf("%d",&x);
    for(i=0;i<n;i++)// start the loop to input the value of coefficent and exponent of particular term
    {
        printf("enter the coefficient and exponent of term %d:",(i+1));
        scanf("%d %d",&poly[i].coef,&poly[i].expo);
        term_[i]=((poly[i].coef)*pow(x,poly[i].expo));
        sum=sum+term_[i];
    }
    
    printf("the value of the polynomial at x=%d is:%d",x,sum);//output

}