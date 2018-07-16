#include "dsa.c"

int main()
{
    MOBILE *startm=NULL;
    startm=infomob();
    LAPTOP *startl=NULL;
    startl=infolap();
    PENDRIVE *startp=NULL;
    startp=infopen();
    HEADPHONES *starth=NULL;
    starth=infohead();
    TV *starttv=NULL;
    starttv=infotv();
    CUSTOMER *b=NULL;
    int choice;
    char password[5];
         password[5]='abcd';
    char enter_password[5];

    printf("\t\t\t*******************************\n");
    printf("\t\tWelcome to E-shop and Inventory Management System\n");
    printf("\t\t\t*******************************\n\n\n");
    printf("1->Customer\n");
    printf("2->Admin\n");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:shop(startm,startl,startp,starttv,starth,b);
               break;
        case 2:printf("\t\t\t*******************************\n");
               printf("\t\t\t\tFOR ADMIN ACCESS ONLY\n");
               printf("\t\t\t*******************************\n\n\n\n");
               printf("Enter Password\n");
               scanf("%s",enter_password);
               if(strcmp(enter_password,password))
                  {
                   printf("Access Granted\n");
                   inventory(startm,startl,startp,starttv,starth);
                   }
               else
               {
                   printf("Incorrect Passsword\n");
                   printf("Returning to main menu........\n");
                   main();
               }
    }
    return 0;

}
