#include <stdio.h>

int main(void)
{
        int t;
        scanf("%d", &t);
        int n, k;
        while (t--) {
                scanf("%d %d", &n, &k);
                int arr[n];
                for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
                int freq[101] = {0};
                for (int i = 0; i < n; i++) freq[arr[i]]++;
                int max_freq = 0;
                int k_freq = 0;
                for (int i = 0; i < 101; i++) {
                        if (freq[i] > max_freq) max_freq = freq[i];
                        if (i == k)
                                k_freq = freq[i];
                }

                printf("%s\n", k_freq >= max_freq ? "YES" : "NO");

        }
        return 0;
}
