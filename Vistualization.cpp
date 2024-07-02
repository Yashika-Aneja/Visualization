#include "graphics.h"
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// Function to swap values and visualize the swap
void swapAndVisualize(int& a, int& b, int* array, int size, int xPos1, int xPos2) {
    // Swap the values
    int temp = a;
    a = b;
    b = temp;
    
    // Visualize the array after the swap
    cleardevice();
    for (int i = 0; i < size; i++) {
        if (i == xPos1 || i == xPos2) {
            setcolor(GREEN); // Highlight the current swap
        } else {
            setcolor(WHITE); // Normal color
        }
        line(i * 10, 400, i * 10, 400 - array[i] * 10);
    }
    delay(100);
}

// Bubble Sort visualization
void bubbleSortVisualize(int* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swapAndVisualize(array[j], array[j + 1], array, size, j, j + 1);
            }
        }
    }
}

// Main function to initialize graphics and execute the bubble sort visualization
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int arraySize = 40;
    int array[arraySize];

    // Generate random values for the array
    srand(time(0));
    for (int i = 0; i < arraySize; i++) {
        array[i] = rand() % 40 + 1;
    }

    // Visualize the initial array
    for (int i = 0; i < arraySize; i++) {
        setcolor(WHITE);
        line(i * 10, 400, i * 10, 400 - array[i] * 10);
    }

    delay(2000); // Wait for 2 seconds before starting the sort

    // Start the bubble sort visualization
    bubbleSortVisualize(array, arraySize);

    // Wait for user input before closing
    getch();
    closegraph();
    return 0;
}

#include <conio.h>
#include <stdlib.h>
#include <time.h>

// Function to swap values and visualize the swap
void swapAndVisualize(int& a, int& b, int* array, int size, int xPos1, int xPos2) {
    // Swap the values
    int temp = a;
    a = b;
    b = temp;
    
    // Visualize the array after the swap
    cleardevice();
    for (int i = 0; i < size; i++) {
        if (i == xPos1 || i == xPos2) {
            setcolor(GREEN); // Highlight the current swap
        } else {
            setcolor(WHITE); // Normal color
        }
        line(i * 10, 400, i * 10, 400 - array[i] * 10);
    }
    delay(100);
}

// Bubble Sort visualization
void bubbleSortVisualize(int* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swapAndVisualize(array[j], array[j + 1], array, size, j, j + 1);
            }
        }
    }
}

// Main function to initialize graphics and execute the bubble sort visualization
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int arraySize = 40;
    int array[arraySize];

    // Generate random values for the array
    srand(time(0));
    for (int i = 0; i < arraySize; i++) {
        array[i] = rand() % 40 + 1;
    }

    // Visualize the initial array
    for (int i = 0; i < arraySize; i++) {
        setcolor(WHITE);
        line(i * 10, 400, i * 10, 400 - array[i] * 10);
    }

    delay(2000); // Wait for 2 seconds before starting the sort

    // Start the bubble sort visualization
    bubbleSortVisualize(array, arraySize);

    // Wait for user input before closing
    getch();
    closegraph();
    return 0;
}
