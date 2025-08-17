


#include<stdio.h>
float stools()
{
    float a1=6000,a2=3000,a3=5000,a4=2000,a5=2500;
    int op7;

printf("HERE ARE THE TYPES\n");
                printf(" 1.Bar Stool\n 2.Counter Stool\n 3.Adjustable Stool\n 4.Backless Stool 5.Step Stool\n");
                printf("\nPlease select a stool of your choice\n");
                scanf("%d",&op7);
                switch(op7)
                {
                case 1:
                    printf("Bar Stool\n");
                    printf("The price of the Bar Stool is %f RUPEES\n",a1);
                    return a1;
                    break;

                case 2:
                    printf("Counter Stool\n");
                    printf("The price of the Counter Stool is %f RUPEES\n",a2);
                    return a2;
                    break;
                case 3:
                    printf("Adjustable Stool\n");
                    printf("The price of the Adjustable Stool is %f RUPEES\n",a3);
                    return a3;
                    break;
                case 4:
                    printf("Backless Stool\n");
                    printf("The price of the Backless Stool is %f RUPEES\n",a4);
                    return a4;
                    break;

                case 5:
                    printf("Step Stool\n");
                    printf("The price of the Step Stool is %f RUPEES\n",a5);
                    return a5;

                }
}






