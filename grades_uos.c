#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int x;
int y = 0;
char s_name[30];
char m_name1[30];
char m_name2[30];
char m_name3[30];
char m_name4[30];
char m_name5[30];
int m_grade1;
int m_grade2;
int m_grade3;
int m_grade4;
int m_grade5;

while (y == 0){
    printf("Enter your name: ");
    scanf("%s", &s_name);
    printf("%s\n", s_name);

    printf("Enter a Module [1/5]: ");
    scanf("%s", &m_name1);
    printf("Grade (1 - 100) [1/5]: ");
    scanf("%d", &m_grade1);                  // remember to put & before desired variable
    printf("Module: %s Grade: %d%% \n\n", m_name1, m_grade1);

    printf("Enter a Module [2/5]: ");
    scanf("%s", &m_name2);
    printf("Grade (1 - 100) [2/5]: ");
    scanf("%d", &m_grade2);
    printf("Module: %s Grade: %d%% \n\n", m_name2, m_grade2);

    printf("Enter a Module [3/5]: ");
    scanf("%s", &m_name3);
    printf("Grade (1 - 100) [3/5]: ");
    scanf("%d", &m_grade3);
    printf("Module: %s Grade: %d%% \n\n", m_name3, m_grade3);

    printf("Enter a Module [4/5]: ");
    scanf("%s", &m_name4);
    printf("Grade (1 - 100) [4/5]: ");
    scanf("%d", &m_grade4);
    printf("Module: %s Grade: %d%% \n\n", m_name4, m_grade4);

    printf("Enter a Module [5/5]: ");
    scanf("%s", &m_name5);
    printf("Grade (1 - 100) [5/5]: ");
    scanf("%d", &m_grade5);
    printf("Module: %s Grade: %d%% \n\n", m_name5, m_grade5);

    int total = (m_grade1 + m_grade2 + m_grade3 + m_grade4 + m_grade5);
    int total_avrg = total / 5;
    printf("\nTotal points: %d\n", total);
    printf("Average Score: %d%%\n\n", total_avrg);

    if(total_avrg <= 39.4){
        x = 1;
    }
    if((total_avrg >= 39.5) && (total_avrg <= 49.4)){
        x = 2;
    }
    if((total_avrg >= 49.5) && (total_avrg <= 59.4)){
        x = 3;
    }
    if((total_avrg >= 59.5) && (total_avrg <= 69.4)){
        x = 4;
    }
    if((total_avrg >= 69.5) && (total_avrg <= 100)){
        x = 5;
    }
    if (total_avrg > 100){
        printf("Incorrect Grades Input...\n\n");
        continue;
    }




    switch(x){

case 1:
    printf("FAIL");
    break;
case 2:
    printf("3rd");
    break;
case 3:
    printf("2.2 (Lower Second-Class)");
    break;
case 4:
    printf("2.1 (Upper Second-Class)");
    break;
case 5:
    printf("1st (First Class)");
    break;
default:
    printf("try again");
    break;

    }
int exit_method;
printf("\n\n[1]: Next Student [2]: Quit    \n\n");
scanf("%d", &exit_method);

if (exit_method == 1){
    printf("Resetting...\n\n");
}
if (exit_method == 2){
    printf("Quitting...\n\n");
    y = 1;
}

}
}
