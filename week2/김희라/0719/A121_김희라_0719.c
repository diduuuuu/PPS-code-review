#include <stdio.h>
#include <stdlib.h>

int findShortestSubarray(int* nums, int numsSize) {
    // 배열에서 원소의 첫 번째 인덱스와 마지막 인덱스를 저장하기 위한 해시 맵
    int* firstIdx = (int*)malloc(sizeof(int) * 50000);
    int* lastIdx = (int*)malloc(sizeof(int) * 50000);
    for (int i = 0; i < 50000; i++) {
        firstIdx[i] = -1;
        lastIdx[i] = -1;
    }

    // 배열의 원소와 빈도수를 저장하기 위한 해시 맵
    int* frequency = (int*)malloc(sizeof(int) * 50000);
    for (int i = 0; i < 50000; i++) {
        frequency[i] = 0;
    }

    // 배열의 최대 빈도수와 해당 원소
    int maxFrequency = 0;
    int maxElement = 0;

    // 배열의 원소들에 대해 빈도수와 첫 번째, 마지막 인덱스를 기록
    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        if (firstIdx[num] == -1) {
            firstIdx[num] = i;
        }
        lastIdx[num] = i;
        frequency[num]++;
        if (frequency[num] > maxFrequency) {
            maxFrequency = frequency[num];
            maxElement = num;
        } else if (frequency[num] == maxFrequency) {
            int currentLength = lastIdx[num] - firstIdx[num] + 1;
            int maxLength = lastIdx[maxElement] - firstIdx[maxElement] + 1;
            if (currentLength < maxLength) {
                maxElement = num;
            }
        }
    }

    // 최대 빈도수 원소의 첫 번째 인덱스와 마지막 인덱스 차이를 반환
    int shortestSubarrayLength = lastIdx[maxElement] - firstIdx[maxElement] + 1;
    return shortestSubarrayLength;
}

int main() {
    int nums[] = {1, 2, 2, 3, 1, 4, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = findShortestSubarray(nums, numsSize);
    printf("The length of the shortest subarray with the same degree is: %d\n", result);

    return 0;
}
