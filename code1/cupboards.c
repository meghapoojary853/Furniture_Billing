

#include<stdio.h>
float cupboards()
{
    float p=25000,q=35000,r=28000,s=42000,t=38000;
    int op5;

printf("HERE ARE THE TYPES\n");
                printf(" 1.Wall-mounted Cupboards \n 2.Free-standing Cupboards\n 3.Built-in Cupboards\n 4.Corner Cupboards\n 5.Display Cupboards\n");
                printf("\nPlease select a cupboard  of your choice\n");
                scanf("%d",&op5);
                switch(op5)
                {
                case 1:
                    printf("Wall-mounted Cupboards\n");
                    printf("The price of the Wall-mounted Cupboards is %f RUPEES",p);
                    return p;
                    break;

                case 2:
                    printf("Free-standing Cupboards\n");
                    printf("The price of the Free-standing Cupboards is %f RUPEES\n",q);
                    return q;
                    break;
                case 3:
                    printf("Folding Chair\n");
                    printf("The price of the Built-in Cupboards is %f RUPEES\n",r);
                    return r;
                    break;
                case 4:
                    printf("Corner Cupboards\n");
                    printf("The price of the Corner Cupboards is %f RUPEES\n",s);
                    return s;
                    break;
                case 5:
                    printf("Display Cupboards\n");
                    printf("The price of the Display Cupboards  is %f RUPEES\n",t);
                    return t;

                }
}


