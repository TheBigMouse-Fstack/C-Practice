#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>

#define MaxStudent 100
#define MaxUser 50

typedef struct {
    char user[25];
    char pass[25];
    int AccessLevel;
} Login;

Login users[MaxUser] = {
    {"HoangTung", "adminpass", 2},
    {"user", "userpass", 1}
};

int numUsers = 2;
int loggedin = -1;

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

	printf("\033[1;31m");
	printf("\nAll the accounts have been saved successfully.\n");
	printf("\033[0m");
}

int login(int *count) {
    int error = 1;
    do {
        char username[25], password[25];
        printf("\nLogin Screen\n\n");
        printf("Username: ");
        scanf("%s", username);

        printf("\nPassword: ");

        // Use getch() to read password characters without echoing
        int i = 0;
        char ch;
        while (1) {
            ch = getch();
            if (ch == '\r') {  // If Enter is pressed, terminate loop
                password[i] = '\0';  // Null-terminate the password string
                break;
            } else if (ch == '\b') {  // If Backspace is pressed, remove the last character
                if (i > 0) {
                    printf("\b \b");  // Erase the character from the screen
                    i--;
                }
            } else {  // Otherwise, add the character to the password string
                // Display the current character briefly before replacing it with an asterisk
                printf("*");
                password[i++] = ch;
            }
        }

        i=0;
        for (i = 0; i < numUsers; ++i) {
            if (strcmp(username, users[i].user) == 0 && strcmp(password, users[i].pass) == 0) {
            	printf("\033[1;31m");
                printf("\nLogin Succesfully with Access Level: %d\n", users[i].AccessLevel);
                printf("\033[0m");
                error = 0;
                loggedin = i;
                return;
            }
        }

        if(error !=0){

	        printf("\033[1;31m");
	        printf("\nIncorrect Username or Password, Please enter again\n");
	        printf("\nAttempt: %d\n", *count);
	        printf("\033[0m");
	        *count-=1;

	        if(*count == 0){
	        	printf("Do you want to reset your password?\n1. Yes\n2. Do not have an account? Press 2 to Create.\nOption:\n");
		        int choice;
				scanf("%d", &choice);
				if (choice ==1){
					system("cls");
					printf("Enter your username to reset your password: \n");
					scanf("%s", username);
					for (i=0; i<numUsers; i++){
						if (strcmp(username, users[i].user)== 0){
							printf("Enter you new password: \n");
							scanf("%s", users[i].pass);
							printf("\033[1;31m");
							printf("Your password has been reset successfully.\n");
							printf("\033[0m");
							SaveAccount();
						}
					}
				}
				if (choice == 2){
					system("cls");
					printf("\033[1;31m");
					printf("\nEnter 2 to Create an Account.\n");
					printf("\033[0m");
				}
			}
			if(*count <1 ){
				break;
				return *count;
			}
		}
	    error = 1;
    } while (error != 0);
}

void LoadAccount(){
	FILE *af;
	af= fopen("Account.txt", "r");

	if (af == NULL){
		printf("\033[1;31m");
		printf("\nThere are no data or File has been opened unsuccessfully.\n");
		printf("\033[0m");
		return;
	}

	numUsers = 0;
	while (fscanf(af, "%s %s %d \n", users[numUsers].user, users[numUsers].pass, &users[numUsers].AccessLevel) == 3) {
        numUsers++;
	}

	fclose(af);
}

void ResetPassword(){
	int i;
	char username[25], password[25];
	printf("Enter your username to reset your password: \n");
	scanf("%s", username);
	for (i=0; i<numUsers; i++){
		if (strcmp(username, users[i].user)== 0){
			printf("Enter you new password: \n");
			scanf("%s", users[i].pass);
			printf("\033[1;31m");
			printf("Your password has been reset successfully.\n");
			printf("\033[0m");
		}
	}
	SaveAccount();
}

