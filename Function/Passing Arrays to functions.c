
#include <stdio.h>
int calculateSum(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 10; ++i)
        sum += arr[i];
    return sum;
}
int main()
{
    int result, arr[] = {1,2,3,4,5,6,7,8,9,10};
    result = calculateSum(arr);
    printf("Result = %d", result);
    return 0;
}
