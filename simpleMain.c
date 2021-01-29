#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include "display.h"
#include "swap.h"
int main(int argc,char *argv[]){
    int *a,n;
    n = argc-2;
    a = (int*)malloc(n*sizeof(int));
    for(int k = 0; k <argc; k++){
    }
    for (int i = 0; i < n; i++)
    {
        a[i] =  atoi(argv[i+2]);
    }
        display(a,n);
    if (strcmp(argv[1],"bubble")==0)
    {
        bubble(a,n);
    }else if (strcmp(argv[1],"selection")==0)
    {
        selection(a,n);
    }else if (strcmp(argv[1],"insertion")==0)
    {
        insert(a,n);
    }
    return 0;
}