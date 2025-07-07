//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept N numbers from User and accept another number as NO,and
//                      frequency of No in it
//
// Input  : N : 6 ,NO = 66
//         Elements : 85 66 11  80 93 88
// output : 1
// Input  : N : 6 , NO = 3
//         Elements : 85 66 3  80 3 88
// output : 2
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>


int Frequency(int Arr[], int iLength,int iNO)
{
    int iCnt = 0, iCount = 0;
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNO)
        {
            iCount++;
            
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0,iRet =0, iValue =0;
    int *P = NULL;

    printf("Enter number of elements :\n");
    scanf("%d", &iSize);
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);

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

    iRet = Frequency(P, iSize,iValue);

    printf("Frequency : %d",iRet);

    free(P);

    return 0;
}