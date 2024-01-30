#include <stdio.h>

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(ar) / sizeof(ar[0]);

    printf("%d\n\n", len);
    int k=3;

    for(int i=0; i<k; i++){
        int temp = ar[len-1];
        for(int j=0; j<len; j++){
            ar[len-1 - j] = ar[len-2 - j];
        }
        ar[0]=temp;
    }

    for(int i=0; i<len; i++){
        printf("%d ", ar[i]);
    }

    return 0;
}