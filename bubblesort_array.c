 #include<stdio.h>

void bubbleSort(int array[], int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int number, i;
    printf("Enter the total number of elements: ");
    scanf("%d", &number);
    printf("Enter the elements in array: ");
    int a[number];
    for(i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }

    bubbleSort(a, number);
    printf("Sorted array: \n");
    for(i = 0; i < number; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
