#include <iostream>
using namespace std;

int main () {
    double my_array[20];
    for (int i = 0; i < 20; i++) {
        my_array[i] = i;
    }
    for (int i = 0; i < 20; i++) {
        cout << my_array[i] << " ";
    }
    double sum = 0;
    double total = 0;
    for (int i = 0; i < 20; i++) {
        sum += my_array[i];
        total++;

    }
    double average = sum / total;
    cout << endl << "The average value of myArray is: " << average;
    return 0;
}
