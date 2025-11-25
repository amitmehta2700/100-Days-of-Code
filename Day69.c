#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int visited[n]; 
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    int repeated = -1;

    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            repeated = arr[i];
            break;
        }
        visited[arr[i]] = 1;
    }

    printf("Repeated element is: %d", repeated);

    return 0;
}
