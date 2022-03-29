#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int item[100];
    int a,b,t;
    int count;
    //read in numbers
    printf("How many number? ");
    scanf("%d",&count);
    for(a=0;a<count;a++) scanf("%d",&item[a]);
    //now sort item using a bubble sort
    for(a=1;a<count;++a)
    //compare adjacent elements
        for(b=count-1;b>=a;--b){
            if(item[b-1]>item[b]){
                //exchange elements
                t=item[b-1];
                item[b-1]=item[b];
                item[b]=t;
            }
        }
    //dispay sorted list
    for(t=0;t<count;t++) printf("%d ",item[t]);
    return 0; 
}