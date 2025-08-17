
#include<stdio.h>
void book()
{
    int op8,t=2000;

printf("HERE ARE THE TYPES\n");
                printf(" 1.Corner bookcases\n 2.Closed Bookcase\n 3.Cube\n 4.Floating Bookshelf\n 5.industrial bookcase\n");
                printf("\nPlease select a Table of your choice\n");
                scanf("%d",&op8);
                switch(op8)
                {
                case 1:
                    printf("Corner bookcases\n");
                    printf("The price of the corner bookcases is %d RUPEES",t);
                    break;

                case 2:
                    printf("Closed Bookcase\n");
                    printf("The price of the Closed Bookcase is %d RUPEES\n",t);
                    break;
                case 3:
                    printf("Cube bookcase\n");
                    printf("The price of the Cube bookcase is %d RUPEES\n",t);
                    break;
                case 4:
                    printf("Floating Bookshelf\n");
                    printf("The price of the Floating Bookshelf\ is %d RUPEES\n",t);
                    break;
                case 5:
                    printf("industrial bookcase\n");
                    printf("The price of the industrial bookcase is %d RUPEES\n",t);

                }
}


