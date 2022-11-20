#include <stdio.h>
#include <stdlib.h>
#include "Lab-1_Q1.c"
#include "Lab-1_Q2.c"
#include "Lab-1_Q3.c"
#include "Lab-1_Q4.c"
#include "Lab-1_Q5.c"
#include "Lab-1_Q6.c"
#include "Lab-1_Q7.c"
#include "Lab-1_Q8.c"
#include "Lab-2_Q1.c"
#include "Lab-2_Q2.c"
#include "Lab-2_Q3.c"
#include "Lab-2_Q4.c"
#include "Lab-2_Q5.c"
#include "Lab-2_Q6.c"
#include "Lab-2_Q7.c"
#include "Lab-2_Q8.c"
#include "Lab-2_Q9.c"
#include "Lab-3_Q1.c"
#include "Lab-3_Q2.c"
#include "Lab-3_Q3.c"
#include "Lab-3_Q4.c"
#include "Lab-3_Q5.c"
#include "Lab-3_Q6.c"
#include "Lab-3_Q7.c"
#include "Lab-3_Q8.c"
#include "Lab-4_Q1.c"
#include "Lab-4_Q2.c"
#include "Lab-5_Q1.c"
#include "Lab-6_Q1.c"
#include "Lab-6_Q2.c"
#include "Lab-6_Q3.c"
#include "Lab-6_Q4.c"
#include "Lab-6_Q5.c"
#include "Lab-7_Q1.c"
#include "Lab-7_Q2.c"
#include "Lab-7_Q3.c"
#include "Lab-7_Q4.c"
#include "Lab-8_Q1.c"
#include "Lab-8_Q2.c"
#include "Lab-8_Q3.c"
#include "Lab-8_Q4.c"
#include "Lab-9_Q1.c"
#include "Lab-9_Q2.c"
#include "Lab-9_Q3.c"


int main()
{
    int assignment;
    printf("There are total 10 Assignments\n\tEnter Assignment Number: ");
    scanf("%d", &assignment);

    switch (assignment)
    {
    case 1:
    int question;
        printf("\n\tThere are total 8 Questions\n\tEnter Question Number: "); 
        scanf("%d", &question);
        switch (question)
        {
        case 1:
            main_1_1();
            break;
        case 2:
            main_1_2();
            break;
        case 3:
            main_1_3();
            break;
        case 4:
            main_1_4();
            break;
        case 5:
            main_1_5();
            break;
        case 6:
            main_1_6();
            break;
        case 7:
            main_1_7();
            break;
        case 8:
            main_1_8();
            break;        
        default:
            printf("\nEnter a Valid Choice!");
            break;
        }
        break;
        
    case 2:
    int question;
        printf("\n\tThere are total 9 Questions\n\tEnter Question Number: "); 
        scanf("%d", &question);
        switch (question)
        {
        case 1:
            main_2_1();
            break;
        case 2:
            main_2_2();
            break;
        case 3:
            main_2_3();
            break;
        case 4:
            main_2_4();
            break;
        case 5:
            main_2_5();
            break;
        case 6:
            main_2_6();
            break;
        case 7:
            main_2_7();
            break;
        case 8:
            main_2_8();
            break;
        case 9:
            main_2_9();
            break;         
        default:
            printf("\nEnter a Valid Choice!");
            break;
        }
        break;

    case 3:
    int question;
        printf("\n\tThere are total 8 Questions\n\tEnter Question Number: "); 
        scanf("%d", &question);
        switch (question)
        {
        case 1:
            main_3_1();
            break;
        case 2:
            main_3_2();
            break;
        case 3:
            main_3_3();
            break;
        case 4:
            main_3_4();
            break;
        case 5:
            main_3_5();
            break;
        case 6:
            main_3_6();
            break;
        case 7:
            main_3_7();
            break;
        case 8:
            main_3_8();
            break;         
        default:
            printf("\nEnter a Valid Choice!");
            break;
        }
        break;



    
    default:
        break;
    }


    return 0;
}