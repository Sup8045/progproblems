#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int i_search(int  b[], int key, int len){

for(int i=0; i<len;i++)
if(b[i]==key)
return i;

return -1;

}

int c_search(string a, char c){

for(int i =0; a[i]!='\0'; i++)

if(a[i]==c)
return i;

return -1;

}



int main()
{

/*string name = "Udaykumar";*/

int a[]={1,2,3,4,6};

int size= sizeof(a)/sizeof(a[0]);

printf("Found at index %d\n",i_search(a,3, size));


return 0;

}



