//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept N numbers from User and return difference between summation
//                       of even elements and summation odd numbers
//
// Input  : N : 6
//         Elements : 85 66 3 80 93 88
// output : 53 (234-181)
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iSumEven = 0, iOddSum = 0, iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    return iSumEven - iOddSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *P = NULL;

    printf("Enter number of elements :\n");
    scanf("%d", &iSize);

    P = (int *)malloc(iSize * sizeof(int));

    if (P == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &P[iCnt]);
    }

    iRet = Difference(P, iSize);

    printf("Result is %d", iRet);

    free(P);

    return 0;
}