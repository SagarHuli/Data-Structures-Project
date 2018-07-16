#ifndef DSA_H_INCLUDED
#define DSA_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct mobile
{
    char name[20];
    char brand[15];
    int price;
    int item;
    struct mobile* next;
};
typedef struct mobile MOBILE;

struct laptop
{
    char name[10];
    char brand[10];
    int price;
    struct laptop* next;
} ;
typedef struct laptop LAPTOP;

struct pendrive
{
    char brand[20];
    char capacity[5];
    int price;
    struct pendrive* next;

} ;
typedef struct pendrive PENDRIVE;

struct tv
{
    char brand[20];
    int price;
    struct tv* next;
};
typedef struct tv TV;

struct headphones
{
    int price;
    char brand[20];
    struct headphones* next;
};
typedef struct headphones HEADPHONES;

struct customer
{
    char name[20];
    int price;
    struct customer* next;
};
typedef struct customer CUSTOMER;


void shop(MOBILE *,LAPTOP *,PENDRIVE *,TV * ,HEADPHONES *,CUSTOMER *);
void inventory(MOBILE *,LAPTOP *,PENDRIVE *,TV * ,HEADPHONES *);
void buy_mobile(MOBILE *,CUSTOMER *);


#endif // DSA_H_INCLUDED
