#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char house[50];
    char city[50];
    char state[50];
    char pin[10];
};

int main() {
    union Address addr;

    printf("Enter Name: ");
    scanf("%s", addr.name);
    printf("Name: %s\n", addr.name);

    printf("Enter House Name: ");
    scanf("%s", addr.house);
    printf("House Name: %s\n", addr.house);

    printf("Enter City Name: ");
    scanf("%s", addr.city);
    printf("City Name: %s\n", addr.city);

    printf("Enter State: ");
    scanf("%s", addr.state);
    printf("State: %s\n", addr.state);

    printf("Enter Pin Code: ");
    scanf("%s", addr.pin);
    printf("Pin Code: %s\n", addr.pin);

    return 0;
}
