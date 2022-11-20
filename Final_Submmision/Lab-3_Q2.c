// 2. WAP using function that adds given two polynomials f(x) = h(x) + g(x)
//  using function add two polynomial

// #include <stdio.h>
// #include <stdlib.h>

typedef struct polynomial_3_2
{
    int order;
    int *coefficients;
    int x;
} polynomial_3_2;

//evalute polynomial for x
void takingValues_3_2(polynomial_3_2 *var);
int evalutePolynomial_3_2(polynomial_3_2 var);
void printingPolynomial_3_2(polynomial_3_2 var);

int main_3_2()
{
    // creating 2 polynomials
    polynomial_3_2 polynomial1;
    polynomial_3_2 polynomial2;

    // taking values of polynomials
    takingValues_3_2(&polynomial1);
    takingValues_3_2(&polynomial2);

    // taking value of x
    int x;
    printf("\nEnter the Value of x: ");
    scanf("%d", &x);

    // entering val of x in polynomial
    polynomial1.x = x;
    polynomial2.x = x;

    // evaluting the given polynomial for x
    int valueOfPolynomial1 = evalutePolynomial_3_2(polynomial1);
    int valueOfPolynomial2 = evalutePolynomial_3_2(polynomial2);

    // adding both the polynomial
    int sumOfPolynomial = valueOfPolynomial1 + valueOfPolynomial2;

    // printing the sum
    printf("\n f(x) = h(x) + g(x)\n");
    printf("=> f(%d) = ", x);
    printingPolynomial_3_2(polynomial1);
    printf(" + ");
    printingPolynomial_3_2(polynomial2);
    printf(" = %d", sumOfPolynomial);

    return 0;
}

// fn to evalute polynomial for x
int evalutePolynomial_3_2(polynomial_3_2 var)
{
    int evalute = 0;
    for (int i = 0; i <= var.order; i++)
    {
        // calculting by substituting value of x
        int variableWithValOfX = 1;
        for (int j = 0; j < i; j++)
        {
            variableWithValOfX *= var.x;
        }

        // multipling the coeff with the variable
        evalute += (var.coefficients[var.order - i]) * variableWithValOfX;
    }
    return evalute;
}

void takingValues_3_2(polynomial_3_2 *var)
{
    // taking the order of polynomial
    printf("Enter the order of Polynomial[p(x)]: ");
    scanf("%d", &var->order);

    // creating a dynamic array of coefficients
    var->coefficients = (int *)malloc((var->order + 1) * sizeof(int));

    // taking the values of coefficients
    printf("\nEnter the Coefficient of Polynomial :\n");
    int order = var->order;
    for (int i = 0; i <= order; i++)
    {
        int coeff = order - i;
        printf("Coeff for x^(%d): ", coeff);
        scanf("%d", &var->coefficients[i]);
    }
    printf("\n");
}

void printingPolynomial_3_2(polynomial_3_2 var)
{
    // printing the polynomial
    printf("[");
    for (int i = var.order; i > 0; i--)
    {
        printf("%dx^%d + ", var.coefficients[var.order - i], i);
    }
    printf("%d", var.coefficients[var.order]);
    printf("]");
}