// /*Q1. WAP using C to Evaluate the Given Polynomial Equation f(x). Note: Order
// of polynomial, co-efficient and value of x will be user input.*/

// #include <stdio.h>
// #include <stdlib.h>

int evalutePolynomial_3_1(int *coefficients, int order, int x)
{
    int evalute = 0;
    for (int i = 0; i <= order; i++)
    {
        // calculting
        int variableWithValOfX = 1;
        for (int j = 0; j < i; j++)
        {
            variableWithValOfX *= x;
        }

        // multipling the coeff with variable
        evalute += (coefficients[order - i]) * variableWithValOfX;
    }
    return evalute;
}

int main_3_1()
{
    int order, x;

    // taking input
    printf("Enter the order of Polynomial[p(x)]: ");
    scanf("%d", &order);

    // creating a dynamic array of coefficients
    int *coefficient = (int *)malloc((order + 1) * sizeof(int));

    printf("\nEnter the Coefficient of Polynomial :\n");
    for (int i = 0, coeff = order; i <= order; i++, coeff--)
    {
        printf("Coeff for x^%d: ", coeff);
        scanf("%d", &coefficient[i]);
    }

    printf("\nEnter the Value of x for the Polynomial p(x): ");
    scanf("%d", &x);

    // evaluting
    int valueOfPolynomial = evalutePolynomial_3_1(coefficient, order, x);

    // printing
    printf("\n\nValue of the Polynomial :");
    printf("\np(%d) = ", x);
    for (int i = order; i > 0; i--)
    {
        printf("%dx^%d + ", coefficient[order]);
    }
    printf("%d", coefficient[order]);
    printf(" = %d", valueOfPolynomial);
    
    return 0;
}