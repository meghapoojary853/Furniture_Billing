

#include<stdio.h>
float dressers()
{
    float u=18000,v=13000,w=15000,x=17000,y=18000;
    int op6;
printf("HERE ARE THE TYPES\n");
                printf(" 1.Standard Dresser\n 2.Tallboy Dresser\n 3.Gentleman's Chest\n 4.Chiffonier\n 5.Vanity Dresser\n");
                printf("\nPlease select a dressers of your choice\n");
                scanf("%d",&op6);
                switch(op6)
                {
                case 1:
                    printf("Standard Dresser\n");
                    printf("The price of the standard Dresser %f RUPEES",u);
                    return u;
                    break;

                case 2:
                    printf("Tallboy Dresser\n");
                    printf("The price of the tallboy Dresser is %f RUPEES\n",v);
                    return v;
                    break;
                case 3:
                    printf("Gentleman's Chest\n");
                    printf("The price of the Gentleman's Chest is %f RUPEES\n",w);
                    return w;
                    break;
                case 4:
                    printf("Chiffonier\n");
                    printf("The price of the Chiffonier is %f RUPEES\n",x);
                    return x;
                    break;
                case 5:
                    printf("Vanity Dresser\n");
                    printf("The price of the Vanity Dresser is %f RUPEES\n",y);
                    return y;

                }
}


