#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int t = 0, b = 2, left = 0, right = 2;

    while (t <= b && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++)
            printf("%d ", arr[t][i]);
        t++;

        // Print right column
        for (int i = t; i <= b; i++)
            printf("%d ", arr[i][right]);
        right--;

        // Print bottom row if valid
        if (t <= b) {
            for (int i = right; i >= left; i--)
                printf("%d ", arr[b][i]);
            b--;
        }

        // Print left column if valid
        if (left <= right) {
            for (int i = b; i >= t; i--)
                printf("%d ", arr[i][left]);
            left++;
        }
    }
    printf("\n");
    return 0;
}