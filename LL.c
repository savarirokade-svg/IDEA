#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*link;

};
int main()
{
    struct node*s1=(struct node*)malloc(sizeof(struct node));
    s1->data=10;
    s1->link=NULL;

    struct node *s2=(struct node*)malloc(sizeof(struct node));
    s2->data=20;
    s2->link=NULL;
    s1->link=s2;

    struct node*s3=(struct node*)malloc(sizeof(struct node));
    s3->data=30;
    s3->link=NULL;
    s2->link=s3;


    printf(" %c %c %c\n",s1->data,s2->data,s3->data);

}