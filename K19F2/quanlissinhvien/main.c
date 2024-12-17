
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>
#define MAX_STUDENTS 100
#define COLOR_WHITE "\e[0;37m"
#define COLOR_RED "\e[0;31m"
#define COLOR_GREEN "\e[0;32m"
#define COLOR_YELLOW "\e[0;33m"
#define COLOR_CYAN "\e[0;36m"
//STRUCT
#define MAX_STUDENTS 100
#define MAX_STRING_LENGTH 100

typedef struct {
    char name[MAX_STRING_LENGTH];
    int birth_year;
    char gender[MAX_STRING_LENGTH];
    char student_id[MAX_STRING_LENGTH];
    char phone_number[MAX_STRING_LENGTH];
    char cccd[MAX_STRING_LENGTH];
    char address[MAX_STRING_LENGTH];
    char gmail[MAX_STRING_LENGTH];
} Student;

typedef struct {
    char user[25];
    char pass[25];
    int AccessLevel;
} Login;
Login users[50] = {
    {"HoangTung", "Tung123@", 5},
};

int numUsers = 1;
int loggedin = -1;

//HAM

void SaveAccount();
int login(int *count);
void LoadAccount();
void ResetPassword();
int Security(const char *password);
void Register();
void ListUser();
void SearchUser();
void ChangeLevel();
void Usersmangament();
void Screen(int *exit);
void Menu1();
void Menu2();
void Menu3();
void Menu4();
void Studentmanagement();

