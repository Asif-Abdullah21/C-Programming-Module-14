#include<stdio.h>
#include<math.h>
int main()
{
    int a=5,b=3;
   // ans = ceil(pow(a,b));//125
    int ans = pow(a*1.0,b*1.0);//81
    printf("Power: %d\n",ans);
    
    return 0;
}