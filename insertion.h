void insert (int a[],int n){
    int sorted,i,j;
    for (i = 1; i < n; i++)
    {
        int value = a[i];
        printf("value = %d\n",value);
        for (j = i-1; j >= 0 && a[j] >= value; j--)
        {
            a[j+1]=a[j];
            display(a,n);
        }
            a[j+1] = value;
            display(a,n);
            printf("\t===end of round %d===\n",i);
    } 
}