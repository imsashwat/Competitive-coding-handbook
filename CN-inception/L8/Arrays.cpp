#include <iostream>
using namespace std;

void mergeTwoSortedArrays(int input1[], int size1, int input2[], int size2, int ans[]) {
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2) {
        if(input1[i] <= input2[j]) {
            ans[k] = input1[i];
            i++;
        }
        else {
            ans[k] = input2[j];
            j++;
        }
        k++;
    }

    // Fill the remaining elements
    while(i < size1) {
        ans[k] = input1[i];
        i++;
        k++;
    }

    while(j < size2) {
        ans[k] = input2[j];
        k++;
        j++;
    }
}















void insertionSort_2(int input[], int n) {
    for(int i = 1; i < n; i++) {

        // For one element
        int j;
        int temp = input[i];
        for(j = i - 1; j >= 0; j--) {
            if(temp > input[j]) {
                break;
            }
            else {
                input[j+1] = input[j];
            }
        }
        input[j+1] = temp;
    }
}

void insertionSort(int input[], int n) {
    for(int i = 1; i < n; i++) {

        // For one element
        int j;
        for(j = i - 1; j >= 0; j--) {
            if(input[i] > input[j]) {
                break;
            }
        }

        // Correct index for input[i] is j+1

        // Shift elements towards right by 1 position
        int temp = input[i];
        for(int k = i - 1; k >= j+1; k--) {
            input[k+1] = input[k];
        }
        input[j+1] = temp;

    }
}



int main() {
    /*
    int input[] = {1, 2, 3, 5}; // input size is 4
    int input2[4] = {1, 2, 3, 4};   // input2 size is 4
    int input3[10]  = {1, 2, 3, 4}; // input[4] to input[9] is 0
    int b[100] = {0};
    */


    int input[] = {5, 1, 0, 9, 3};
    insertionSort(input, 5);

    for(int i = 0; i < 5; i++) {
        cout << input[i] << " ";
    }

}



















