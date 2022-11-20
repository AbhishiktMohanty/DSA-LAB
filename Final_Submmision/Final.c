#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<malloc.h>
#include<math.h>



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
#include "Lab-4_Q3.c"
#include "Lab-5_Q1.c"
#include "Lab-6_Q1.c"
#include "Lab-6_Q2.c"
#include "Lab-6_Q3.c"
#include "Lab-6_Q4.c"
// #include "Lab-6_Q5.c"
// #include "Lab-7_Q1.c"
// #include "Lab-7_Q2.c"
// #include "Lab-7_Q3.c"
// #include "Lab-7_Q4.c"
// #include "Lab-8_Q1.c"
// #include "Lab-8_Q2.c"
// #include "Lab-8_Q3.c"
// #include "Lab-8_Q4.c"
// #include "Lab-9_Q1.c"
// #include "Lab-9_Q2.c"
// #include "Lab-9_Q3.c"

int main()
{
    int assignment;
    int question;
    main_menu:
    do
    {

        printf("\nThere are total 10 Assignments\n\tEnter Assignment Number: ");
        scanf("%d", &assignment);

        switch (assignment)
        {
        case 1:
        printf("\n\n\tAssignment-1");
            while (1)
            {
                printf("\n\n\tThere are total 8 Questions & Press 0 to Exit this Menu.\n\tEnter Question Number: ");
                scanf("%d", &question);
                switch (question)
                {
                case 0:
                    goto main_menu;
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
                    printf("\n\tEnter a Valid Question Number!");
                    break;
                }
            }
        case 2:
        printf("\n\n\tAssignment-2");
            while (1){
                printf("\n\n\tThere are total 9 Questions & Press 0 to Exit this Menu.\n\tEnter Question Number: ");
                scanf("%d", &question);
                switch (question)
                {
                case 0:
                    goto main_menu;
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
                    printf("\n\tEnter a Valid Question Number!");
                    break;
                }
            }

        case 3:
        printf("\n\n\tAssignment-3");
            while (1)
            {            
                printf("\n\n\tThere are total 8 Questions & Press 0 to Exit this Menu.\n\tEnter Question Number: ");
                scanf("%d", &question);
                switch (question)
                {
                case 0:
                    goto main_menu;
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
                    printf("\n\tEnter a Valid Question Number!");
                    break;
                }
            }
            
        case 4:
            printf("\n\n\tAssignment-4");
            while(1){
                printf("\n\n\tThere are total 3 Questions & Press 0 to Exit this Menu.\n\tEnter Question Number: ");
                scanf("%d", &question);
                switch (question)
                {
                case 0:
                    goto main_menu;
                case 1:
                    main_4_1();
                    break;
                case 2:
                    main_4_2();
                    break;
                case 3:
                    main_4_3();
                    break;
                default:
                    printf("\n\tEnter a Valid Question Number!");
                    break;
                }
            }
        case 5:
        printf("\n\n\tAssignment-5");
        while(1){
            printf("\n\n\tThere are total 1 Questions & Press 0 to Exit this Menu.\n\tEnter Question Number: ");
            scanf("%d", &question);
            switch (question)
            {
            case 0:
                goto main_menu;
            case 1:
                main_5_1();
                break;
            default:
                printf("\n\tEnter a Valid Question Number!");
                break;
            }
        }
        case 6:
        printf("\n\n\tAssignment-6");
            while (1)
            {            
                printf("\n\n\tThere are total 5 Questions & Press 0 to Exit this Menu.\n\tEnter Question Number: ");
                scanf("%d", &question);
                switch (question)
                {
                case 0:
                    goto main_menu;
                case 1:
                    main_6_1();
                    break;
                case 2:
                    main_6_2();
                    break;
                case 3:
                    main_6_3();
                    break;
                case 4:
                    main_6_4();
                    break;
                case 5:
                    // main_6_5();
                    break;
                default:
                    printf("\n\tEnter a Valid Question Number!");
                    break;
                }
            }
            
        
        default:
            break;
        }
    } while (assignment != 10);

    return 0;
}