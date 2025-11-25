#include <stdio.h>

int main() {
    enum UserRole {ADMIN, USER, GUEST};

    int role;
    printf("Select your role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have read-only access.\n");
            break;
        default:
            printf("Invalid role selected!\n");
    }

    return 0;
}
