#include <cstdio>

int find_number(int m, int *nums, int n) {
    int head = 1, tail = n,mid;
    while (head <= tail){
        mid = (head + tail) / 2;
        if (nums[mid] == m) {
            return mid;
        } else if (nums[mid] < m){
            head = mid + 1;
        } else {
            tail = mid - 1;
        }
    }
    return 0;
}

int main() {
    int n, k, m;
    int numbers[1000001];
    int i, j;
    while (scanf("%d%d", &n, &k) != EOF) {
        for (i = 1; i <= n; i++) {
            scanf("%d", &numbers[i]);
        }
        for (j = 0; j < k; j++) {
            scanf("%d", &m);
            printf("%d", find_number(m, numbers, n));
            if (j < k - 1) {
                printf(" ");
            }
        }
    }
    return 0;
}
