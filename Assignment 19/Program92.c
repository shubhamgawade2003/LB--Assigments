//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept N numbers from User and return difference between frequency
//                      of Even numbers and Odd nmbers
//
// Input  : N : 7
//         Elements : 85 66 3 80 93 88 90
// output : 1 (4-3)
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCountEven = 0, iCnt = 0,iCountOdd =0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iCountEven++;
        }
       else
        {
             iCountOdd++;
        }
        
    }

    return iCountEven-iCountOdd;
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

    iRet = Frequency(P, iSize);

    printf("Result is %d", iRet);

    free(P);

    return 0;
}