//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept N numbers from User and check whether that number contains 11
//                      or not;
//
// Input  : N : 6
//         Elements : 85 66 11  80 93 88
// output : 11 is present
// Input  : N : 6
//         Elements : 85 66 3  80 93 88
// output : 11 is absent
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL Flag = FALSE;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            Flag = TRUE;
            break;
        }
    }
    return Flag;
}

int main()
{
    int iSize = 0, iCnt = 0;
    BOOL bRet = FALSE;
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

    bRet = Check(P, iSize);

    if (bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(P);

    return 0;
}