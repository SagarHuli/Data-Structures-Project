#include "dsa.h"



MOBILE * infomob()
{
    MOBILE *n1;
    n1=(MOBILE *)malloc(sizeof(MOBILE));
    n1->next=NULL;
    strcpy(n1->name,"K8 NOTE");
    strcpy(n1->brand,"LENOVO");
    n1->price=12999;

    MOBILE *n2;
    n2=(MOBILE *)malloc(sizeof(MOBILE));
    n2->next=NULL;
    n1->next=n2;
    strcpy(n2->name,"G5S PLUS");
    strcpy(n2->brand,"MOTO");
    n2->price=15999;

    MOBILE *n3;
    n3=(MOBILE *)malloc(sizeof(MOBILE));
    n3->next=NULL;
    n2->next=n3;
    strcpy(n3->name,"G5 PLUS");
    strcpy(n3->brand,"MOTO");
    n3->price=14999;

    MOBILE *n4;
    n4=(MOBILE *)malloc(sizeof(MOBILE));
    n4->next=NULL;
    n3->next=n4;
    strcpy(n4->name,"ONE PLUS 5");
    strcpy(n4->brand,"ONE PLUS");
    n4->price=32999;

    MOBILE *n5;
    n5=(MOBILE *)malloc(sizeof(MOBILE));
    n5->next=NULL;
    n4->next=n5;
    strcpy(n5->name,"ONE PLUS 3T");
    strcpy(n5->brand,"ONE PLUS");
    n5->price=23999;

    MOBILE *n6;
    n6=(MOBILE *)malloc(sizeof(MOBILE));
    n6->next=NULL;
    n5->next=n6;
    strcpy(n6->name,"IPHONE X");
    strcpy(n6->brand,"APPLE");
    n6->price=89000;

    MOBILE *n7;
    n7=(MOBILE *)malloc(sizeof(MOBILE));
    n7->next=NULL;
    n6->next=n7;
    strcpy(n7->name,"NOKIA 6");
    strcpy(n7->brand,"NOKIA");
    n7->price=14999;

    MOBILE *n8;
    n8=(MOBILE *)malloc(sizeof(MOBILE));
    n8->next=NULL;
    n7->next=n8;
    strcpy(n8->name,"K8 PLUS");
    strcpy(n8->brand,"LENOVO");
    n8->price=11999;

    MOBILE *n9;
    n9=(MOBILE *)malloc(sizeof(MOBILE));
    n9->next=NULL;
    n8->next=n9;
    strcpy(n9->name,"GALAXY S8");
    strcpy(n9->brand,"SAMSUNG");
    n9->price=53900;

    MOBILE *n10;
    n10=(MOBILE *)malloc(sizeof(MOBILE));
    n10->next=NULL;
    n9->next=n10;
    strcpy(n10->name,"V7 PLUS");
    strcpy(n10->brand,"VIVO");
    n10->price=21990;

    MOBILE *n11;
    n11=(MOBILE *)malloc(sizeof(MOBILE));
    n11->next=NULL;
    n10->next=n11;
    strcpy(n11->name,"REDMI NOTE 4");
    strcpy(n11->brand,"XIAOMI");
    n11->price=11999;

    return n1;
}
///////////////

/** function:infolap
 * description:dynamically ilnitializing the laptop info using linked list
 * input param:NULL
 * returns the starting address of the list
 **/


LAPTOP *infolap()
{
    LAPTOP *l1;
    l1=(LAPTOP *)malloc(sizeof(LAPTOP));
    l1->next=NULL;
    strcpy(l1->name,"XPS 13");
    strcpy(l1->brand,"DELL");
    l1->price=87999;

    LAPTOP *l2;
    l2=(LAPTOP *)malloc(sizeof(LAPTOP));
    l2->next=NULL;
    l1->next=l2;
    strcpy(l2->name,"SPECTRE");
    strcpy(l2->brand,"HP");
    l2->price=129990;

    LAPTOP *l3;
    l3=(LAPTOP *)malloc(sizeof(LAPTOP));
    l3->next=NULL;
    l2->next=l3;
    strcpy(l3->name,"MACBOOK AIR 13");
    strcpy(l3->brand,"APPLE");
    l3->price=72800;

    LAPTOP *l4;
    l4=(LAPTOP *)malloc(sizeof(LAPTOP));
    l4->next=NULL;
    l3->next=l4;
    strcpy(l4->name,"PAVILION");
    strcpy(l4->brand,"HP");
    l4->price=58000;

    LAPTOP *l5;
    l5=(LAPTOP *)malloc(sizeof(LAPTOP));
    l5->next=NULL;
    l4->next=l5;
    strcpy(l5->name,"IDEAPAD 300");
    strcpy(l5->brand,"LENOVO");
    l4->price=54000;

    return l1;

}

