


#include<stdio.h>
void comfort()
{
    int op3,l=10,m=1,n=12,o=30,p=50;
                printf("HERE ARE THE TYPES\n");
                printf(" 1.Round bed\n 2.Storage Bed\n 3.Air Bed\n 4.Convertible Bed\n 5.Divan\n");
                printf("\nPlease select a bed of your choice\n");
                scanf("%d",&op3);//beds
                switch(op3)
                {
                case 1:
                    printf("Round bed\n");
                    printf("The price of round bed is %d RUPEES\n",l);
                    break;

                case 2:
                    printf("Storage Bed\n");
                    printf("The price of the storage bed is %d RUPEES\n",m);
                    break;
                case 3:
                    printf("Air Bed\n");
                    printf("The price of the air bed is %d RUPEES\n",n);
                    break;
                case 4:
                    printf("Convertible Bed\n");
                    printf("The price of the convertible is %d RUPEES\n",o);
                    break;
                case 5:
                    printf("Divan\n");
                    printf("The price of the divan is %d RUPEES\n",p);
                    break;


                }
}


