//2. Take two array as input, merge them and print it in reverse order using loop
#include<stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n,&m);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        /* code */
        scanf("%d", &b[i]);
    }
    int o=n+m;
    int c[o];
    printf("The merged array is: \n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        c[i]=a[i];
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        c[n+i]=b[i];
    }
    //printing the array
    for (int i = 0; i < o; i++)
    {
        /* code */
        printf("%d", c[i]);
    }
    //printing in reverse
    printf("\nthe array in reverse: \n");
    for (int i = o-1; i >= 0; i--)
    {
        /* code */
        printf("%d", c[i]);
    }
    
    
    return 0;
}