#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    for (int i=0; i<T; i++){
        int A;
        int B;
        scanf("%d",&A);
        scanf("%d",&B);

        printf("%d\n",(A+B));

    }
    return 0;
}
