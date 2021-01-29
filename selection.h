void selection (int a[],int n){
    int temp,lmin,i,j;
    for (i = 0; i < n-1; i++)
    {
        lmin = i ;
        for (j = i+1; j < n; j++)
        {
            if (a[j]<a[i])
            {
                lmin = j;
            }
        }
        swap(&a[i],&a[lmin]);
        display(a,n);
    } 
}
