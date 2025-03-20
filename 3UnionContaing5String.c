#include <stdio.h>
#include <string.h>

# define C_SIZE 50

union Address {
    char name[C_SIZE];
    char house[C_SIZE];
    char city[C_SIZE];
    char state[C_SIZE];
    char pin[C_SIZE];
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
