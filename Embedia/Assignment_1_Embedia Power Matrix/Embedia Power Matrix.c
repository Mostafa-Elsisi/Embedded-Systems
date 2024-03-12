//<<<<<<<<<<<<<<<Assignment_1_Embedia_Power_Matrix>>>>>>>>>>>>>>>

#include <stdio.h>
#include <stdbool.h>

#define ROW 3
#define COL 3
#define Max_Len 5

int calculate_power(int base, unsigned int expon);

int STi(char *str);

bool embedia_matrix(char matrix[ROW][COL][Max_Len]);


int main() {
    printf("Hello Embedia......\n\n");
    printf("Test Cases\n\n");
    printf("Test Case 1 :\n");

    char arr1[ROW][COL][Max_Len] =
            {
                    {"3", "2", "2"},
                    {"8", "9", "25"},
                    {"2", "3", "5"}
            };

    bool res = embedia_matrix(arr1);
    if (res)
        printf("Output: Embedia Power Matrix\n\n");
    else
        printf("Output: NOT an Embedia Power Matrix\n\n");

    printf("Test Case 2 :\n");
    char arr2[ROW][COL][Max_Len] =
            {
                    {"1", "3",  "5"},
                    {"3", "7",  "11"},
                    {"5", "11", "17"}
            };

    res = embedia_matrix(arr2);
    if (res)
        printf("Output: Embedia Power Matrix\n\n");
    else
        printf("Output: NOT an Embedia Power Matrix\n\n");


    printf("Test Case 3 :\n");
    char arr3[ROW][COL][Max_Len] =
            {
                    {"3",   "4",   "2"},
                    {"512", "256", "49"},
                    {"8",   "4",   "7"}
            };

    res = embedia_matrix(arr3);
    if (res)
        printf("Output: Embedia Power Matrix\n\n");
    else
        printf("Output: NOT an Embedia Power Matrix\n\n");

    printf("Finally You Can Change Size of Matrix from Macros and Write Your Test Case !! \n");
    printf("Thanks Embedia (: \n");


    return 0;
}

int STi(char *str) {
    int result = 0;
    char sign = 1;
    int cnt = 0;

    if (str[cnt] == '-') {
        sign = -1;
        cnt++;
    } else if (str[cnt] == '+') {
        cnt++;
    }

    while (str[cnt] != '\0') {
        if ((str[cnt] >= '0') && (str[cnt] <= '9')) {
            result = result * 10 + (str[cnt] - '0');
        } else {
            printf("ERROR: Invalid input!\n");
            return 0;
        }
        cnt++;
    }

    return result * sign;
}

bool embedia_matrix(char matrix[ROW][COL][Max_Len]) {
    int mat[ROW][COL];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            mat[i][j] = STi(matrix[i][j]);
        }
    }

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }


    for (int i = 1; i < ROW - 1; i++) {
        for (int j = 0; j < COL; j++) {
            int current_element = mat[i][j];
            int upper_element = mat[i - 1][j];
            int lower_element = mat[i + 1][j];
            if (current_element != calculate_power(lower_element, upper_element)) {
                return false;
            }
        }
        return true;

    }
}

int calculate_power(int base, unsigned int expon) {
    int res = 1;
    for (int i = 1; i <= expon; i++) {
        res *= base;
    }
    return res;
}

