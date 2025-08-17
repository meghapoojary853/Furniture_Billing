

#include<stdio.h>
float desks()
{
    float k=8000,l=12000,m=15000,n=7000,o=5000;
    int op4;
                printf("HERE ARE THE TYPES\n");
                printf(" 1.Writing Desk\n 2.Computer Desk\n 3.Executive Desk\n 4.Standing Desk\n 5.Corner Desk\n");
                printf("\nPlease select a desk of your choice\n");
                scanf("%d",&op4);//tables
                switch(op4)
                {
                case 1:
                    printf("Writing Desk\n");
                    printf("The price of the Writing Desk is %f RUPEES\n",k);
                    return k;
                    break;

                case 2:
                    printf("Computer Desk\n");
                    printf("The price of the Computer Desk is %f RUPEES\n",l);
                    return l;
                    break;
                case 3:
                    printf("Executive Desk\n");
                    printf("The price of the Executive Desk is %f RUPEES\n",m);
                    return m;
                    break;
                case 4:
                    printf("Standing Desk \n");
                    printf("The price of the Standing Desk is %f RUPEES\n",n);
                    return n;
                    break;
                case 5:
                    printf("Corner Desk \n");
                    printf("The price of the Corner Deskis %f RUPEES\n",o);
                    return o;
                    break;


                }
}



