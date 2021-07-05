#include <stdio.h>

int main()

{
    int a[]={1,2,3,4,5,6,7};
    
    int *p=a;
    
    int l= sizeof(a)/sizeof(a[0]);
    
   
    for(int i=0;i<l;i++)
    printf("%d ",*(p+i));
        
   
}