int Security(const char *password, int *flag){
	int length= strlen(password);
	int hasLower = 0, hasUpper = 0, hasNumber=0, hasSpecial = 0;

	int i;
	for(i=0; i< length; i++){
		if(islower(password[i])){
			hasLower = 1;
		}else if(isupper(password[i])){
			hasUpper = 1;
		}else if(isdigit(password[i])){
			hasNumber = 1;
		}else if(!isalnum(password[i])){
			hasSpecial = 1;
		}
	}
	if(length < 8 ){
		printf("\033[1;31m");
		printf("\nYour password must contain at least 8 charaters.\n");
		printf("\033[0m");
		*flag =0;
	}
	else if ( length >=8 && hasLower && hasUpper && hasNumber && hasSpecial) {
		printf("\033[1;31m");
	    printf("\nYour password is high secured.\n");
	    printf("\033[0m");
	    *flag =1;
	}else{
		printf("\033[1;31m");
		printf("\nYour password is not strong enough, please try another password.\n");
		printf("\033[0m");
		*flag =0;
	}
	return *flag;
}

void Register() {
    if (numUsers >= MaxUser) {
        printf("Danh sach nguoi dung da day, khong the them nguoi dung moi.\n");
        return;
    }
	char username[25], password[25];
    printf("\nWelcome to Register screen\n ");
    printf("Username: \n");
    scanf("%s", username);

    int flag =0;

    while (flag !=1 ) {
        printf("Password: \n");
        scanf("%s", password);
        Security(password, &flag);
    }

	int exist = 0; // Bi?n ki?m tra xem t n ng ?i d ng  ? t?n t?i hay ch a
    int j;
    for (j = 0; j < numUsers; j++) {
        if (strcmp(username, users[j].user) == 0) {
            exist = 1;
            break;
        }
    }

    if (exist) { // N?u t n ng ?i d ng  ? t?n t?i
    	printf("\033[1;31m");
        printf("\nThe username you entered has already existed.\nPlease try again.\n");
        printf("\033[0m");
        Register();
    } else {
    	strcpy(users[numUsers].user, username);
		strcpy(users[numUsers].pass, password);
    	users[numUsers].AccessLevel = 1;
    	numUsers++;

        printf("\033[1;31m");
        printf("\nYour account has been added successfully.\n");
        printf("\033[0m");

    }
}

void ListUser(){
	int i;
	printf("\nUser List:\n");
    printf("------------\n");
    printf("\n%-10s %-15s %-15s %-10s\n","Num" ,"Username", "Password", "Access Level");
    printf("--------------------------------------------------------\n");
    for ( i = 0; i < numUsers; i++) {
        printf("\n%-10d  %-15s  %-15s    %-10d\n",i+1, users[i].user, users[i].pass, users[i].AccessLevel);
    }
}

void SearchUser(){
	char username[25];
	printf("\033[1;31m");
	printf("\nAccess Level 1: Guest (viewing only).\nAccess Level 2: Admin (fully access).\n");
	printf("\033[0m");

    printf("Type in the username:");
    scanf("%s",username);
    fflush(stdin);

    int newLevel;
    int i;
    int flag = 0;
	for (i = 0; i < numUsers; ++i) {
        if (strcmp(username, users[i].user) == 0) {
        	flag=1;
            int j;
            for (j=i; j< numUsers;j++){
            	strcpy(users[j+1].user, users[j].user);
			}
			numUsers-=1;
			printf("\033[1;31m");
			printf("This user has been removed succesfully.");
			printf("\033[0m");
			break;
		}
    }
    if (flag!=1){
    	printf("\033[1;31m");
		printf("User '%s' not found.\n", username);
		printf("\033[0m");
	}

	SaveAccount();
}

void ChangeLevel(){
    char username[25];
    int newLevel;
    printf("\nEnter the username whose Access Level you want to change: ");
    scanf("%s", username);
    fflush(stdin);

    int i;
    int flag = 0;
    for (i = 0; i < numUsers; ++i) {
        if (strcmp(username, users[i].user) == 0) {
        	flag=1;
            printf("Enter the new Access Level for user ( %s ): ", username);
            scanf("%d", &newLevel);

            if (newLevel >= 1 && newLevel <= 3) {
                users[i].AccessLevel = newLevel;
                printf("\033[1;31m");
                printf("Access Level for user ( %s ) has been changed successfully.\n", username);
                printf("\033[0m");
            } else {
                printf("\033[1;31m");
                printf("Invalid Access Level. Access Level should be between 1 and 4.\n");
                printf("\033[0m");
            }
			break;
		}
    }
    if (flag!=1){
    	printf("\033[1;31m");
		printf("User '%s' not found.\n", username);
		printf("\033[0m");
	}

	SaveAccount();

}