// chuc nang 5
int main() {
    while (1){
            int exit = 0;
            Screen(&exit);
            AllMenu();
    }
    return 0;
}
void SaveAccount(){
	FILE *af;
	af=fopen("Account.txt", "w");

	if( af == NULL){
		printf("\033[1;31m");
		printf("\nThere are no data or File has been opened unsuccessfully.\n");
		printf("\033[0m");
		return;
	}

	int j;
	for (j=0; j<numUsers; j++){
		fprintf(af, "%s %s %d \n", users[j].user, users[j].pass, users[j].AccessLevel);
	}

	fclose(af);
	printf("\n\e[0;32mAll the accounts have been saved successfully.\e[0;37m\n");
}
int login(int *count) {
    int exit;
    int error = 1;
    char username[25], password[25];

    do {
        printf("\nUsername ( press 0 to exit): ");
        gets(username);

        if (strcmp(username, "0") == 0) {
            Screen(&exit);
            return;
        }

        printf("Password ( press 0 to exit): ");
        int i = 0;
        char ch;
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

        if (strcmp(password, "0") == 0) {
            printf("\n");
            Screen(&exit);
            return;
        }

        for (i = 0; i < numUsers; ++i) {
            if (strcmp(username, users[i].user) == 0 && strcmp(password, users[i].pass) == 0) {
            	printf("\e[0;32m");
                printf("\nLogin Succesfully\n", users[i].AccessLevel);
                printf("\e[0;37m");
                error = 0;
                loggedin = i;
                return ;

            }
        }

        if (error != 0) {
	        printf("\e[0;31m");
	        printf("\nIncorrect Username or Password, Please enter again\n");
	        printf("\nAttempt: %d\n", *count);
	        printf("\e[0;37m");
	        *count -= 1;

	        if (*count == 0) {
                int choice;
                char a;
                do {
                    printf("\n--------------------------------------------------------\n");
                    printf("\n   1.Reset your password     2. Create    3. exit       \n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\nChoice: ");
                    scanf("%d", &choice);
                    scanf("%c", &a);
                    fflush(stdin);
                    if (a != 10 || choice < 0 || choice > 3) {
                        printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
                    }
                    if (choice == 1) {
                        system("cls");
                        ResetPassword();
                        Screen(&exit);
                    }
                    if (choice == 2) {
                        system("cls");
                        Register();
                        Screen(&exit);
                    }
                    if (choice == 3) {
                        system("cls");
                        Screen(&exit);
                    }
                } while (a != 10 || choice < 0 || choice > 3);
            }

            if (*count < 1) {
                break;
                return;
            }
        }

        error = 1;
    } while (error != 0);
}
void LoadAccount(){
	FILE *af;
	af= fopen("Account.txt", "r");

	if (af == NULL){
		printf("\e[0;31m");
		printf("\nThere are no data or File has been opened unsuccessfully.\n");
		printf("\e[0;37m");
		return;
	}

	numUsers = 0;
	while (fscanf(af, "%s %s %d \n", users[numUsers].user, users[numUsers].pass, &users[numUsers].AccessLevel) == 3) {
        numUsers++;
	}

	fclose(af);
}
int Security(const char *password) {
    int length = strlen(password);
    int hasLower = 0, hasUpper = 0, hasNumber = 0, hasSpecial = 0;

    for (int i = 0; i < length; i++) {
        if (islower(password[i])) {
            hasLower = 1;
        } else if (isupper(password[i])) {
            hasUpper = 1;
        } else if (isdigit(password[i])) {
            hasNumber = 1;
        } else if (!isalnum(password[i])) {
            hasSpecial = 1;
        }
    }
    if (length < 8) {
        printf("\e[0;31mYour password must contain at least 8 characters.\e[0;37m\n");
        return 0;
    } else if (length >= 8 && hasLower && hasUpper && hasNumber && hasSpecial) {
        printf("\e[0;32mThe account you have been successfully created.\e[0;37m\n");
        return 1;
    } else {
        printf("\e[0;31mYour password is not strong enough. Please try another password.\e[0;37m\n");
        return 0;
    }
}
void ResetPassword() {
    int exit;
    char username[25], newpassword[25];
    while (1) {
        printf("Username ( press 0 to exit): ");
        scanf("%24s", username); // Limit input length to avoid buffer overflow
        if (strcmp(username, "0") == 0) {
            Screen(&exit);
            return; // Exiting the function after invoking Screen
        }

        int userFound = 0;
        for (int i = 0; i < numUsers; i++) {
            if (strcmp(username, users[i].user) == 0) {
                userFound = 1;
                printf("Enter your new password: ");
                scanf("%24s", newpassword); // Limit input length to avoid buffer overflow
                if (strcmp(newpassword, "0") == 0) {
                    printf("\n");
                    Screen(&exit);
                    return;
                }
                if (Security(newpassword)) {
                    strcpy(users[i].pass, newpassword);
                    printf("\e[0;32mYour password has been reset successfully.\e[0;37m\n");
                    SaveAccount();
                    Screen(&exit); // Assuming Screen function exists
                    return;
                }
            }
        }

        if (!userFound) {
            printf("\n\e[0;31mAccount not found!\e[0;37m\n");
        }
    }
}
void Register() {
    if (numUsers >= 50) {
        printf("\e[0;31mFull account!\e[0;37m\n");
        return;
    }
	char username[25], password[25];
    printf("\nUsername ( press 0 to exit): ");
    gets(username);
    if (strcmp(username, "0") == 0) {
            Screen(&exit);
            return;
        }
    int flag =0;
    while (flag !=1 ) {
        printf("Password: ");
        scanf("%s", password);
        if (strcmp(password, "0") == 0) {
            printf("\n");
            Screen(&exit);
            return;
        }
        flag = Security(password);
    }
	int exist = 0;
    int j;
    for (j = 0; j < numUsers; j++) {
        if (strcmp(username, users[j].user) == 0) {
            exist = 1;
            break;
        }
    }
    if (exist) {
        printf("\n\e[0;31mThe username has already existed!\e[0;37m\n");
        Register();
    } else {
    	strcpy(users[numUsers].user, username);
		strcpy(users[numUsers].pass, password);
    	users[numUsers].AccessLevel = 1;
    	numUsers++;
    }
}
void ViewAccounts() {
    printf("+------+----------------------ALL ACCOUNT------------------------------------------+\n");
    printf("|  Seq |           Account             |                AccessLevel                |\n");
    printf("+------+---------------------------------+-----------------------------------------+\n");
    int seq = 1; // Initialize sequence number
    for (int i = 0; i < numUsers; i++) {
        const char* userColor; // Variable to hold the user's color code
        const char* levelColor; // Variable to hold the access level's color code
        switch(users[i].AccessLevel) {
            case 1:
                userColor = COLOR_WHITE;
                levelColor = COLOR_WHITE;
                break;
            case 2:
                userColor = COLOR_RED;
                levelColor = COLOR_RED;
                break;
            case 3:
                userColor = COLOR_GREEN;
                levelColor = COLOR_GREEN;
                break;
            case 4:
                userColor = COLOR_YELLOW;
                levelColor = COLOR_YELLOW;
                break;
            case 5:
                userColor = COLOR_CYAN;
                levelColor = COLOR_CYAN;
                break;
            default:
                userColor = COLOR_WHITE; // Default color
                levelColor = COLOR_WHITE; // Default color
                break;
        }
        if (strcmp(users[i].user, "HoangTung") != 0) { // Skip HoangTung user
            printf("| %4d | %s%-31s%s | %s%-39d%s |\n", seq, userColor, users[i].user, COLOR_WHITE, levelColor, users[i].AccessLevel, COLOR_WHITE);
            seq++; // Increment sequence number only for non-skipped users
        }
    }
    printf("+------+---------------------------------+-----------------------------------------+\n");
}
void SearchUser() {
    char input[100]; // Assuming the user won't input more than 100 characters
    char *token;

    printf("Enter the user numbers you want to delete (e.g., 1,5,6,9-12,15): ");
    fgets(input, sizeof(input), stdin); // Using fgets to read the whole line

    // Remove trailing newline character
    input[strcspn(input, "\n")] = 0;

    if (strcmp(input, "0") == 0) return; // If input is 0, exit

    int flag = 0;

    // Tokenize the input based on comma
    token = strtok(input, ",");
    while (token != NULL) {
        // Check if the token contains a range
        char *range = strstr(token, "-");
        if (range != NULL) {
            int start = atoi(token);
            int end = atoi(range + 1);
            for (int i = start; i <= end; i++) {
                // Remove the user with this number
                if (i >= 1 && i <= numUsers) {
                    if (strcmp(users[i-1].user, "HoangTung") != 0) { // Skip HoangTung user
                        flag = 1;
                        // Move the last user to the position of the user to be deleted
                        strcpy(users[i - 1].user, users[numUsers - 1].user);
                        users[i - 1].AccessLevel = users[numUsers - 1].AccessLevel;
                        numUsers--;
                        // After moving the last user, recheck the current index
                        // because it now contains the user from the end
                        i--;
                    }
                }
            }
        } else {
            int num = atoi(token);
            // Remove the user with this number
            if (num >= 1 && num <= numUsers) {
                if (strcmp(users[num-1].user, "HoangTung") != 0) { // Skip HoangTung user
                    flag = 1;
                    // Move the last user to the position of the user to be deleted
                    strcpy(users[num - 1].user, users[numUsers - 1].user);
                    users[num - 1].AccessLevel = users[numUsers - 1].AccessLevel;
                    numUsers--;
                    // After moving the last user, recheck the current index
                    // because it now contains the user from the end
                    token--;
                }
            }
        }
        token = strtok(NULL, ",");
    }

    if (flag == 1) {
        printf("\e[0;32m");
        printf("User(s) have been removed successfully.\n");
        printf("\e[0;37m");
    } else {
        printf("\e[0;32m");
        printf("No matching user(s) found.\n");
        printf("\e[0;37m");
    }

    SaveAccount();
}
void ChangeLevel(){
    int userNumber;
    int newLevel;
    char a;
    do{
    printf("\nEnter the user number (0 to exit): ");
    scanf("%d", &userNumber);
    scanf("%c",&a);
    fflush(stdin);
    if(a!= 10){
        printf("\n\e[0;31m NUMBER ONLY!\e[0;37m\n");
    }
    }while(a!= 10);
    if(userNumber == 0) return; // Exit if user inputs 0

    if(userNumber < 1 || userNumber > numUsers) {
        printf("\e[0;31m");
        printf("Invalid user number. Please enter a valid user number.\n");
        printf("\e[0;37m");
        return;
    }

    printf("Enter the new Access Level for user ( %s ): ", users[userNumber - 1].user);
    scanf("%d", &newLevel);

    if (newLevel >= 1 && newLevel <= 4) {
        users[userNumber - 1].AccessLevel = newLevel;
        printf("\e[0;32m");
        printf("Access Level for user ( %s ) has been changed successfully.\n", users[userNumber - 1].user);
        printf("\e[0;37m");
    } else {
        printf("\e[0;31m");
        printf("Invalid Access Level. Access Level should be between 1 and 4.\n");
        printf("\e[0;37m");
    }

    SaveAccount();
}
void Usermanagement(){
	int choose;
	char a;
	while(1){
	printf("\n+------------------------+\n");
	printf("|1. Change Access Level  |\n");
    printf("|2. View Users           |\n");
    if(loggedin !=-1 && users[loggedin].AccessLevel==5){
    printf("|3. Delete User          |\n");
	}
    printf("|0. Exit                 |\n");
    printf("+------------------------+\n");
	do{
	printf("Choose: ");
	scanf("%d", &choose);
    scanf("%c",&a);
    fflush(stdin);
    if(choose < 0 || choose >4|| a!= 10){
            printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
    }
    }while(choose < 0 || choose >4|| a!= 10);
	switch(choose){
		case 1:{
			ViewAccounts();
			printf("\e[0;33m");
			printf("\nNOTE:\nAccess Level 1: waiiting accept or Restrictions on usage rights.\nAccess Level 2: Teacher: view only.\nAccess Level 3: Student Manager.\nAccess Level 4: Deputy Admin.\n");
			printf("\033[0m");
			ChangeLevel();
			break;
		}
		case 2:{
			ViewAccounts();
			break;
		}
		case 3:{
			ViewAccounts();
			SearchUser();
			break;
		}
		case 0:{
		    char a;
                        int count = 3 , choice;
                        do{
                        printf("\nDo you want to exit? (1 for Yes, 0 for No): ");
                        scanf("%d", &choice);
                        scanf("%c",&a);
                        fflush(stdin);
                        if(a != 10 || choice <0 || choice > 1 ){
                            printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
                        }
                        }while(a != 10 ||  choice <0 || choice > 1 );
                        if (choice ){
                            printf("\nExiting program");
                            while(count > 0){
                            printf(".");
                            Sleep(500);
                            count--;
                            }
                            system("cls");
                            return;
                        }
                        break;
        }
    }
	}
}
void Screen(int*exit ){
	LoadAccount();
	int count =3;
	int option;
	char a;
		printf("+---------------------------STUDENT MANAGEMENT APP --------------------------+\n");
		printf("|                                                                            |\n");
		printf("|    1. LOGIN	   2. REGISTER     3. FORGET YOUR PASSWORD?	   4. EXIT   |\n");
        printf("|                                                                            |\n");
		printf("+----------------------------------------------------------------------------+");
		do{
		printf("\nChoose: ");
		scanf("%d", &option);
		scanf("%c",&a);
		fflush(stdin);
		if(a != 10){
            printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
		}
		}while(a != 10);
		switch(option){
			case 1:{
				login(&count);
				break;
			}
			case 2:{
				Register();
				SaveAccount();
				int choice;
				char a;
				do{
				printf("\nPress 1 to Login or Press 2 to Return.\n");
				printf("\nChoice: ");
				scanf("%d",&choice);
				scanf("%c",&a);
                fflush(stdin);
                if(a != 10 || choice < 1 || choice > 2 ){
                    printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
                }
                }while(a != 10 || choice < 1 || choice > 2);
				if (choice == 1){
					system("cls");
					login(&count);
					if (count == 0){
						return *exit = 1;
					}
				}
				if (choice ==2){
					system("cls");
					Screen(&exit);
				}
				break;
			}
			case 3:{
				system("cls");
				ResetPassword();
				int choice;
				char a;
				do{
				printf("\nPress 1 to Login or Press 2 to Return.\n");
				printf("\nChoice: ");
				scanf("%d",&choice);
				scanf("%c",&a);
                fflush(stdin);
                if(a != 10 || choice < 1 || choice > 2 ){
                    printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
                }
                }while(a != 10 || choice < 1 || choice > 2);
				if (choice == 1){
					system("cls");
					login(&count);
					if (count == 0){
						return *exit = 1;
					}
				}
				if (choice ==2){
					system("cls");
					Screen(&exit);
				}
				break;
			}
			case 4:{
			    char a;
			    int count = 3 , choice;
			    do{
                printf("Do you want to exit? (1 for Yes, 0 for No): ");
                scanf("%d", &choice);
                scanf("%c",&a);
                fflush(stdin);
                if(a != 10 || choice <0 || choice > 1 ){
                    printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
                }
                }while(a != 10 ||  choice <0 || choice > 1 );
                if (choice ){
                    printf("\nExiting program");
                    while(count > 0){
                    printf(".");
                    Sleep(500);
                    count--;
                    }
                    system("cls");
                    SomeFunction();
                    return;
                }
                break;
			}
		}
}
void Menu1(){
    int exit =0;
    printf("\e[0;33mWAITING FOR ADMIN TO ACCEPT\e[0;37m");
    Sleep(1000);
    printf("\n");
    Screen(&exit);
}
void Menu2(){
    int exit = 0, numStudents = 0;
    Student students[100];
    loadStudents(students, &numStudents, "students.txt");
    if (numStudents > 0) {
        printStudents(students, numStudents);
    } else {
        printf("\nNo students to print.\n");
    }
    while (1) {
        printf("\nPress 1 to exit: ");
        scanf("%d", &exit);

        if (exit == 1) {
            Screen(&exit);
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}
void Menu3(){
    Studentmanagement();
}
void Menu4(){
    int choose;
    char a;
    int exit = 0;;
    while(1){
				printf("\n\e[0;35m+--------------------------------DEPUTY ADMIN MENU --------------------------+\n");
				printf("|                                                                            |\n");
				printf("|        1.USERS MANAGEMENT        2.STUDENTS MANAGEMENT        3.EXIT       |\n");
                printf("|                                                                            |");
				printf("\n+----------------------------------------------------------------------------+\e[0;37m\n");
				do{
				printf("Choose: ");
				scanf("%d", &choose);
                scanf("%c",&a);
                fflush(stdin);
                if(a != 10 || choose < 1 || choose > 3){
                    printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
                }
                }while(a != 10 || choose < 1 || choose > 3);
				switch(choose){
					case 1:{
						system("cls");
						Usermanagement();
						break;
						}
					case 2:{
						system("cls");
						Studentmanagement();
						break;
					}
                    case 3:{
                        char a;
                        int count = 3 , choice;
                        do{
                        printf("Do you want to exit? (1 for Yes, 0 for No): ");
                        scanf("%d", &choice);
                        scanf("%c",&a);
                        fflush(stdin);
                        if(a != 10 || choice <0 || choice > 1 ){
                            printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
                        }
                        }while(a != 10 ||  choice <0 || choice > 1 );
                        if (choice ){
                            printf("\nExiting program");
                            while(count > 0){
                            printf(".");
                            Sleep(500);
                            count--;
                            }
                            system("cls");
                            Screen(&exit);
                        }
                        break;
                    }
                }
        }
            return 0;
}
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int validate_birth_year(int year) {
    return year >= 1900 && year <= 2006;
}
int is_valid_date(int day, int month, int year) {
    if (year < 1900 || year > 2006) return 0;
    if (month < 1 || month > 12) return 0;
    int max_days = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11) max_days = 30;
    else if (month == 2) max_days = is_leap_year(year) ? 29 : 28;
    return day >= 1 && day <= max_days;
}
int validate_phone_number(const char *number) {
    int len = strlen(number);
    if (len != 10) return 0;
    for (int i = 0; i < len; i++) {
        if (!isdigit(number[i])) return 0;
    }
    return 1;
}
int validate_gmail(const char *email) {
    int len = strlen(email);
    if (len < 11 || strcmp(email + len - 10, "@gmail.com") != 0) return 0;
    return 1;
}
void add_student(Student students[], int *count) {
    Student new_student;
    printf("Enter student name (0 to cancel): ");
    fgets(new_student.name, MAX_STRING_LENGTH, stdin);
    new_student.name[strcspn(new_student.name, "\n")] = 0;

    if (strcmp(new_student.name, "0") == 0) {
        printf("Operation canceled.\n");
        return;
    }

    do {
        printf("Enter birth year (1900-2006, 0 to cancel): ");
        scanf("%d", &new_student.birth_year);
        clear_input_buffer();

        if (new_student.birth_year == 0) {
            printf("Operation canceled.\n");
            return;
        }
    } while (!validate_birth_year(new_student.birth_year));

    int day, month;
    do {
        printf("Enter birth date (DD MM, 0 0 to cancel): ");
        scanf("%d %d", &day, &month);
        clear_input_buffer();

        if (day == 0 && month == 0) {
            printf("Operation canceled.\n");
            return;
        }
    } while (!is_valid_date(day, month, new_student.birth_year));

    printf("Enter gender (male/female, 0 to cancel): ");
    fgets(new_student.gender, MAX_STRING_LENGTH, stdin);
    new_student.gender[strcspn(new_student.gender, "\n")] = 0;

    if (strcmp(new_student.gender, "0") == 0) {
        printf("Operation canceled.\n");
        return;
    }

    printf("Enter student ID (0 to cancel): ");
    fgets(new_student.student_id, MAX_STRING_LENGTH, stdin);
    new_student.student_id[strcspn(new_student.student_id, "\n")] = 0;

    if (strcmp(new_student.student_id, "0") == 0) {
        printf("Operation canceled.\n");
        return;
    }

    do {
        printf("Enter phone number (10 digits, 0 to cancel): ");
        fgets(new_student.phone_number, MAX_STRING_LENGTH, stdin);
        new_student.phone_number[strcspn(new_student.phone_number, "\n")] = 0;

        if (strcmp(new_student.phone_number, "0") == 0) {
            printf("Operation canceled.\n");
            return;
        }
    } while (!validate_phone_number(new_student.phone_number));

    printf("Enter CCCD (0 to cancel): ");
    fgets(new_student.cccd, MAX_STRING_LENGTH, stdin);
    new_student.cccd[strcspn(new_student.cccd, "\n")] = 0;

    if (strcmp(new_student.cccd, "0") == 0) {
        printf("Operation canceled.\n");
        return;
    }

    printf("Enter address (0 to cancel): ");
    fgets(new_student.address, MAX_STRING_LENGTH, stdin);
    new_student.address[strcspn(new_student.address, "\n")] = 0;

    if (strcmp(new_student.address, "0") == 0) {
        printf("Operation canceled.\n");
        return;
    }

    do {
        printf("Enter gmail address (0 to cancel): ");
        fgets(new_student.gmail, MAX_STRING_LENGTH, stdin);
        new_student.gmail[strcspn(new_student.gmail, "\n")] = 0;

        if (strcmp(new_student.gmail, "0") == 0) {
            printf("Operation canceled.\n");
            return;
        }
    } while (!validate_gmail(new_student.gmail));

    students[*count] = new_student;
    (*count)++;
    printf("Student added successfully.\n");
}
void display_all_students(Student students[], int count) {
    if (count == 0) {
        printf("No students registered yet.\n");
        return;
    }
    printf("List of all students:\n");
    printf("Name\tBirth Year\tGender\tStudent ID\tPhone Number\tCCCD\tAddress\tGmail\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t%d\t%s\t%s\t%s\t%s\t%s\t%s\n",
               students[i].name, students[i].birth_year, students[i].gender,
               students[i].student_id, students[i].phone_number, students[i].cccd,
               students[i].address, students[i].gmail);
    }
}
void save_to_file(Student students[], int count, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s;%d;%s;%s;%s;%s;%s;%s\n",
               students[i].name, students[i].birth_year, students[i].gender,
               students[i].student_id, students[i].phone_number, students[i].cccd,
               students[i].address, students[i].gmail);
    }

    fclose(file);
    printf("Students saved to file successfully.\n");
}
void load_from_file(Student students[], int *count, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file.\n");
        return;
    }

    *count = 0;
    while (*count < MAX_STUDENTS && fscanf(file, "%[^;];%d;%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",
                                            students[*count].name, &students[*count].birth_year,
                                            students[*count].gender, students[*count].student_id,
                                            students[*count].phone_number, students[*count].cccd,
                                            students[*count].address, students[*count].gmail) == 8) {
        (*count)++;
    }

    fclose(file);
    printf("Students loaded from file successfully.\n");
}
void delete_students(Student students[], int *count, const char *indexes) {
    if (strcmp(indexes, "0") == 0) {
        printf("Operation canceled.\n");
        return;
    }

    char *token = strtok(indexes, ",");
    while (token != NULL) {
        int index = atoi(token) - 1;
        if (index >= 0 && index < *count) {
            for (int i = index; i < *count - 1; i++) {
                students[i] = students[i + 1];
            }
            (*count)--;
        }
        token = strtok(NULL, ",");
    }
    printf("Selected students deleted successfully.\n");
}
void sort_by_last_character(Student students[], int count) {
    int swapped;
    for (int i = 0; i < count - 1; i++) {
        swapped = 0;
        for (int j = 0; j < count - i - 1; j++) {
            int len1 = strlen(students[j].name);
            int len2 = strlen(students[j + 1].name);
            if (len1 > 0 && len2 > 0 && students[j].name[len1 - 1] > students[j + 1].name[len2 - 1]) {
                swap(&students[j], &students[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
void Studentmanagement() {
    int choose;
    char a;
    char filename[] = "students.txt";
    Student students[MAX_STUDENTS];
    int numStudents = 0;

    while (1) {
        printf("\n  +---------Student Management System----------+\n");
        printf("  |1. Add Student                              |\n");
        printf("  |2. Delete Student                           |\n");
        printf("  |3. Print Students                           |\n");
        printf("  |4. Sort Students by Name                    |\n");
        printf("  |5. Save                                     |\n");
        printf("  |6. Exit                                     |\n");
        printf("  +--------------------------------------------+\n");

        do {
            printf("Choose: ");
            scanf("%d", &choose);
            scanf("%c", &a);
            fflush(stdin);
            if (a != 10 || choose < 1 || choose > 6) {
                printf("\n\e[0;31mINVALID CHOICE!\e[0;37m");
            }
        } while (a != 10 || choose < 1 || choose > 6);

        switch (choose) {
            case 1:
                inputStudent(students, &numStudents);
                break;
            case 2:
                if (numStudents > 0) {
                    printStudents(students, numStudents);
                    int index;
                    do {
                        printf("\nEnter index of student to delete: ");
                        scanf("%d", &index);
                        scanf("%c", &a);
                        fflush(stdin);
                        if (a != '\n') {
                            printf("\n\e[0;31mINVALID CHOICE!\e[0;37m");
                        }
                    } while (a != '\n');
                    deleteStudent(students, &numStudents, index - 1);
                } else {
                    printf("\nNo students to delete.\n");
                }
                break;
            case 3:
                if (numStudents > 0) {
                    printStudents(students, numStudents);
                } else {
                    printf("\nNo students to print.\n");
                }
                break;
            case 4:
                if (numStudents > 0) {
                    sortStudentsByName(students, numStudents);
                    printf("\nStudents sorted by name.\n");
                } else {
                    printf("\nNo students to sort.\n");
                }
                break;
            case 5:
                saveStudents(students, numStudents, filename);
                printf("\nStudents saved to file.\n");
                break;
            case 6:
                do {
                        printf("\nDo you want to save changes before exiting? (1 for Yes, 0 for No): ");
                        scanf("%d", &choose);
                        scanf("%c", &a);
                        fflush(stdin);
                        if (a != '\n' || choose < 0 || choose > 1) {
                            printf("\n\e[0;31mINVALID CHOICE!\e[0;37m");
                        }
                    } while (a != '\n' || choose < 0 || choose > 1);

                    if (choose == 1) {
                        printf("\nSaving changes...");
                        saveStudents(students, numStudents, filename);
                    } else {
                        printf("\nExiting without saving changes...");
                    }

                    printf("\nExiting program");
                    for (int ccount = 3; ccount > 0; ccount--) {
                        printf(".");
                        Sleep(500);
                    }
                    system("cls");
                    return;
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }
}
void SomeFunction() {
    exit(0);
}
void AllMenu(){
    int choose;
    char a;
    if (loggedin != -1 && users[loggedin].AccessLevel == 5) {
                while (1) {
                    printf("\n\e[0;36m+-------------------------------- ADMIN MENU --------------------------------+\n");
                    printf("|                                                                            |\n");
                    printf("|        1.USERS MANAGEMENT        2.STUDENTS MANAGEMENT        3.EXIT       |\n");
                    printf("|                                                                            |\n");
                    printf("+----------------------------------------------------------------------------+\e[0;37m\n");
                    do {
                        printf("Choose: ");
                        scanf("%d", &choose);
                        scanf("%c", &a);
                        fflush(stdin);
                        if (a != 10 || choose < 1 || choose > 3) {
                            printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
                        }
                    } while (a != 10 || choose < 1 || choose > 3);
                    switch (choose) {
                        case 1: {
                            system("cls");
                            Usermanagement();
                            break;
                        }
                        case 2: {
                            system("cls");
                            Studentmanagement();
                            break;
                        }
                        case 3: {
                            char a;
                            int count = 3, choice;
                            do {
                                printf("\nDo you want to exit? (1 for Yes, 0 for No): ");
                                scanf("%d", &choice);
                                scanf("%c", &a);
                                fflush(stdin);
                                if (a != 10 || choice < 0 || choice > 1) {
                                    printf("\n\e[0;31mUNVALID CHOICE!\e[0;37m");
                                }
                            } while (a != 10 || choice < 0 || choice > 1);
                            if (choice) {
                                printf("\nExiting program");
                                while (count > 0) {
                                    printf(".");
                                    Sleep(500);
                                    count--;
                                }
                                system("cls");
                                return main(); // Thoát khỏi vòng lặp để restart từ đầu
                            }
                            break;
                        }
                    }
                }
            } else if (loggedin != -1 && users[loggedin].AccessLevel == 1) {
                Menu1();
            } else if (loggedin != -1 && users[loggedin].AccessLevel == 2) {
                Menu2();
            } else if (loggedin != -1 && users[loggedin].AccessLevel == 3) {
                Menu3();
            } else if (loggedin != -1 && users[loggedin].AccessLevel == 4) {
                Menu4();
            }
}
    int len = strlen(email);
    if (len < 11 || strcmp(email + len - 10, "@gmail.com") != 0) return false;
    return true;
}
