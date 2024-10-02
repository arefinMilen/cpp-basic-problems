#include <stdio.h>

int findMiddle(int a, int b, int c)
{
      if((c<b && b<a) || (a<b && b<c))

    return b;


    else if((c<a && a<b) || (b<a && a<c))
        return  a;



   else

        return c;
}


int main() {
    int n;

    scanf("%d",&n);
    while(n--)
    {
        int a, b, c;
        scanf("%d %d %d",&a,&b ,&c);


        int result = findMiddle(a, b, c);
        printf("%d\n",result);
    }

    return 0;
}
