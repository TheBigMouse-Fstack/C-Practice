#include <stdio.h>
#include <stdlib.h>
#include <math.n>
/*


1. Convert binary numbers to decimal
2. Convert decimal numbers to binary
3. Create a Multiplication Table from 1 to 9
4. Count the Number of Digits in an Integer.
5. Reverse an Integer.
*/

int main()
{
    printf("\n1. Convert binary numbers to decimal\n2. Convert decimal numbers to binary\n3. Create a Multiplication Table from 1 to 9\n4. Count the Number of Digits in an Integer.\n5. Reverse an Integer\n6. exit\n");
    while(1){
    int i, j, product , choice , n , test , tmp , flag , rev = 0 , count = 0 , result = 0, z;
    char a;
    do{
    printf("\nplease,choose algorithm (1 - 6): ");
    scanf("%d", &choice);
    scanf("%c", &a);
    fflush(stdin);
    if(n < 0 || a != 10){
            printf("Invalid choice!\n");
        }
    }while(n < 0 || a != 10);

    switch(choice){

    case 1:{
        while(1){
        do{
        printf("\nenter binary: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);

        // If the user enters crap, negative characters , letters or numbers will be forced to enter again
        if(n < 0 || a != 10){
            printf("wrong, please check again");
        }else{ // Forced to re-enter if not binary
            test = n;
            while(test > 0){
                tmp = test % 10;
                test = test / 10;
                if( tmp == 1){
                    rev = rev * 10 + tmp;
                    flag = 1;

                }else if( tmp == 0){
                    rev = rev * 10 + tmp;
                    flag = 1;
                }else{
                    printf("wrong, pleae check again!");
                    flag = 0;
                    break;
                }
            }
        }
        }while( n < 0 || a != 10 || flag == 0);

        // algorithm for changing binary numbers to decimal
        int result = 0;
        count = 0;
        while( n > 0){
            int buffer = n % 10;
            n = n / 10;
            result += buffer * pow(2,count);
            count++;
        }

        // output
        printf("decimal numbers is: %d \n", result);
        do{
        printf("\nDo you want to continute?\n1 = yes \n2 = no \nyour answer: ");
        scanf("%d", &z);
        fflush(stdin);
        if( z == 1){

        }else if(z == 2){
            return main();
        }else{
            printf("\nInvalid choice!\n");
        }
        }while( z != 1 );
    }
    }break;
    case 2:{
        while(1){
        do{
            printf("\nenter decimal: ");
            scanf("%d", &n);
            scanf("%c", &a);
            fflush(stdin);
            // If the user enters crap, negative characters , letters or numbers will be forced to enter again
            if( n < 0 || a != 10){
                printf("wrong, please check again!");
            }
        }while( n < 0 || a != 10);

        // algorithm for changing decimal numbers to binary
        result = 0;
        while(n > 0){
            int tmp = n % 2;
            n = n / 2;
            result = result * 10 + tmp;
        }

        //Output
        printf("binary number: %d\n", result);
        do{
        printf("\nDo you want to continute?\n1 = yes \n2 = no \nyour answer: ");
        scanf("%d", &z);
        fflush(stdin);
        if( z == 1){

        }else if(z == 2){
            return main();
        }else{
            printf("\nInvalid choice!\n");
        }
        }while( z != 1 );
    }
    }break;
    case 3:{
       printf("\n             Multiplication Table\n\n");

       for (i = 1; i <= 9; i++) {
           printf("   |", i);

           for (j = 1; j <= 9; j++) {
               product = i * j;
               printf("%4d", product);
           }
           printf("   |\n");
       }
        break;
    }
    case 4:{
        while(1){
        count = 0;
        do{
        printf("\nenter number: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);

    // If the user enters crap, negative characters , letters or numbers will be forced to enter again
        if(n < 0 || a != 10){
            printf("wrong, please check again");
        }
    }while(n < 0 || a != 10);

    //process
    while( n > 0){
        int tmp = n % 10;
        n = n / 10;
        count ++;
    }

    //Output
    printf("there is %d numbers\n", count);
    do{
        printf("\nDo you want to continute?\n1 = yes \n2 = no \nyour answer: ");
        scanf("%d", &z);
        fflush(stdin);
        if( z == 1){

        }else if(z == 2){
            return main();
        }else{
            printf("\nInvalid choice!\n");
        }
        }while( z != 1 );
        }
    } break;
    case 5:{
        while(1){
        do{
        printf("\nenter number: ");
        scanf("%d", &n);
        scanf("%c", &a);
        fflush(stdin);

        // If the user enters crap, negative characters , letters or numbers will be forced to enter again
        if(n<0 || a != 10){
            printf("wrong, please check again");
        }
    }while(n<10 || a != 10);

    //process
    int rev = 0;
    while(n > 0){
        int tmp = n % 10;
        n = n / 10;
        rev = rev * 10 + tmp;
    }

    //Output
    printf("The reverse: %d\n", rev);
    do{
        printf("\nDo you want to continute?\n1 = yes \n2 = no \nyour answer: ");
        scanf("%d", &z);
        fflush(stdin);
        if( z == 1){

        }else if(z == 2){
            return main();
        }else{
            printf("\nInvalid choice!\n");
        }
        }while( z != 1 );
        }
    break;
    }
    case 6:{
        printf("\nThank you for using\n");
        while(1){
        printf("\nAre you sure about that????\n1 = yes \n2 = no \nyour answer: ");
        scanf("%d", &z);
        fflush(stdin);
        if( z == 1){
            return 0;
        }else if(z == 2){
            return main();
        }else{
            printf("\nInvalid choice!\n");
        }
        }
    }
    default:
        printf("Invalid choice!\n");
        }
    }
}
