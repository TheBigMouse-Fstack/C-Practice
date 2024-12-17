#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX = 100;
void showMenu(void);
void addStudent(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int* size);
void printStudentList(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int size);
int findPosById(char id[][MAX], int size, char key[]);
void printStudent(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int pos);
void removeStudentByPos(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int* size, int pos);
void orderByFNameAsc(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int size);
void printStudentHighestGpa(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int size);

int main()
{
    //init type
    char id[MAX][10];
    char fName[MAX][30];
    char lName[MAX][30];
    int yob[MAX];
    float gpa[MAX];
    int size = 0;
    int choice;
    char buffer;
    //process
    do{
        showMenu();
        do{
            printf("\nPlease input your choice integer: ");
            scanf("%d", &choice);
            scanf("%c", &buffer);
            fflush(stdin);
            if(buffer != 10){
                printf("\nDo Ku know input an integer number???");
            }
        }while(buffer != 10);
        //choice processing
        switch(choice){
        //switch: theo doi gia tri cua choice
            case 1:{//khong viet dieu kien gia tri duoc --> khong the thay the if else
                system("cls");//xoa man hinh
                printf("\nAdd new student information");
                addStudent(id, fName, lName, yob, gpa, &size);
                break;//neu khong co break thi se bi troi xuong duoi
            }
            case 2:{
                system("cls");
                printf("\nSearch student information by id");
                char key[MAX];
                printf("\nId: ");
                gets(key);//nhap id can tim di
                int pos = findPosById(id, size, key);//tim
                if(pos == -1){
                    printf("\nStudent doesn't exist");
                }else{
                    printStudent(id, fName, lName, yob, gpa, pos);
                }
                break;
            }
            case 3:{
                system("cls");
                printf("\nDetele student information by id");
                char key[MAX];
                printf("\nId: ");
                gets(key);//nhap id can tim di
                int pos = findPosById(id, size, key);//tim
                if(pos == -1){
                    printf("\nStudent doesn't exist");
                }else{
                    printf("\nDeleted successfully");
                    printStudent(id, fName, lName, yob, gpa, pos);
                    removeStudentByPos(id, fName, lName, yob, gpa, &size, pos);
                }
                break;
            }
            case 4:{
                system("cls");
                printf("\nPrint highest gpa student list");
                printStudentHighestGpa(id, fName, lName, yob, gpa, size);
                break;
            }
            case 5:{
                system("cls");//xoa man hinh
                printf("\nPrint student information list");
                printStudentList(id, fName, lName, yob, gpa, size);
                break;
            }
            case 6:{
                system("cls");
                printf("\nSort student order by Fname ascending");
                orderByFNameAsc(id, fName, lName, yob, gpa, size);
                break;
            }
            case 7:{
                printf("\nNice to meet you, see you again <3");
                break;
            }
            default:{
                printf("\nThis choice is required between 1 and 7!!!");
                break;
            }
        }
    }while(choice != 7);
    return 0;
}
void orderByFNameAsc(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(strcmp(fName[i], fName[j]) == 1){
                //swap id
                char strTmp[MAX];
                strcpy(strTmp, id[i]);
                strcpy(id[i], id[j]);
                strcpy(id[j], strTmp);
                //swap fName
                strcpy(strTmp, fName[i]);
                strcpy(fName[i], fName[j]);
                strcpy(fName[j], strTmp);
                //swap lName
                strcpy(strTmp, lName[i]);
                strcpy(lName[i], lName[j]);
                strcpy(lName[j], strTmp);
                //swap yob
                int tmp = yob[i];
                yob[i] = yob[j];
                yob[j] = tmp;
                //swap gpa
                float gpaTmp = gpa[i];
                gpa[i] = gpa[j];
                gpa[j] = gpaTmp;
            }
        }
    }
}
void printStudentHighestGpa(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int size){
    if(size == 0){
        printf("\nNothing to print");
    }else{
        //tìm điểm cao nhất
        float max = gpa[0];
        for(int i = 0; i <= size - 1; i++){
            max = gpa[i] >= max ? gpa[i] : max;
        }
        printf("\n|%-10s|%-15s|%-15s|%-4s|%-5s|",
          "ID", "FNAME", "LNAME", "YOB", "GPA");
        for(int i = 0; i <= size - 1; i++){
            if(gpa[i] == max){
                printf("\n|%-10s|%-15s|%-15s|%4d|%5.2f|",
                id[i], fName[i], lName[i], yob[i], gpa[i]);
            }
        }
    }
}