void ChangeAL(){
	int choose;
	char var;
	printf("\n----------------------------------------------------------------------\n");
	printf("\n 1. Change Access Level     2. Delete User   3. Exit to Main Menu \n");
	printf("\n----------------------------------------------------------------------\n");
	printf("Choose (1-3): \n");
	scanf("%d", &choose);
	scanf("%c", &var);
	fflush(stdin);
	if(choose <1 || choose >3 || var!=10){
		printf("\nInvalid number, please enter again in (1-3).\n");
		printf("\n----------------------------------------------------------------------\n");
		printf("\n 1. Change Access Level     2. Delete User   3. Exit to Main Menu \n");
		printf("\n----------------------------------------------------------------------\n");
		printf("Choose (1-3): \n");
		scanf("%d", &choose);
		scanf("%c", &var);
		fflush(stdin);
	}

	switch(choose){
		case 1:{
			ListUser();
			printf("\e[0;33m");
			printf("\nAccess Level 1: Guest (viewing only).\nAccess Level 2: Admin (fully access).\nAccess Level 3: Editor (Add, Delete, Sort Students).\nAccess Level 4: Add and Remove Students.\n");
			printf("\033[0m");
			ChangeLevel();
			break;
		}
		case 2:{
			ListUser();
			SearchUser();
			break;
		}
		case 3:{
			break;
		}
	}
}

//----------------------------------------------//

int LoginScreen( int *exit ){

	LoadAccount();
	int count =3;
	char var;
	int option;
	while(option<1 || option >4 || var!=10){
		printf("\n--------------------------------------- LOG IN SCREEN -------------------------------------------\n");
		printf("\n1. Login		2. Register		3. Forgot your password?		4. Exit\n");
		printf("\n-------------------------------------------------------------------------------------------------\n");
		printf("Choose: ");
		scanf("%d", &option);
		scanf("%c", &var);
		fflush(stdin);
		if(option<1 || option >4 || var!=10){
			system("cls");
			printf("\nInvalid number, please enter again (1-4).\n");
		}
	}
		switch(option){
			case 1:{
				login(&count);
				break;
			}
			case 2:{
				Register();
				SaveAccount();
				printf("\nDo you want to Continue to Log In or Return to the Log In Screen?\n");
				printf("\nPress 1 to Continue or Press 2 to Return.\n");
				int choice;
				scanf("%d",&choice);
				if (choice == 1){
					system("cls");
					login(&count);
					if (count == 0){
						return *exit = 1;
					}
				}
				if (choice ==2){
					system("cls");
					LoginScreen(exit);
				}
				break;
			}
			case 3:{
				system("cls");
				ResetPassword();
				break;
			}
			case 4:{
				return *exit = 1;
				break;
			}
		}
}

int i=0;

struct StudentInfo{
		char firstName[25];
		char lastName[25];
		int ID;
		int grade;
}st[MaxStudent];


void AddStudent (){

	printf("\nAdd Students Function\n");
	getchar();
		if(i<MaxStudent){
			printf("\nStudent First Name:");
			fgets(st[i].firstName, sizeof(st[i].firstName), stdin);
        	st[i].firstName[strcspn(st[i].firstName, "\n")] = '\0';

			printf("\nStudent Last Name:");
			fgets(st[i].lastName, sizeof(st[i].lastName), stdin);
            st[i].lastName[strcspn(st[i].lastName, "\n")] = '\0';

			printf("\nStudent ID: ");
			scanf("%d", &st[i].ID);
			getchar();

			printf("\nStudent Grade: ");
			scanf("%d", &st[i].grade);
			getchar();

			int j;
			for (j=0; j<(i); j++){
				while(st[j].ID == st[i].ID){

					printf("This ID already existed. Please Enter again.\n");

					printf("\nStudent First Name:");
					fgets(st[i].firstName, sizeof(st[i].firstName), stdin);
        			st[i].firstName[strcspn(st[i].firstName, "\n")] = '\0';

					printf("\nStudent Last Name:");
					fgets(st[i].lastName, sizeof(st[i].lastName), stdin);
            		st[i].lastName[strcspn(st[i].lastName, "\n")] = '\0';

					printf("\nStudent ID: ");
					scanf("%d", &st[i].ID);
					getchar();

					printf("\nStudent Grade: ");
					scanf("%d", &st[i].grade);
					getchar();

					j=0;
				}
			}
			printf("\033[1;31m");
			printf("\nThis student have been added successfully.\n");
			printf("\033[0m");
			i++;
		}else{
			printf("The Students List is full\n");
		}
}

