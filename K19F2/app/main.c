#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 100
#define MAX_USERS 10


struct Student {
    char name[50];
    int id;
    char dob[11];  // Ngày tháng năm sinh
    char note[100];  // Chú thích
};
struct UserAccount {
    char username[20];
    char password[20];
};

void registerAccount(struct UserAccount users[], int *userCount);
int login(struct UserAccount users[], int userCount);
void addStudent(struct Student students[], int *count);
void Studentslist(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count, int studentId);

int main() {
    int chose;
    char a;
    int passticket = 0;
    int Access rights
    printf("               **************************************************\n");
    printf("               *                                                *\n");
    printf("               *     1.register     2.loggedin       3.Exit     *\n");
    printf("               *                                                *\n");
    printf("               **************************************************\n");

    do{
    printf("\nNhap lua chon cua bn: ");
    scanf("%d",&chose);
    scanf("%c",&a);
    fflush(stdin);
    struct UserAccount userAccounts[MAX_USERS];
    int userCount = 0;
    int loggedIn = 0;

    if(chose == 1){
        registerAccount(userAccounts, &userCount);
    }

        loggedIn = login(userAccounts, userCount);
        if(accept == 1){
        if (loggedIn) {
        int studentCount = 0;
        struct Student students[MAX_STUDENTS];

        int choice;
        do {
            printf("\nMenu:\n");
            printf("1. Add student\n");
            printf("2. Show student list\n");
            printf("3. Delete student base on ID\n");
            printf("0. Exit\n");
            printf("Please choose: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Only admin can use this function");
                    break;
                case 2:
                    Studentslist(students, studentCount);
                    break;
                case 3:
                    printf("Only admin can use this function");
                    break;
                case 0:
                    printf("thank you for using.\n");
                    break;
                default:
                    printf("unvaliable\n");
        }
        } while (choice != 0);
    }
    }else if(chose == 2){
        passticket == 1;
        loggedIn = login(userAccounts, userCount);
        if(accept == 1){
        loggedIn = login(userAccounts, userCount);
        if (loggedIn) {
        int studentCount = 0;
        struct Student students[MAX_STUDENTS];

        int choice;
        do {
            printf("\nMenu:\n");
            printf("1. Add student\n");
            printf("2. Show student list\n");
            printf("3. Delete student base on ID\n");
            printf("0. Exit\n");
            printf("Please choose: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Only admin can use this function");
                    break;
                case 2:
                    Studentslist(students, studentCount);
                    break;
                case 3:
                    printf("Only admin can use this function");
                    break;
                case 0:
                    printf("thank you for using.\n");
                    break;
                default:
                    printf("unvaliable\n");
        }
        } while (choice != 0);
        }
        }else if(loggedIn == 2){
        int studentCount = 0;
        struct Student students[MAX_STUDENTS];

        int choice;
        do {
            printf("\nMenu:\n");
            printf("1. Add student\n");
            printf("2. Show student list\n");
            printf("3. Delete student base on ID\n");
            printf("0. Exit\n");
            printf("Please choose: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    addStudent(students, &studentCount);
                    break;
                case 2:
                    Studentslist(students, studentCount);
                    break;
                case 3:
                    if (studentCount > 0) {
                        int studentId;
                        printf("Delete student base on ID: ");
                        scanf("%d", &studentId);
                        deleteStudent(students, &studentCount, studentId);
                    } else {
                        printf("No Student found, please check again!.\n");
                    }
                    break;
                case 0:
                    printf("thank you for using.\n");
                    break;
                default:
                    printf("unvaliable\n");
            }
        }while (choice != 0);
    }else{
        printf("Please only choose 1 or 2!");
    }
    }
    }while(passticket == 0);
    return 0;
}

void registerAccount(struct UserAccount users[], int *userCount) {
    if (*userCount < MAX_USERS) {
        printf("\nCreate account:  ");
        scanf("%s", users[*userCount].username);

        printf("New password: ");
        scanf("%s", users[*userCount].password);

        (*userCount)++;
        printf("Account has created!\n");
    } else {
        printf("full,can't create more account , sorry user!\n");
    }
}
int login(struct UserAccount users[], int userCount) {
    struct UserAccount hoangTungAccount;
    strcpy(hoangTungAccount.username, "HoangTung");
    strcpy(hoangTungAccount.password, "12345678");

    char username[20];
    char password[20];

    printf("account: ");
    scanf("%s", username);

    printf("password: ");
    scanf("%s", password);

    if (strcmp(username, hoangTungAccount.username) == 0 && strcmp(hoangTungAccount.password, password) == 0){
            printf("Welcome admin\n");
            return 2;
        }

    for (int i = 0; i < userCount; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            printf("welcome %s\n", username);
            return 1;
        }
    }
    printf("The username or password maybe wrong! Please try again!\n");
    return 0;
}
void addStudent(struct Student students[], int *count) {
    if (*count < MAX_STUDENTS) {
        printf("New student name: ");
        scanf("%s", students[*count].name);

        printf("Day of birth (dd/mm/yyyy): ");
        scanf("%s", students[*count].dob);

        printf("classcode : ");
        scanf("%s", students[*count].note);

        students[*count].id = *count + 1;

        (*count)++;
        printf("New student alivable.\n");
    } else {
        printf("List have full, open more slot.\n");
    }
}
void Studentslist(struct Student students[], int count) {
    printf("Student list:\n");
    for (int i = 0; i < count; i++) {
        printf("Student ID %d:\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Day of Birth: %s\n", students[i].dob);
        printf("Note: %s\n", students[i].note);
        printf("\n");
    }
}
void deleteStudent(struct Student students[], int *count, int studentId) {
    int foundIndex = -1;

    for (int i = 0; i < *count; i++) {
        if (students[i].id == studentId) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {

        for (int i = foundIndex; i < *count - 1; i++) {
            students[i] = students[i + 1];
        }

        (*count)--;
        printf("Student has been deleted%d.\n", studentId);
    } else {
        printf("Student unfound please check again %d.\n", studentId);
    }
}



