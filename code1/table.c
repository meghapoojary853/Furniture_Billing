

#include<stdio.h>
float table()
{
    float a=30000,b=18000,c=20000,d=25000,e=15000;
    int op2;
                printf("HERE ARE THE TYPES\n");
                printf(" 1.Dinning table\n 2.coffee table\n 3.Outdoor Table\n 4.Drafting tables\n 5.Center tables\n");
                printf("\nPlease select a Table of your choice\n");
                scanf("%d",&op2);//tables
                switch(op2)
                {
                case 1:
                    printf("Dinning tables\n");
                    printf("The price of the Dinning table is %f RUPEES\n",a);
                    return a;
                    break;

                case 2:
                    printf("coffee tables\n");
                    printf("The price of the coffee table is %f RUPEES\n",b);
                    return b;
                    break;
                case 3:
                    printf("Outdoor tables\n");
                    printf("The price of the outdoor table is %f RUPEES\n",c);
                    return c;
                    break;
                case 4:
                    printf("Drafting tables\n");
                    printf("The price of the drafting table is %f RUPEES\n",d);
                    return d;
                    break;
                case 5:
                    printf("Center  tables\n");
                    printf("The price of the center table is %f RUPEES\n",e);
                    return e;
                    break;


                }
}


