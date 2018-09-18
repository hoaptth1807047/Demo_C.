#include <stdio.h>

int countUnsignedNumber(int arrNumber[], int sizeOfArray) {
    int totalUnsignedNumber = 0;
    for (int i = 0; i < sizeOfArray; ++i) {
        if(arrNumber[i] > 0){
            totalUnsignedNumber += arrNumber[i];
        }
    }
    return totalUnsignedNumber;
}

int main() {
    int sizeOfArray = 3;
    int arrayNumber[sizeOfArray];
    arrayNumber[0] = -4;
    arrayNumber[1] = -14;
    arrayNumber[2] = 24;
    printf("Tong cac so nguyen duong la %d", countUnsignedNumber(arrayNumber, sizeOfArray));
}
