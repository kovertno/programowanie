#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float balance_USD = 10.0, balance_PLN = 10.0, ammount; 
    char i, c;
    printf("Starting balance: USD- %f, PLN- %f\n", balance_USD, balance_PLN);
    printf("W- withdraw the money, P- Put the money into account, C- check the statement, V- convert from USD to PLN or vice versa, E- exit\n");
    while (i != 'E')
    {
        printf("Give me an input:");
        scanf(" %c", &i);
        switch(i)
        {
            case 'W':
                printf("Specify the currency: 1- PLN, 2- USD\n");
                scanf(" %c", &c);
                switch(c)
                {
                    case '1':
                        printf("Specify the ammount:");
                        scanf("%f", &ammount);
                        if (ammount <= balance_PLN && ammount > 0)
                        {
                            balance_PLN -= ammount;
                            printf("Withdrawn: %f, PLN balance: %f\n", ammount, balance_PLN);
                        }
                        else printf("Wrong ammount\n");
                        break;
                    case '2':
                        printf("Specify the ammount:\n");
                        scanf("%f", &ammount);
                        if (ammount <= balance_USD && ammount > 0)
                        {
                            balance_USD -= ammount;
                            printf("Withdrawn: %f, USD balance: %f\n", ammount, balance_USD);
                        }
                        else printf("Wrong ammount\n");
                        break;
                    default:
                        printf("ERROR! Wrong input\n");
                }
                break;
            case 'P':
                printf("Specify the currency: 1- PLN, 2- USD\n");
                scanf(" %c", &c);
                switch(c)
                {
                    case '1':
                        printf("Specify the ammount:");
                        scanf("%f", &ammount);
                        if (ammount > 0)
                        {
                            balance_PLN += ammount;
                            printf("PLN balance: %f\n", balance_PLN);
                        }
                        else printf("Wrong ammount\n");
                        break;
                    case '2':
                        printf("Specify the ammount:\n");
                        scanf("%f", &ammount);
                        if (ammount > 0)
                        {
                            balance_USD += ammount;
                            printf("USD balance: %f\n", balance_USD);
                        }
                        else printf("Wrong ammount\n");
                        break;
                    default:
                        printf("ERROR! Wrong input\n");
                }           
                break;
            case 'C':
                printf("Specify the currency: 1- PLN, 2- USD\n");
                scanf(" %c", &c);
                switch(c)
                {
                    case '1':
                        printf("PLN balance: %f\n", balance_PLN);
                        break;
                    case'2':
                        printf("USD balance: %f\n", balance_USD);
                        break;
                    default:
                        printf("ERROR! Wrong inout\n");
                }

                break;
            case 'V':
                printf("1- PLN to USD, 2- USD to PLN\n");
                scanf(" %c", &c);
                switch (c)
                {
                    case '1':
                        printf("Specify the ammount:");
                        scanf("%f", &ammount);
                        if (ammount <= balance_PLN && ammount > 0)
                        {
                            balance_PLN -= ammount;
                            balance_USD += (ammount*0.24);
                        }
                        else printf("Wrong ammount\n");
                        break;
                    case '2':
                        printf("Specify the ammount:");
                        scanf("%f", &ammount);
                        if (ammount <= balance_USD && ammount > 0)
                        {
                            balance_USD -= ammount;
                            balance_PLN += (ammount*4.18);
                        }
                        else printf("Wrong ammount\n");
                        break;
                }
                break;
            case 'E':
                break;
            default:
                printf("ERROR! Wrong input\n");
        }
    }
    return 0;
}
