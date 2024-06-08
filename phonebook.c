#include <stdio.h>

int main() {
    char n[50];
    int a;
    // long p;
    char p[15];  // Changed to char array to store phone number as a string
    int d;
    char Em[50];

    char na[50];
    int ag;
    // long ph;
    char ph[15]; // Changed to char array to store phone number as a string
    int db;
    char Email[50];

    printf("Welcome To Phone Book\n\n");

    printf("Menu\n");
    printf("Press 1 to add the contact\n");

    int x;
    printf("Enter your choice: ");
    scanf("%d", &x);

    if (x == 1) {
        int y;
        printf("Enter the number of contacts to be added (1 or 2): ");
        scanf("%d", &y);

        if (y == 1) {
            printf("-----------------------\n");
            printf("Name: ");
            scanf("%s", n);

            printf("\nAge: ");
            scanf("%d", &a);

            printf("\nPhone number: ");
            // scanf("%ld", &p);
            scanf("%s", p);  // Changed to %s to read the phone number as a string

            printf("\nDate of Birth (ddmmyyyy): ");
            scanf("%d", &d);

            printf("\nEmail: ");
            scanf("%s", Em);
        } else if (y == 2) {
            printf("Enter First contact info below\n");
            printf("\nName: ");
            scanf("%s", n);

            printf("\nAge: ");
            scanf("%d", &a);

            printf("\nPhone number: ");
            //  scanf("%ld", &p);
            scanf("%s", p);  // Changed to %s to read the phone number as a string

            printf("\nDate of Birth (ddmmyyyy): ");
            scanf("%d", &d);

            printf("\nEmail: ");
            scanf("%s", Em);

            printf("\nEnter second contact info below\n");
            printf("\nName: ");
            scanf("%s", na);

            printf("\nAge: ");
            scanf("%d", &ag);

            printf("\nPhone number: ");
            // scanf("%ld", &ph);
            scanf("%s", ph);  // Changed to %s to read the phone number as a string

            printf("\nDate of Birth (ddmmyyyy): ");
            scanf("%d", &db);

            printf("\nEmail: ");
            scanf("%s", Email);
        } else {
            printf("Invalid number of contacts.\n");
            return 0;
        }

        printf("\nMenu\n");
        printf("Press 1 to see the first contact\n");
        printf("Press 2 to see both contacts\n");
        printf("Press 3 to exit the phone book\n");

        int z;
        printf("Enter your choice: ");
        scanf("%d", &z);

        switch (z) {
            case 1:
                printf("First contact you entered:\n");
                printf("Name: %s\n", n);
                printf("Age: %d\n", a);
                //  printf("Phone number: %ld\n", p);
                printf("Phone number: %s\n", p);  // Changed to %s to print the phone number as a string
                printf("Date of Birth: %d\n", d);
                printf("Email: %s\n", Em);
                break;
            case 2:
                if (y == 2) {
                    printf("First contact you entered:\n");
                    printf("Name: %s\n", n);
                    printf("Age: %d\n", a);
                    printf("Phone number: %s\n", p);  // Changed to %s to print the phone number as a string
                    printf("Date of Birth: %d\n", d);
                    printf("Email: %s\n", Em);

                    printf("\nSecond contact you entered:\n");
                    printf("Name: %s\n", na);
                    printf("Age: %d\n", ag);
                    //  printf("Phone number: %ld\n", ph);
                    printf("Phone number: %s\n", ph);  // Changed to %s to print the phone number as a string
                    printf("Date of Birth: %d\n", db);
                    printf("Email: %s\n", Email);
                } else {
                    printf("Only one contact was entered.\n");
                }
                break;
            case 3:
                printf("Are you sure you want to close the phone book?\n");
                printf("Press 1 for Yes\n");
                printf("Press 2 for No\n");
                int ans;
                scanf("%d", &ans);
                if (ans == 1) {
                    printf("The phone book has closed. Have a good day!\n");
                } else if (ans == 2) {
                    printf("The phone book has not closed. You can continue.\n");
                } else {
                    printf("Invalid input.\n");
                }
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } else {
        printf("Invalid input.\n");
        return 0;
    }

    return 0;
}