void removeStudentByPos(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int* size, int pos){
    for(int i = pos; i <= *size - 1; i++){
        strcpy(id[i], id[i + 1]);
        strcpy(fName[i], fName[i + 1]);
        strcpy(lName[i], lName[i + 1]);
        yob[i] = yob[i + 1];
        gpa[i] = gpa[i + 1];
    }
    (*size)--;
}

void printStudent(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int pos){
    printf("\n|%-10s|%-15s|%-15s|%-4s|%-5s|",
          "ID", "FNAME", "LNAME", "YOB", "GPA");

    printf("\n|%-10s|%-15s|%-15s|%4d|%5.2f|",
    id[pos], fName[pos], lName[pos], yob[pos], gpa[pos]);
}

int findPosById(char id[][MAX], int size, char key[]){
    for(int i = 0; i <= size - 1; i++){
        if(strcmp(id[i], key) == 0) return i;
    }
    return -1;
}
void printStudentList(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int size){
    if(size == 0){
        printf("\nNothing to print");
    }else{
        printf("\n|%-10s|%-15s|%-15s|%-4s|%-5s|",
          "ID", "FNAME", "LNAME", "YOB", "GPA");
        for(int i = 0; i <= size - 1; i++){
            printf("\n|%-10s|%-15s|%-15s|%4d|%5.2f|",
          id[i], fName[i], lName[i], yob[i], gpa[i]);
        }
    }
}

void addStudent(char id[][MAX], char fName[][MAX], char lName[][MAX], int yob[], float gpa[], int* size){
    int isFind;
    do{
        char key[MAX];
        printf("\nId: ");
        gets(key);//Nhap ma id ma ban muon them
        isFind = findPosById(id, *size, key);
        if(isFind != -1){
            printf("\nThis id has been used");
        }else{
            strcpy(id[*size], key);
        }
    }while(isFind != -1);

    printf("\nfName: ");
    gets(fName[*size]);
    fflush(stdin);

    printf("\nlName: ");
    gets(lName[*size]);
    fflush(stdin);

    printf("\nYob: ");
    scanf("%d", &yob[*size]);
    fflush(stdin);

    printf("\nGpa: ");
    scanf("%f", &gpa[*size]);
    fflush(stdin);
    (*size)++;
    printf("\nAdding sucessfully!");
}
void showMenu(void){
    printf("\nStudent management application");
    printf("\n1. Add new student");
    printf("\n2. Search student information by id");
    printf("\n3. Delete student information by id");
    printf("\n4. Print highest gpa student list");
    printf("\n5. Print student list");
    printf("\n6. Sort student list order by firstName ascending");
    printf("\n7. Quit");
}

//50-studentManagement
//CMS
//viết 1 chương trình menu
//nhiệm vụ quản lý sinh viên
//1 sinh viên được mô tả bằng các thuộc tính
//id, firstName, lastName, yob, gpa
//Menu gồm các chức năng sau
//1.thêm sinh viên vào danh sách
//2.tìm kiếm sinh viên dựa trên id
//3.xóa sinh viên khỏi danh sách theo id
//4.xuất ra danh sách sinh viên đạt điểm cao nhất
//5.in ra danh sách sinh viên
//6.sort theo firstName asc
//7.quit
//mô tả chương trình:
//người dùng nhập số để chương trình phục vụ các chức năng
//nếu người dùng nhập sai số => chửi
//người dùng nhập đúng số, làm chức năng
//quay lại menu ép nhập tiếp
//nhập sai số nguyên => chửi
//nhập số 7 thì thoát
//nhập sinh viên mới mà id trùng với sinh viên có trong danh sách
//thì => chửi
