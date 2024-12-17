#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define MAX_ACCOUNTS 100
#define MAX_STUDENTS 100
#define MAX_USERNAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50
#define MAX_STUDENT_NAME_LENGTH 50
struct Student {
    int serialNumber;
    char fullName[100];
};

struct Account {
    char username[100];
    char password[100];
    int permissionLevel;
};


void createAccount(struct Account* accountList, int* accountCount);
int login(struct Account* accountList, int accountCount, char* username, char* password);
int findAccountIndex(struct Account* accountList, int accountCount, char* username);
void adminGrantPermission(struct Account* accountList, int accountCount);
void addStudent(struct Student* studentList, int* studentCount);
void removeStudent(struct Student* studentList, int* studentCount);
void viewList(struct Student* studentList, int studentCount);
void searchStudent(struct Student* studentList, int studentCount);
void exitprocess();
int main() {
    struct Student studentList[100];
    int studentCount = 0;

    struct Account accountList[10];
    int accountCount = 1;

    loadAccounts(accountList, &accountCount);
    loadStudents(studentList, &studentCount);

    accountList[accountCount].permissionLevel = 4;
    accountCount++;
    int choice;
    char a;
        printf("            |----------------------------------------MENU-------------------------------------|\n");
        printf("            |                                                                                 |\n");
        printf("            |   1. Log in     2. Create an account      3. Forget password      4. Exit       |\n");
        printf("            |                                                                                 |\n");
        printf("            |---------------------------------------------------------------------------------|\n");
        do{
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        scanf("%c",&a);
        fflush(stdin);
        if(a != 10 || choice < 0 || choice > 4){
            printf("\e[0;31m");
            printf("\nChoice not available!");
            printf("\e[0;37m");
        }
        }while(a != 10 || choice < 0 || choice > 4);
        switch (choice) {

        //CHOICE MAIN 1
        {

            case 1: {
    char username[100];
    char password[100];
    int accountIndex = login(accountList, accountCount, username, password);
    if (accountIndex != -1) {
        switch (accountList[accountIndex].permissionLevel) {
            case 1: // NGUOI CHUC VU 1
                printf("\e[0;31m");
                printf("You are not allowed to access this information.\n");
                printf("\e[0;37m");
                Sleep(500);
                return main();
            case 2: // NGUOI CHUC VU 2
                system("cls");
                do{
                                printf("1. View student list\n");
                                printf("2. Search for student\n");
                                printf("0. Return to Main Menu\n");
                                do{
                                printf("Enter your choice: ");
                                scanf("%d", &choice);
                                fflush(stdin);
                                if(a != 10 || choice < 0 || choice > 2){
                                    printf("\e[0;31m");
                                    printf("\nChoice not available!");
                                    printf("\e[0;37m");
                                }
                                }while(a != 10 || choice < 0 || choice > 2);
                                switch (choice){
                                    case 1:
                                        if (studentCount > 0) {
                                            viewList(studentList, studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 2:
                                        if (studentCount > 0) {
                                            searchStudent(studentList, studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 0:
                                        exitprocess();
                                        break;
                                    default:
                                        printf("Invalid choice.\n");
                                }
                            } while (choice != 0);
                            break;
            case 3: // NGUOI CHUC VU 3
                system("cls");
                 system("cls");
                            do {
                                printf("\nStudent Management Menu:\n");
                                printf("1. Add student\n");
                                printf("2. Remove student\n");
                                printf("3. View student list\n");
                                printf("4. Search for student\n");
                                printf("0. Return to Main Menu\n");
                                do{
                                printf("Enter your choice: ");
                                scanf("%d", &choice);
                                fflush(stdin);
                                if(a != 10 || choice < 0 || choice > 4){
                                    printf("\e[0;31m");
                                    printf("\nChoice not available!");
                                    printf("\e[0;37m");
                                }
                                }while(a != 10 || choice < 0 || choice > 4);
                                switch (choice){
                                    case 1:
                                        if (studentCount < 100) {
                                            addStudent(studentList, &studentCount);
                                        } else {
                                            printf("Cannot add more students. Limit reached.\n");
                                        }
                                        break;
                                    case 2:
                                        if (studentCount > 0) {
                                            removeStudent(studentList, &studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 3:
                                        if (studentCount > 0) {
                                            viewList(studentList, studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 4:
                                        if (studentCount > 0) {
                                            searchStudent(studentList, studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 0:
                                        exitprocess();
                                        break;
                                    default:
                                        printf("Invalid choice.\n");
                                }
                            } while (choice != 0);
                            break;
            case 4: // NGUOI CHUC VU 4
                system("cls");
                admin(&studentCount, studentList, accountList, &accountCount);
                break;
            default:
                printf("Invalid permission level.\n");
        }
    }
    break;
}
        //CHOICE MAIN 2
        {

            case 2:
                system("cls");
                if (accountCount < 10) {
                    createAccount(accountList, &accountCount);
                    char username[50];
                    char password[50];
                    int i;
                    char a;
                    do{
                    printf("Do you want to login? ");
                    printf("\n1: yes");
                    printf("\n2: no ");
                    printf("\n ");
                    scanf("%d",&i);
                    scanf("%c",&a);
                    fflush(stdin);
                    if(a != 10 || i > 2|| i< 0){
                        printf("\e[0;31m");
                        printf("\nChoice not available!");
                        printf("\e[0;37m");
                    }
                    if(i == 2){
                        return main();
                    }
                    }while(a != 10 || i > 2|| i< 0);
                    int accountIndex = login(accountList, accountCount, username, password);
                    if (accountIndex != -1) {
                        switch (accountList[accountIndex].permissionLevel) {
                            case 1:
                                printf("\e[0;31m");
                                printf("You are not allowed to access this information.\n");
                                printf("\e[0;37m");
                                Sleep(500);
                                return main();
                            case 2: // NGUOI CHUC VU 2
                            do{
                                printf("1. View student list\n");
                                printf("2. Search for student\n");
                                printf("0. Return to Main Menu\n");
                                do{
                                printf("Enter your choice: ");
                                scanf("%d", &choice);
                                fflush(stdin);
                                if(a != 10 || choice < 0 || choice > 2){
                                    printf("\e[0;31m");
                                    printf("\nChoice not available!");
                                    printf("\e[0;37m");
                                }
                                }while(a != 10 || choice < 0 || choice > 2);
                                switch (choice){
                                    case 1:
                                        if (studentCount > 0) {
                                            viewList(studentList, studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 2:
                                        if (studentCount > 0) {
                                            searchStudent(studentList, studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 0:
                                        exitprocess();
                                        break;
                                    default:
                                        printf("Invalid choice.\n");
                                }
                            } while (choice != 0);
                            break;
                        case 3: // NGUOI CHUC VU 3
                            system("cls");
                            do {
                                printf("\nStudent Management Menu:\n");
                                printf("\e[0;33m1. Add student\n");
                                printf("2. Remove student\n");
                                printf("3. View student list\n");
                                printf("4. Search for student\n");
                                printf("0. Return to Main Menu\e[0;37m\n");
                                do{
                                printf("Enter your choice: ");
                                scanf("%d", &choice);
                                fflush(stdin);
                                if(a != 10 || choice < 0 || choice > 4){
                                    printf("\e[0;31m");
                                    printf("\nChoice not available!");
                                    printf("\e[0;37m");
                                }
                                }while(a != 10 || choice < 0 || choice > 4);
                                switch (choice){
                                    case 1:
                                        if (studentCount < 100) {
                                            addStudent(studentList, &studentCount);
                                        } else {
                                            printf("Cannot add more students. Limit reached.\n");
                                        }
                                        break;
                                    case 2:
                                        if (studentCount > 0) {
                                            removeStudent(studentList, &studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 3:
                                        if (studentCount > 0) {
                                            viewList(studentList, studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 4:
                                        if (studentCount > 0) {
                                            searchStudent(studentList, studentCount);
                                        } else {
                                            printf("There are no students in the list.\n");
                                        }
                                        break;
                                    case 0:
                                        exitprocess();
                                        break;
                                    default:
                                        printf("Invalid choice.\n");
                                }
                            } while (choice != 0);
                            break;

                case 4: // NGUOI CHUC VU 4
                    system("cls");
                        admin(&studentCount,studentList,accountList,&accountCount);
                        break;
                        default:
                            printf("Error\n");
                    }
                }
                break;
            }else{
                printf("\e[0;31m\nAccount full!\n\e[0;37m");
            }
        }
        //CHOICE MAIN 3

        {
            case 3:
                system("cls");
                changePassword(accountList, &accountCount);
                return main();
        }
        //CHOICE MAIN 4
        {
            case 4:
                system("cls");
                exitProgram();
                break;
        }
            default:
                printf("Invalid choice.\n");
        }
        }
    return 0;
}
// TREN LA MAIN
void addStudent(struct Student* studentList, int* studentCount) {
    printf("Enter student's full name: ");
    fgets(studentList[*studentCount].fullName, sizeof(studentList[*studentCount].fullName), stdin);
    studentList[*studentCount].fullName[strcspn(studentList[*studentCount].fullName, "\n")] = '\0';
    studentList[*studentCount].serialNumber = *studentCount + 1;
    (*studentCount)++;
    printf("Student has been added to the list!\n");
    saveStudents(studentList, *studentCount);
}
void removeStudent(struct Student* studentList, int* studentCount) {
    int serialNumberToRemove;
    printf("Enter the serial number of the student to be removed: ");
    scanf("%d", &serialNumberToRemove);
    if (serialNumberToRemove < 1 || serialNumberToRemove > *studentCount) {
        printf("Invalid serial number.\n");
        return;
    }
    for (int i = serialNumberToRemove - 1; i < *studentCount - 1; ++i) {
        studentList[i] = studentList[i + 1];
    }
    (*studentCount)--;
    printf("Student has been removed from the list!\n");
}
void viewList(struct Student* studentList, int studentCount) {
    printf("Student list:\n");
    printf("Serial Number\tFull Name\n");
    for (int i = 0; i < studentCount; ++i) {
        printf("%d\t\t%s\n", studentList[i].serialNumber, studentList[i].fullName);
    }
}
void searchStudent(struct Student* studentList, int studentCount) {
    int serialNumberToSearch;
    printf("Enter the serial number of the student to search for: ");
    scanf("%d", &serialNumberToSearch);

    if (serialNumberToSearch < 1 || serialNumberToSearch > studentCount) {
        printf("Invalid serial number.\n");
        return;
    }
    printf("Student with serial number %d is: %s\n", serialNumberToSearch, studentList[serialNumberToSearch - 1].fullName);
}
int findAccountIndex(struct Account* accountList, int accountCount, char* username) {
    for (int i = 0; i < accountCount; ++i) {
        if (strcmp(accountList[i].username, username) == 0) {
            return i;
        }
    }
    return -1;
}
int validatePassword(char* password) {
    int hasUpperCase = 0, hasDigit = 0, hasSpecial = 0;

    if (strlen(password) < 8) {
        printf("\e[0;31mPlease enter at least 8 characters!\n\e[0;37m");
        return 0;
    }

    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) {
            hasUpperCase = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else if (!isalnum(password[i])) {
            hasSpecial = 1;
        }
    }

    if (!(hasUpperCase && hasDigit && hasSpecial)) {
        printf("\e[0;31mInvalid password. Try again.\n\e[0;37m");
        return 0;
    }

    return 1;
}
void saveAccounts(struct Account* accountList, int accountCount) {
    FILE *file = fopen("accounts.txt", "w"); // Mở tệp trong chế độ ghi để ghi đè nội dung hiện có
    if (file == NULL) {
        printf("Error: Unable to open file for writing.\n");
        return;
    }

    // Ghi các tài khoản vào tệp
    for (int i = 0; i < accountCount; i++) {
        fprintf(file, "%s %s %d\n", accountList[i].username, accountList[i].password, accountList[i].permissionLevel);
    }

    fclose(file);
}
void createAccount(struct Account* accountList, int* accountCount) {
    char username[50];
    char password[50];
    char confirm[50];
    char choice;
    if (*accountCount >= MAX_ACCOUNTS) {
        printf("Cannot create more accounts. Maximum limit reached.\n");
        return;
    }

    while (1) {
        printf("Enter a new username (or type 0 to exit): ");
        scanf("%s", username);
        fflush(stdin);

        if (username[0] == '0' && username[1] == '\0') {
            printf("Going back...\n");
            return; // Nếu '0' được nhấn, quay lại hàm gọi
        }

        int accountIndex = findAccountIndex(accountList, *accountCount, username);
        if (accountIndex != -1) {
            printf("\e[0;31mThis account already exists. Try again!\n\e[0;37m");
            continue;
        }
        if (strlen(username) < 8) {
            printf("\e[0;31mPlease enter at least 8 characters for the username!\n\e[0;37m");
            continue;
        }
        break;
    }

    while (1) {
        printf("Enter a new password (must contain at least one uppercase letter, one digit, and one special character), or (type 0 to exit): ");
        scanf("%s", password);

        if (password[0] == '0' && password[1] == '\0') {
            printf("Going back...\n");
            return; // Nếu '0' được nhấn, quay lại hàm gọi
        }

        printf("Please enter your password again (or press '0' to go back): ");
        scanf("%s", confirm);

        if (confirm[0] == '0' && confirm[1] == '\0') {
            printf("Going back...\n");
            return; // Nếu '0' được nhấn, quay lại hàm gọi
        }

        if (!validatePassword(password))
            continue;

        if (strcmp(password, confirm) != 0) {
            printf("\e[0;31mThe password and confirmation don't match. Try again.\n\e[0;37m");
            continue;
        }

        break;
    }

    // Copy thông tin username, password và gán mức độ quyền
    strcpy(accountList[*accountCount].username, username);
    strcpy(accountList[*accountCount].password, password);
    accountList[*accountCount].permissionLevel = 1;

    // Lưu tất cả các tài khoản vào tệp (bao gồm cả tài khoản mới)
    saveAccounts(accountList, *accountCount + 1);

    // Tăng số lượng tài khoản lên 1
    (*accountCount)++;

    printf("\e[0;32mAccount has been created. Please wait for admin approval.\n\e[0;37m");
}

void changePassword(struct Account* accountList, int accountCount) {
    char username[50];
    char newpassword[50];
    char choice;

    printf("Enter the username (or type '0' to go back to the menu): ");
    scanf("%s", username);

    if (username[0] == '0' && username[1] == '\0') {
        printf("Going back to the menu...\n");
        return; // Return to the menu
    }

    int accountIndex = findAccountIndex(accountList, accountCount, username);

    if (accountIndex != -1) {
        char confirm[50];
        while (1) {
            printf("Enter a new password (must contain at least one uppercase letter, one digit, and one special character): ");
            scanf("%s", newpassword);

            if (!validatePassword(newpassword))
                continue;

            printf("Please enter your password again: ");
            scanf("%s", confirm);

            if (strcmp(newpassword, confirm) != 0) {
                printf("\e[0;31mThe password and confirmation don't match. Try again.\n\e[0;37m");
                continue;
            }

            break;
        }

        strcpy(accountList[accountIndex].password, newpassword);
        printf("\e[0;32mPassword changed successfully.\n\e[0;37m");

        // Save the updated account list back to the file
        saveAccounts(accountList, accountCount);

        return main();
    } else {
        printf("\e[0;31mAccount does not exist.\n\e[0;37m");
    }
}
int login(struct Account* accountList, int accountCount, char* username, char* password) {
    int attempts = 3;
    char input[50];
    while (attempts > 0) {
        printf("Enter username (or type '0' to return to menu): ");
        scanf("%s", input);

        if (strcmp(input, "0") == 0) {
            return main(); // Return to menu
        }
        strcpy(username, input);
        int i = 0;
        char ch;
        printf("Enter password: ");
        while (1) {
            ch = getch();
            if (ch == '\r') {
                password[i] = '\0';
                break;
            } else if (ch == '\b') {
                if (i > 0) {
                    printf("\b \b");
                    i--;
                }
            } else {
                printf("*");
                password[i++] = ch;
            }
        }

        for (int i = 0; i < accountCount; ++i) {
            if (strcmp(accountList[i].username, username) == 0 && strcmp(accountList[i].password, password) == 0) {
                printf("\e[0;32m\nLogin successful!\n\e[0;37m");
                Sleep(1000);
                return i;
            }
        }
        printf("\e[0;31m\nLogin failed. Please check your username and password. %d attempts left.\n\e[0;37m", attempts);
        attempts--;
    }
    return -1;
}
void adminGrantPermission(struct Account* accountList, int accountCount) {
    char username[50];
    char choice;

    while (1) {
        printf("Enter the username of the account to grant permission (or press '0' to go back): ");
        gets(username);
        fflush(stdin);

        if (username[0] == '0' && username[1] == '\0') {
            printf("\nGoing back...\n");
            Sleep(2000);
            system("cls");
            return; // If '0' is pressed, return to the calling function
        }

        int accountIndex = findAccountIndex(accountList, accountCount, username);

        if (accountIndex >= 0) {
            int newPermission;
            printf("| 1: Not allowed to use any function.\n");
            printf("| 2: Allowed to view and find students.\n");
            printf("| 3: Allowed to use student management functions.\n");
            printf("| 4: Allowed to use as an administrator.\n");
            printf("Enter the new permission level (1, 2, 3, or 4): ");
            scanf("%d", &newPermission);

            if (newPermission < 1 || newPermission > 4) {
                printf("\nInvalid permission level.\n");
                return;
            }
            accountList[accountIndex].permissionLevel = newPermission;
            printf("\nPermission has been updated!\n");
            Sleep(2000);
            system("cls");
            break;
        } else {
            printf("\e[0;31m\nAccount does not exist.\e[0;37m\n");
        }
    }
}
void exitProgram(){
    int choice;
    char a;
    do{
    printf("Are you sure? (1:Y/ 2:N): ");
    scanf(" %d", &choice);
    scanf("%c",&a);
    fflush(stdin);
    if(a != 10 || choice < 0 || choice > 4){
        printf("\e[0;31m");
        printf("\nChoice not available!");
        printf("\e[0;37m");
    }
    }while(a != 10 || choice < 1 || choice > 2);
    if (choice == 1) {
        system("cls"); // Xóa màn hình
        printf("\e[0;34m");
        printf(" #########  ###    ###       ###       #####    ###  ###    ###     ###      ###    ####     ###    ###\n");
        printf(" #########  ###    ###      ## ##      ######   ###  ###   ###       ###    ###   ##    ##   ###    ###\n");
        printf("    ###     ##########     ##   ##     ###  ##  ###  ########         ###  ###   ##      ##  ###    ###\n");
        printf("    ###     ##########    #########    ###   ## ###  ########           ####     ##      ##  ###    ###\n");
        printf("    ###     ###    ###   ##       ##   ###    #####  ###   ###          ####      ##    ##   ##########\n");
        printf("    ###     ###    ###  ##         ##  ###     ####  ###    ###         ####        ####      ######## \n");
        printf("\e[0;37m");
        Sleep(2000); // Tạm dừng chương trình trong 2 giây
        exit(0); // Thoát chương trình
    }else{
        return main();
    }
}
void exitprocess(){
    int choice;
    char a;
    do{
    printf("Are you sure? (1:Y/ 2:N): ");
    scanf(" %d", &choice);
    scanf("%c",&a);
    fflush(stdin);
    if(a != 10 || choice < 1 || choice > 2){
        printf("\e[0;31m");
        printf("\nChoice not available!");
        printf("\e[0;37m");
    }
    }while(a != 10 || choice < 1 || choice > 2);
    if (choice == 1) {
        system("cls");
        return main();
    }
}
void admin (int*studentCount, int studentList,struct Account* accountList, int*accountCount){
    int choice;
    char a;
    do {
                                printf("|----------------------------------------------------------------------------------\n");
                                printf("|1. Student Management Menu          2. Admin Management Menu         3. Exit      \n");
                                printf("|----------------------------------------------------------------------------------\n");
                                do{
                                printf("Enter your choice: ");
                                scanf("%d", &choice);
                                scanf("%c",&a);
                                fflush(stdin);
                                if(a != 10 || choice < 1 || choice > 4){
                                    printf("\e[0;31m");
                                    printf("\nChoice not available!\n");
                                    printf("\e[0;37m");
                                }
                                }while(a != 10 || choice < 1 || choice > 4);
                                switch (choice) {
                                    //case 1
                                    case 1:
                                    system("cls");
                                    studentmanagement(studentCount,studentList);
                                    break;
                                // case 2
                                 case 2:
                                     system("cls");
                                    adminmanagement(studentCount,studentList,accountList,accountCount);
                                    break;
                                //case 3:
                                    case 3:
                                    system("cls");
                                    exitprocess();
                                    break;
                                    }
                                } while (choice != 0);
}
void studentmanagement(int* studentCount, int studentList) {
    int choice;
    char a;
    do {
        printf("\nStudent Management Menu:\n");
        printf("1. Add student\n");
        printf("2. Remove student\n");
        printf("3. View student list\n");
        printf("4. Search for student\n");
        printf("5. Back to admin menu\n");
        printf("0. Return to main Menu\n");
        do {
            printf("Enter your choice: ");
            scanf("%d", &choice);
            scanf("%c", &a);
            fflush(stdin);
            if (a != 10 || choice < 0 || choice > 5) {
                printf("\e[0;31m");
                printf("\nChoice not available!");
                printf("\e[0;37m");
            }
        } while (a != 10 || choice < 0 || choice > 5);
        switch (choice) {
            case 1:
                if (*studentCount < 50) {
                    addStudent(studentList, studentCount);
                } else {
                    printf("Cannot add more students. Limit reached.\n");
                }
                break;
            case 2:
                if (*studentCount > 0) {
                    removeStudent(studentList, studentCount);
                } else {
                    printf("There are no students in the list.\n");
                }
                break;
            case 3:
                if (*studentCount > 0) {
                    viewList(studentList, *studentCount);
                } else {
                    printf("There are no students in the list.\n");
                }
                break;
            case 4:
                if (*studentCount > 0) {
                    searchStudent(studentList, *studentCount);
                } else {
                    printf("There are no students in the list.\n");
                }
                break;
            case 5:
                return;
            case 0:
                exitprocess();
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);
}
void adminmanagement (int*studentCount,int studentList,struct Account* accountList, int*accountCount){
    int choice;
    char a;
    do {
                                    printf("Admin Management Menu:\n");
                                    printf("1. AdminGrantPermission\n");
                                    printf("2. Delete account\n");
                                    printf("3. View Account and Permission\n");
                                    printf("4. Back to admin menu\n");
                                    printf("0. Return to main menu\n");
                                    do{
                                    printf("Enter your choice: ");
                                    scanf("%d", &choice);
                                    scanf("%c",&a);
                                    fflush(stdin);
                                    if(a != 10 || choice < 0 || choice > 3){
                                        printf("\e[0;31m");
                                        printf("\nChoice not available!");
                                        printf("\e[0;37m");
                                    }
                                    }while(a != 10 || choice < 0 || choice > 3);
                                    switch (choice) {
                                        case 1:
                                            system("cls");
                                            adminGrantPermission(accountList,*accountCount);
                                            break;
                                        case 2:
                                            system("cls");
                                            deleteAccount(accountList, accountCount);
                                            break;
                                        case 3:
                                            printf("\n");
                                            viewAccounts(accountList, *accountCount);
                                            printf("\n");
                                            break;
                                        case 4:
                                            system("cls");
                                            return;
                                        case 0:
                                            system("cls");
                                            exitprocess();
                                            break;
                                        default:
                                            printf("Invalid choice.\n");
                                    }
                                } while (choice != 0);
}
void viewAccounts(struct Account* accountList, int accountCount) {
    printf("All Accounts:\n");
    for (int i = 0; i < accountCount; i++) {
        // Check if username contains at least one letter or number
        int hasLetterOrNumber = 0;
        for (int j = 0; accountList[i].username[j] != '\0'; j++) {
            if (isalnum(accountList[i].username[j])) {
                hasLetterOrNumber = 1;
                break;
            }
        }
        if (hasLetterOrNumber) {
            printf("Username: %s\n", accountList[i].username);
            printf("Permission Level: %d\n", accountList[i].permissionLevel);
            printf("--------------------------\n");
        }
    }
}
void deleteAccount(struct Account *accountList, int *accountCount) {
    char username[50];
    printf("Enter the username of the account to delete: ");
    scanf("%s", username);
    int accountIndex = findAccountIndex(accountList, *accountCount, username);
    if (accountIndex >= 0) {
        for (int i = accountIndex; i < (*accountCount - 1); ++i) {
            accountList[i] = accountList[i + 1];
        }
        (*accountCount)--;
        printf("Account deleted successfully.\n");
    } else {
        printf("Account does not exist.\n");
    }
}
void saveStudents(struct Student *studentList, int studentCount) {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Unable to open file for writing.\n");
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        fprintf(file, "%s \n", studentList[i].fullName);
    }

    fclose(file);
}
void loadStudents(struct Student *studentList, int *studentCount) {
    FILE *file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file for reading.\n");
        return;
    }

    *studentCount = 0;
    while ((*studentCount) < MAX_STUDENTS && fscanf(file, "%s %d %f", studentList[*studentCount].fullName)){
        (*studentCount)++;
    }

    fclose(file);
}
void loadAccounts(struct Account* accountList, int* accountCount) {
    FILE *file = fopen("accounts.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file for reading.\n");
        return;
    }
    *accountCount = 0;
    while (fscanf(file, "%s %s %d", accountList[*accountCount].username, accountList[*accountCount].password, &accountList[*accountCount].permissionLevel) == 3) {
        (*accountCount)++;
    }
    fclose(file);
}
