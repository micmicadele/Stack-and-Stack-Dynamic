#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void session_counter() {
    int counter = 0;  
    counter += 1;
    printf("Session visits: %d\n", counter);
}

void kiosk_usage() {
    static int total_users = 0;  
    total_users += 1;
    printf("Total users today: %d\n", total_users);
}

int main() {
    char input[10];
    int customer = 1;

    while (1) {
        printf("\nPress ENTER to start Customer Session %d (or type 'q' to quit): ", customer);
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "q") == 0 || strcmp(input, "Q") == 0) {
            printf("\nKiosk shutting down. Thank you!\n");
            break;
        }

        printf("Customer Session %d started:\n", customer);
        for (int i = 0; i < 5; i++) {
            session_counter();  
        }
        kiosk_usage();
        customer++;
    }

    return 0;
}
