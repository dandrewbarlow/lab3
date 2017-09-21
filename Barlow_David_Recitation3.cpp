#include <iostream>
using namespace std;

int everest = 29029;
int k2 = 28251;
int kangchenjunga = 28169;

int printNameandRank(int height) {
    if (height == everest) {
        cout << height << " is the height of Mount Everest, it is the highest mountain" << endl;
        return 0;
    }
    else if (height == k2) {
        cout << height << " is the height of K2, it is the second highest mountain";
        return 0;
    }
    else if (height == kangchenjunga) {
        cout << height << " is the height of Kangchenjunga, it is the third highest mountain in the world";
        return 0;
    }
    else {
        //cout << height <<" does not match that of the three highest mountains. Please enter a correct height!";
        return -1;
    }

}



main(){
    cout << "Please enter a height:" << endl;
    int height_input = 0;
    cin >> height_input;
    int value_test = printNameandRank(height_input);
    while (value_test == -1) {
        cout << height_input <<" does not match that of the three highest mountains. Please enter a correct height!";
        cin >> height_input;
        value_test = printNameandRank(height_input);
    }
    return 0;

    }

