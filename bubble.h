
void bubble(int a[], int N){
    int i;
    int j;
    int sorted;
  for(i=N-1;i>0;i--){
    sorted=0;
    for(j=0;j<i;j++){
        if(a[j]>a[j+1]) {// decending
            swap(&a[j],&a[j+1]);
            sorted=1;
        }
        display(a,N);
    }
    
    printf("\t===end of round %d===\n",i);
    if (sorted==0) break;
  }
    
}
