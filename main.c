#include <calculator.h>


/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
int calculator_operand3 = 0;


/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, MODULUS, SQUARE, CUBE, SQUAREROOT, GREATER, LESSER, EQUAL, PRIME, ODD, EVEN, REVERSE, SI, CI, PROFIT, LOSS, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. square\n7. cube\n8. squareroot\n9. greater\n10. lesser\n11. equal\n12. prime\n13. odd\n14. even\n15. reverse\n16. si\n17. ci\n18. profit\n19. loss\n20. Exit");
    printf("\n\tEnter your choice\n");

     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d %d", &calculator_operand1, &calculator_operand2, &calculator_operand3);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;

    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d= %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d- %d= %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d* %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case MODULUS:
            printf("\n\t modulus  =%d\nEnter to continue",

            modulus(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case SQUARE:
            printf("\n\t square %d =%d\nEnter to continue",
            calculator_operand1,
            square(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
            case CUBE:
            printf("\n\t cube %d =%d\nEnter to continue",
            calculator_operand1,
            cube(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case SQUAREROOT:
            printf("\n\t squareroot %d =%d\nEnter to continue",
            calculator_operand1,
            squareroot(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case GREATER:
            printf("\n\t Greater %d and %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            greater(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case LESSER:
            printf("\n\t Lesser %d and %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            lesser(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case EQUAL:
            printf("\n\t Equal %d and %d= %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            equal(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
         case PRIME:
            printf("\n\t Prime %d=%d\nEnter to continue",
            calculator_operand1,
            prime(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case ODD:
            printf("\n\t Odd %d =%d\nEnter to continue",
            calculator_operand1,
            odd(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case EVEN:
            printf("\n\t Even %d =%d\nEnter to continue",
            calculator_operand1,
            even(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case REVERSE:
            printf("\n\t Reverse %d =%d\nEnter to continue",
            calculator_operand1,
            reverse(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
        case SI:
            printf("\n\t simple interest = %d\nEnter to continue",

            si(calculator_operand1, calculator_operand2, calculator_operand3));

            __fpurge(stdin);
            getchar();
            break;
        case CI:
            printf("\n\t compound interest = %d\nEnter to continue",

            ci(calculator_operand1, calculator_operand2, calculator_operand3));

            __fpurge(stdin);
            getchar();
            break;
        case PROFIT:
            printf("\n\t profit = %d\nEnter to continue",

            profit(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case LOSS:
            printf("\n\t loss = %d\nEnter to continue",

            loss(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case 20:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
