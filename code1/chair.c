
#include<stdio.h>
float chairs()
{
    float f=24000,g=23000,h=9000,i=17000,j=5000;
    int op3;

printf("HERE ARE THE TYPES\n");
                printf(" 1.Rocking Chair\n 2.Accent chairs\n 3.Folding Chair\n 4.Wishbone Chair\n 5.Dining Chair\n");
                printf("\nPlease select a Table of your choice\n");
                scanf("%d",&op3);
                switch(op3)
                {
                case 1:
                    printf("Rocking Chair\n");
                    printf("The price of the Rocking Chair is %f RUPEES",f);
                    return f;
                    break;

                case 2:
                    printf("Accent chairs\n");
                    printf("The price of the Accent chairs is %f RUPEES\n",g);
                    return g;
                    break;
                case 3:
                    printf("Folding Chair\n");
                    printf("The price of the Folding Chair is %f RUPEES\n",h);
                    return h;
                    break;
                case 4:
                    printf("Wishbone Chair\n");
                    printf("The price of the Wishbone Chair is %f RUPEES\n",i);
                    return i;
                    break;
                case 5:
                    printf("Dining Chair\n");
                    printf("The price of the Dining Chair  is %f RUPEES\n",j);
                    return j;

                }
}



