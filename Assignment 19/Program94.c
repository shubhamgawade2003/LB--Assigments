//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept N numbers from User and return frequency of 11 in it.
//                      
//
// Input  : N : 6
//         Elements : 85 66 11  80 93 88
// output : 1
// Input  : N : 6
//         Elements : 85 66 3  80 93 88
// output : 0
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iCount++;
            
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0,iRet =0;
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

    printf(" Frequency : %d",iRet);

    free(P);

    return 0;
}