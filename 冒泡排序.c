#include<stdio.h>
void bubble_sort(int arr[10], int sz)
{
    int i = 0;
    for (i = 0;i < 9;i++)
    {
        int flag=1;

        int j = 0;
        for (j = 0;j < 9-i;j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag=0;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
}

int main()
{
    int arr[10];
    int i = 0;
    printf("请输入10个整数:");
    for (i = 0;i < 9;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr, 9);
    for (i = 0;i < 9;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}