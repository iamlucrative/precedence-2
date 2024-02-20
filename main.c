#include <stdio.h>

#define MAX_RECORDS 5

// Define a structure for a record
typedef struct {
    int id;
    char name[50];
    int age;
} Record;

// Function to swap two records
void swap(Record *a, Record *b) {
    Record temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on the array of records based on id field
void sortRecords(Record arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j].id > arr[j+1].id) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    // Define an array of records
    Record records[MAX_RECORDS] = {
        {101, "Alice", 25},
        {103, "Bob", 30},
        {100, "Charlie", 22},
        {105, "David", 28},
        {102, "Eve", 35}
    };
    
    // Sort the array of records based on id
    sortRecords(records, MAX_RECORDS);
    
    // Print the sorted records
    printf("Sorted records based on id:\n");
    for (int i = 0; i < MAX_RECORDS; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", records[i].id, records[i].name, records[i].age);
    }
    
    return 0;
}
