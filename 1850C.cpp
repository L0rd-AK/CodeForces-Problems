#include <stdio.h>
int main()
{

    char a[100][100];

    int test, k = 0;
    scanf("%d", &test);
    scanf("%d");
    while (test--)
    {
        char newA[100];
        int flag=0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%c", &a[i][j]);
            }
            
        }
        
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if ((a[i][j] >= 'a' && a[i][j] <= 'z' )||( a[i][j] >= 'A' && a[i][j] <= 'Z'))
                {
                    k=j;
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        for (int i = 0; i < 8; i++)
        {
            if ((a[i][k] >= 'a' && a[i][k] <= 'z' )||( a[i][k] >= 'A' && a[i][k] <= 'Z')) printf("%c",a[i][k]);
        }printf("\n");
        
    }

}
