#include <stdio.h>

int getaverage(int *data);

int main(void) {
    int average, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};
    average = getaverage(array);
    printf("%d\n", average);
    return 0;
}

int getaverage(int *data) {
    int average = 0;
    // for (int i = 0; i < 10; i++) {
    //     // average += data[i];
    //     // average += *(data + i);
    //     average += *data++;
    // }
    for (int *d = data; d != &data[10]; d++) {
        average += *d;
    }
    return average / 10;
}
