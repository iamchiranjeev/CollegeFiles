#include <stdio.h>
#include<conio.h>
void quicksort (int [], int, int);
int main()
{
    int list[5], i;
    printf("Enter the 5 elements to be sorted:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &list[i]);
    }
    quicksort(list, 0, 5 - 1);
    printf("After applying quick sort\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
    getch();
    return 0;
}
void quicksort(int list[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j)
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
}