HEADPHONES *infohead()
{
    HEADPHONES *h1;
    h1=(HEADPHONES*)malloc(sizeof(HEADPHONES));
    h1->next=NULL;
    strcpy(h1->brand,"BOAT");
    h1->price=600;

    return h1;
}

PENDRIVE *infopen()
{
    PENDRIVE *p1;
    p1=(PENDRIVE*)malloc(sizeof(PENDRIVE));
    p1->next=NULL;
    strcpy(p1->brand,"Sandisk");
    strcpy(p1->capacity,"16 GB");
    p1->price=600;
    return p1;
}

TV *infotv()
{
    TV *t1;
    t1=(TV*)malloc(sizeof(TV));
    t1->next=NULL;
    strcpy(t1->brand,"SONY");
    t1->price=15000;
    return t1;

}
/////////////////////////////////////////////////////////////////////////////

void shop(MOBILE *startm,LAPTOP *startl,PENDRIVE *startp,TV *starttv ,HEADPHONES *starth,CUSTOMER *b)
{
   int select;
    printf("\t\t\t*******************************\n");
    printf("\t\tWelcome to E-shop \n");
    printf("\t\t\t*******************************\n\n\n");
    printf("Enter your choice\n");
    printf("1->Mobile Phones\n");
    printf("2->Laptops\n");
    printf("3->Pendrive\n");
    printf("4->Television\n");
    printf("5->Headphones\n");
    printf("6->return to the main menu\n");
    scanf("%d",&select);

    switch(select)
    {
        case 1: buy_mobile(startm,b);
                break;
      /*  case 2: buy_laptop(startl);
                break;
        case 3: buy_pendrive(startp);
                break;
        case 4: buy_television(starttv);
                break;
        case 5: buy_headphones(starth);
                break;
        case 6: main();
                break;*/
        default: printf("Invalid Entry\n");
                //system("cls");
                 printf("Please Enter your choice again\n");
                 shop(startm,startl,startp,starttv,starth,b);
    }
}

void buy_mobile(MOBILE *startm,CUSTOMER *b)
{
    int op=0,order=0;
    printf("Lenovo\nApple\nSamsung\Moto\nOnePlus\nNokia\nVivo\nXiaomi\n");
    MOBILE *temp;
    temp=startm;
    char brand[25];
    int i=1;

    printf("Enter Brand name\n");
    scanf("%s",brand);
    while(temp!=NULL)
    {
        if(strcmpi(temp->brand,brand)==0)
        {
            printf("\n%d->\tName: %s\nPrice: %d\n",i,temp->brand,temp->price);
        }
        temp=temp->next;

    printf("Confirm Your Order!!!\n\n");
    MOBILE* temp;
    temp=startm;
    int i=1;
    while(temp!=NULL)
    {
        if(i==op)
        {
            printf("%s %s\n",temp->brand,temp->name);
            if(temp->item==0)
                    {
                        printf("There is No stack for this charger\n");
                        printf("Please Import this Model\n");
                        buy_mobile(startm,b);
                    }
        }
        temp=temp->next;
        i++;
    }

    printf("\n1->YES\n2->NO\n");
    scanf("%d",&order);

    if(order==1)
    {
        MOBILE* temp;
        CUSTOMER* hulk;
        int i;
        temp=startm;

        i=1;
        while(temp!=NULL)
        {
            if(i==op)
            {
                hulk=b;
                if(hulk==NULL)
                {
                    hulk=(CUSTOMER*)malloc(sizeof(CUSTOMER));
                    strcpy(hulk->name,temp->name);
                    hulk->price=temp->price;
                    hulk->next=NULL;
                    b=hulk;
                }
                else
                {
                    while(hulk->next!=NULL)
                        hulk=hulk->next;
                    hulk->next=(CUSTOMER*)malloc(sizeof(CUSTOMER));
                    strcpy(hulk->next->name,temp->name);
                    hulk->next->price=temp->price;
                    hulk->next->next=NULL;
                }
                temp->item--;
            }
            temp=temp->next;
            i++;
        }
    }

    else
    {
       buy_mobile(startm,b);
    }

    int other=0;

    system("cls");

    printf("Anything Else Sir/Madam....\n");
    printf("1->YES\n2->NO\n");
    scanf("%d",&other);
    if(other==1)
        buy_mobile(startm,b);
         /*   else
    {
        //buy(cust,start,acc,wake);
    }*/
}


}




void inventory(MOBILE *startm,LAPTOP *startl,PENDRIVE *startp,TV *starttv ,HEADPHONES *starth)
{

}
