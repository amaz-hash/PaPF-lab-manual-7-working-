#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool validateCredentials(char *username, char *password) 
{
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0) 
    {
        return true;
    } 
    return false;
}

void login(char *username, char *password) 
{
    if (validateCredentials(username, password)) 
    {
        printf("Login successful!\n");
    } else {
        printf("Invalid credentials.\n");
    }
}

int main() 
{
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%49s", username)
    printf("Enter password: ");
    scanf("%49s", password);

    login(username, password);

    return 0;
}
