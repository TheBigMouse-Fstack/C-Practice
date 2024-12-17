#include <stdio.h>
#include <stdlib.h>
#include<string.h>
const int MAX = 100;
void showMenu(void);
void addstudent(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int*size);
void showstudent(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int size);
int findpobyid(char id[][MAX],int size,char key[]);
void removestudent(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int*size,int pos);
void showstudentbyid(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int size,int pos);
void printHigestGPAstudent(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int size);
void sortstudentorderbyname(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int size);
//CMS
//43-studentManagement
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
//6.sort theo firstName
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
int main()
{
    char id[MAX][10];
    char fname[MAX][30];
    char lname [MAX][30];
    int yob[MAX];
    float gpa [MAX];
    int size = 0;
    int choice;
    char buffer;
    do{
        showMenu();
        do{
            printf("\nPlz, intput your choice(integer): ");
            scanf("%d", &choice);
            scanf("%c", &buffer);
            fflush(stdin);
            if(buffer != 10){
            printf("\ndi ku know input a integer");
            }
        }while(buffer != 10);
        switch(choice){
            case 1:{
                system("cls");
                printf("\nadd student");
                addstudent(id,fname,lname,yob, gpa, &size);
                break;
            }
            case 2:{
                system("cls");
                printf("\nsearch strudnet information");
                char key[MAX];
                printf("\nID: ");
                gets(key);
                int pos = findpobyid(id,size,key);
                if(pos == -1){
                    printf("\nThis Student isn't exist");
                }else{
                showstudentbyid(id,fname,lname,yob, gpa,size,pos);
                }
                break;
            }
            case 3:{
                 system("cls");
                printf("\nsaerach strudnet information");
                char key[MAX];
                printf("\nID: ");
                gets(key);
                int pos = findpobyid(id,size,key);
                if(pos == -1){
                    printf("\nThis Student isn't exist");
                }else{
                showstudent(id,fname,lname,yob, gpa,size);
                }
                break;
            }
            case 4:{
                system("cls");
                printf("\nshow studentlisr");
                showstudent(id,fname,lname,yob, gpa,size);
                break;
            }
            case 5:{
                system("cls");
                printf("\nshow studentlisr");
                showstudent(id,fname,lname,yob, gpa,size);
                break;
            }
            case 6:{
                printf("\nchuc nang si 1");
                break;
            }
            case 7:{
               system("cls");
                printf("\nshow studentlisr");
                showstudent(id,fname,lname,yob, gpa,size);
                break;
            }
            default:{
                printf("this choice is required between 1 amd 7");
                break;
            }
        }
    }while(choice != 7);
    return 0;
}
void showMenu(void){
    printf("\n---Student management application---");
    printf("\n1. Add student");
    printf("\n2. Find student by id");
    printf("\n3. Delete student by id");
    printf("\n4. show student in student list who have highest score ");
    printf("\n5. show student in student list");
    printf("\n6. sort student by firsr name");
    printf("\n7 exit");
}
void addstudent(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int *size){

    int isFind;
    do{
        char key[MAX];
        printf("\nid: ");
        gets(key);

        fflush(stdin);
        printf("\n%d", *size );
        isFind = findpobyid(id, *size, key);

        if(isFind != -1){
            printf("\nThis id has been used");
        }else{
            strcpy(id[*size],key);
        }
    }while(isFind != -1);

    printf("\nFname : ");
    gets(fname[*size]);
    fflush(stdin);


    printf("\nLname: ");
    gets(lname[*size]);

       fflush(stdin);


    printf("\nyob: ")("%d",&yob[*size]);

    printf("\nGpa: ");
    scanf("%f",&gpa[*size]);

    (*size)++;
}
void showstudent(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int size){
    if ( size == 0){
        printf("\nnothing to print");
    }else{
        printf("\n|%-10s|%-15s|%-15s|%-4s|%-5s|","Id","fname","lname","yob","gpa");
        for(int i = 0  ;i<= size - 1 ; i++){
            printf("\n|%-10s|%-15s|%-15s|%4d|%l\\\5.2f|",id[i],fname[i],lname[i],yob[i],gpa[i]);
        }
    }
}
int findpobyid(char id[][MAX],int size,char key[]){
    printf("\nHello");
    for(int i = 0 ; i<=size -1;i++){
        if(strcmp(i d[i],key) == 0) return i;
    }
    return -1;
}
void showstudentbyid(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int size, int pos){
    if ( pos < 0){
        printf("\nnon find");
    }else{
        printf("\n|%-10s|%-15s|%-15s|%-4s|%-5s|","Id","fname","lname","yob","gpa");
        printf("\n|%-10s|%-15s|%-15s|%4d|%l\\\5.2f|",id[pos],fname[pos],lname[pos],yob[pos],gpa[pos]);
    }
}
void printHigestGPAstudent(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int size){
     if ( pos < 0){
        printf("\nnon find");
    }else{
        float gpamax = gpa[0];
        for(int i =0 ;i <= size - 1;i++){
            gpamax= 0;i<size -1;i++
        }
        printf("\n|%-10s|%-15s|%-15s|%-4s|%-5s|","Id","fname","lname","yob","gpa");
        printf("\n|%-10s|%-15s|%-15s|%4d|%l\\\5.2f|",id[pos],fname[pos],lname[pos],yob[pos],gpa[pos]);
    }
}
void sortstudentorderbyname(char id[][MAX], char fname[][MAX], char lname[][MAX],int yob[],float gpa[], int size){
    for(int i =-;i<= size - 2;i++){
        for(int j = i + 1;j<= size -1;i++){
            if (strcmp(fname[id[dd,fmame[j] ==1{
                       char(strvmp[syttmp,id[i];
                       strcpy(strtmpid[j]);
                       strcpy(id[i]id[j]);
                       strcpy(id[j]str);

        }
    }
}