void ListStudent(){
	printf("Student List\n");
	printf("\n-----------------\n");
	printf("%-10s %-15s %-15s %-10s %-10s\n", "No.", "First Name","Last Name", "ID", "Grade");
	printf("\n---------------------\n");
	int j;
	for (j=0; j<i; j++){
		printf("%-10d %-15s %-15s %-10d %-10d\n",j+1, st[i].firstName, st[i].lastName, st[i].ID, st[i].grade);
	}
}

void DeleteStudent(){
	int dele;
	printf("\nWhich student do you want to DELETE?");
	int j;
	for (j=0; j<i; j++){
		printf("\nStudent Number: %d",j+1);
		printf("\nStudent First Name: %s", st[j].firstName);
		printf("\nStudent Last Name: %s", st[j].lastName);
		printf("\nStudent ID: %d", st[j].ID);
		printf("\nStudent Grade: %d\n",st[j].grade);
	}
	printf("\nDELETE Student number: ");
	scanf("%d",&dele);
	for (j=(dele-1); j<i; j++){
		st[j]=st[j+1];
	}
	i-=1;
	printf("\033[1;31m");
	printf("\nThe Student had been removed successfully\n");
	printf("\033[0m");
}

void SortStudent(){
	int j;
	int k;
	struct StudentInfo temp;
	for (j=0; j<i;j++)
		for(k=j+1;k<i;k++){
			if (st[j].ID > st[k].ID){
				temp=st[j];
				st[j] = st[k];
				st[k]=temp;
			}
	}
	ListStudent();
}

void SaveToFile(){

	FILE *sf;
	sf= fopen("studentsList.txt","w"); //Mo File

	if (sf == NULL){
		printf("\033[1;31m");
		printf("There are no data or File has been opened unsuccessfully.\n");
		printf("\033[0m");
		return;
	}

	int j;
	for (j = 0; j<i; j++){
		fprintf(sf, "%s %s %d %d\n", st[j].firstName, st[j].lastName, st[j].ID, st[j].grade);
	}

	fclose(sf);

	printf("\033[1;31m");
	printf("\nStudents info have been saved successfully.\n");
	printf("\033[0m");
}

void LoadFromFileAdmin(){
	FILE *sf;
	sf= fopen("studentsList.txt","r"); //Mo File
	if (sf==NULL){

		printf("\nThere is no data or the new file is not working.\n");
		getchar();

		printf("\e[0;32m");
		printf("\nNote: Press Enter to exit.\n");
		printf("\033[0m");

		for( i =0; i<MaxStudent; i++){
			printf("\nStudent %d\n", i+1);
			printf("\nStudent First Name: ");
			if (fgets(st[i].firstName, sizeof(st[i].firstName), stdin)==NULL|| st[i].firstName[0] == '\n'){
				break;
			}
        	st[i].firstName[strcspn(st[i].firstName, "\n")] = '\0';

			printf("\nStudent Last Name: ");
			if (fgets(st[i].lastName, sizeof(st[i].lastName), stdin)==NULL || st[i].lastName[0] == '\n'){
				break;
			}
            st[i].lastName[strcspn(st[i].lastName, "\n")] = '\0';

			printf("\nStudent ID: ");
			if (scanf("%d", &st[i].ID) != 1) {
		        break;
		    }
		    getchar();

			printf("\nStudent Grade: ");
			if (scanf("%d", &st[i].grade) != 1) {
		        break;
		    }
		    getchar();

		    SaveToFile();
		}
		return;
	}

	i=0;
	while (fscanf(sf,"%s %s %d %d\n", st[i].firstName, st[i].lastName, &st[i].ID, &st[i].grade) ==4){
		i++;
	}
	fclose(sf);
}

void LoadFromFileGuest(){
	FILE *sf;
	sf = fopen("studentsList.txt","r");

	if (sf == NULL){
		printf("Chua co du lieu hoac file mo khong thanh cong.\n");
		return;

	}
	i=0;
	while (fscanf(sf,"%s %s %d %d\n", st[i].firstName, st[i].lastName, &st[i].ID, &st[i].grade) ==4){
		i++;
	}
	fclose(sf);
}

