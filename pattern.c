#include<stdio.h>
#include<stdlib.h>
void print_space_char(int i, char c){
    if(i>=1){
        for(int j=1;j<=i;j++){
            printf("%c ", c);
        }
    }
    printf("%c",c);
}
void ascending_pattern(int n, char c){
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c",c);
        }
        printf("\n");
    }
}
void descending_pattern(int n, char c){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf("%c",c);
        }
        printf("\n");
    }
}
void ascending_reversed_pattern(int n, char c){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%c",c);
        }
        printf("\n");
    }
}
void descending_reversed_pattern(int n, char c){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=n;j>i;j--){
            printf("%c",c);
        }
        printf("\n");
    }
}
void piramid(int n, char c){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            printf(" ");
        }
        print_space_char(i,c);
        printf("\n");
    }
}
void reversed_piramid(int n, char c){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        print_space_char(n-i-1,c);
        printf("\n");
    }
}
void left_tilted_piramid(int n, char c){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        print_space_char(i,c);
        printf("\n");
    }
}
void right_tilted_piramid(int n, char c){
    for(int i=0;i<n;i++){
        for(int j=(n-i-1)*3;j>0;j--){
            printf(" ");
        }
        print_space_char(i,c);
        printf("\n");
    }
}
int main(){
    int a,b,d,n;
    n=10;
    char c='a';
    printf("\n****** VARIOUS PATTERN PRINTING ******\n");
    while(1){
        printf("\n\nPlease Enter the mentioned number for proper Pattern\n\n\n\n");
        printf("Press 1 for Ascending Pattern \t\t\t\t Press 6 for Reversed Piramid\n");
        printf("Press 2 for Descending Pattern \t\t\t\t Press 7 for Left Tilted Piramid\n");
        printf("Press 3 for Ascending Reversed Pattern \t\t\t Press 8 for Right Tilted Piramid\n");
        printf("Press 4 for Descending reversed Pattern \t\t Press 9 for changing number of rows of pattern\n");
        printf("Press 5 for Normal Piramid \t\t\t\t Press 10 for changing the character of the pattern building block\nPress 11 to exit\n");
        scanf("%d",&b);
        switch(b){
            case 1:
            ascending_pattern(n,c);
            break;
            case 2:
            descending_pattern(n,c);
            break;
            case 3:
            ascending_reversed_pattern(n,c);
            break;
            case 4:
            descending_reversed_pattern(n,c);
            break;
            case 5:
            piramid(n,c);
            break;
            case 6:
            reversed_piramid(n,c);
            break;
            case 7:
            left_tilted_piramid(n,c);
            break;
            case 8:
            right_tilted_piramid(n,c);
            break;
            case 9:
            printf("Please enter the number of rows");
            scanf("%d",&n);
            break;
            case 10:
            printf("Please enter the character to print");
            scanf(" %c",&c);
            break;
            case 11:
            exit(0);
            default:
            printf("wrong choice");
            break;

        }
    }
}