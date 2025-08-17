
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fn
void displayMenu();
float table();
float chairs();
float desks();
float dressers();
float bookcases();
float stools();


float total_cost = 0.0;


int main()
{
    char username[20];
    char password[20];
   // char store[20];
    //char owner[20];
    int op, op1;

    printf("WELCOME TO XYZ FURNITURE\n");


    int login_attempts = 0;
    do
    {
        printf("\n***LOGIN***\n");
        //printf("Enter the name of the furniture store:");
       // scanf("%s",store);
        //printf("Enter the name of the owner:");
        //scanf("%s",owner);
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);


        if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0)
            //&& strcmp(store,"xyz")==0&& strcmp(owner,"abc")==0)
        {
            printf("\nLogin successful!\n");
            break;
        }
        else
        {
            printf("\nInvalid username or password. Please try again.\n");
            login_attempts++;
        }
    }
    while (login_attempts < 3);

    if (login_attempts == 3)
    {
        printf("\nMaximum login attempts reached. Exiting program.\n");
        return 1;
    }


    Menu();


    return 0;
}


void Menu()
{
    int op, op1;


    do
    {
        printf("\n 1.Menu\n 2.generate bill\n 3.Contact\n 4.exit \n");
        printf("\n Enter your choice\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\n ***MENU***\n\n");
            printf(" 1.Tables\n 2.chairs\n 3.desks\n 4.dressers\n 5.cupboards\n 6.Stool\n\n");
            printf("Please select your furniture\n");
            scanf("%d", &op1);

            switch (op1)
            {
            case 1:
                printf("You selected tables.\n\n");

                total_cost +=  table();
                break;
            case 2:
                printf("You selected chairs.\n\n");

                total_cost += chairs();
                break;

            case 3:
                printf("You selected desks.\n\n");

                total_cost += desks();
                break;
            case 4:
                printf("You selected dressers.\n\n");

                total_cost += dressers();
                break;
            case 5:
                printf("You selected cupboards.\n\n");

                total_cost +=cupboards();
                break;

            case 6:
                printf("You selected stools.\n\n");

                total_cost += stools();
                break;
            }
            break;

        case 2:
            printf("\n GENERATED BILL\n");
            printf("Your total bill: RUPEES  is %.2f", total_cost);
            char choice[4];
            printf("\nDo you want to continue? (yes/no): ");
            scanf("%s", choice);
            if (strcmp(choice, "yes") == 0)
            {

                continue;
            }
            else
            {
                printf("\nThank you! :) \n");
                return;
            }
            break;
        case 3:
            printf("\n CONTACTS\n");
            printf("Contact us at abcd@gmail.com\n For more details call 9876543210\n");
            break;
        case 4:
            printf("EXIT\n");
            printf("THANK YOU!.. PLEASE VISIT US AGAIN\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    }
    while (op != 4);
}