void Menu(){
	int var;
	int choice;
	while(1){
		while (choice <1 || choice >6|| var!=10){
			printf("				  \n Choose one of the option below\n");
			printf("					 -------------------------\n");
			printf("					| 1. Add Students    	  |\n");
			printf("					| 2. List Students   	  |\n");
			printf("					| 3. Delete Students 	  |\n");
			printf("					| 4. Sort by ID	     	  |\n");
			printf("					| 5. Save to File    	  |\n");
			printf("					| 6. Exit		  |\n");
			printf("					 -------------------------\n");
			printf("					  Choosing option: ");


			scanf("%d",&choice);
			scanf("%c", &var);
			fflush(stdin);

			if (choice <1 || choice >6|| var!=10){
				system("cls");
				printf("\nInvalid number, please enter again in (1-4).\n");
			}
		}

		switch(choice){
			case 1:{
				system("cls");
				AddStudent();
				break;
			}
			case 2:{
				system("cls");
				ListStudent();
				break;
			}
			case 3:{
				system("cls");
				DeleteStudent();
				break;
			}
			case 4:{
				system("cls");
				SortStudent();
				break;
			}
			case 5:{
				system("cls");
				SaveToFile();
				break;
			}
			case 6:{
				system("cls");
				break;
				}
			default:
				printf("Invalid option\n");
		}
	}
}

void Menu4(){
	char var;
	int choice;
	while(1){
		while(choice <1 || choice >6|| var!=10){
			printf("				  \n Choose one of the option below\n");
			printf("					 -------------------------\n");
			printf("					| 1. Add Students    	  |\n");
			printf("					| 2. List Students   	  |\n");
			printf("					| 3. Delete Students 	  |\n");
			printf("					| 4. Save to File    	  |\n");
			printf("					| 5. Exit		  |\n");
			printf("					 -------------------------\n");
			printf("					  Choosing option: ");

			scanf("%d",&choice);
			scanf("%c", &var);
			fflush(stdin);

			if (choice <1 || choice >6|| var!=10){
				system("cls");
				printf("\nInvalid number, please enter again in (1-4).\n");
			}
		}

		switch(choice){
			case 1:{
				system("cls");
				AddStudent();
				break;
			}
			case 2:{
				system("cls");
				ListStudent();
				break;
			}
			case 3:{
				system("cls");
				DeleteStudent();
				break;
			}
			case 4:{
				system("cls");
				SaveToFile();
				break;
			}
			case 5:{
				system("cls");
				break;
			}
			default:
				printf("Invalid option\n");
		}
	}
}

int main(){
	while(1){

		int exit=0;
		LoginScreen(&exit);
		if ( exit==1 ){
			return 0;
		}

		int choose;
		char var;
		if (loggedin !=-1 && users[loggedin].AccessLevel==2){
			while(1){
				while(choose!=1 || choose!=2 || var!=10){
					printf("\n----------------- Main Menu ----------------------\n");
					printf("\n  1. Managing Users       2. Managing Students\n");
					printf("\n--------------------------------------------------\n");
					printf("Choose: ");
					scanf("%d", &choose);
					scanf("%c", &var);
					fflush(stdin);
					if(choose!=1 || choose!=2 || var!=10){
						system("cls");
						printf("\nInvalid number, please enter again in (1-2).\n");
					}
				}
				switch(choose){
					case 1:{
						system("cls");
						ChangeAL();
						break;
					}
					case 2:{
						system("cls");
						LoadFromFileAdmin();
						Menu();
						break;
					}
				}
			}
		}else if (loggedin !=-1 && users[loggedin].AccessLevel==1){
			LoadFromFileGuest();
			printf("\nYou are not allowed to edit the Student List.\n");
			printf("\nView Student List mode.\n");
			ListStudent();
			int press;
			printf("\nPress 1 to return to Log In Screen.\nPress 2 to Exit: ");
			scanf("%d",&press);
			if (press == 1){
				system("cls");
			}
			if (press == 2){
				return 0;
			}
		}else if(loggedin !=-1 && users[loggedin].AccessLevel==4){
			LoadFromFileGuest();
			Menu4();
			int press;
			printf("\nPress 1 to return to Log In Screen.\nPress 2 to Exit: ");
			scanf("%d",&press);
			if (press == 1){
				system("cls");
			}
			if (press == 2){
				return 0;
			}
		}else if(loggedin !=-1 && users[loggedin].AccessLevel==3){
			LoadFromFileGuest();
			Menu();
		}
	}
return 0;
}

