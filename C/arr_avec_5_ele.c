#include <unistd.h>
#include <stdio.h>
int main(void)
{
    int arr[5] = {0,1,2,3,4};
    for(int i = 0 ; i < 5 ; i++)
        printf("%d\n",arr[i]);
    return(0);
}
