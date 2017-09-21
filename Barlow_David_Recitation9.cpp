#include <iostream>
#include <fstream>
using namespace std;
void swapvalues(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sortList(int data[]) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < 29; i++) {
            if (data[i] < data[i+1]) {
                swapvalues(data[i], data[i+1]);
                sorted = false;
            }
        }
    }
}

int main () {
    ifstream inFile("/home/user/Desktop/Recitation9_Input.txt");
    if (!inFile) {
        cout << "Error opening file";
        return -1;
    }

    int myArray[30];
    int i = 0;
    string line;
    while (getline(inFile, line)) {
        int temp;
        temp = stoi(line);
        myArray[i] = temp;
        i++;
    }

    sortList(myArray);

    for (int i = 0; i < 29; i++) {
        cout << myArray[i] << " ";
    }



    return 0;
}
