#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> insertionSort(vector<int> a) {

    vector<int> b = a;

    for (int j = 1; j < b.size(); j++) {

        int key = b[j];

        // Inserting key into the right place

        int i = j - 1;

        while (i > 0 && b[i] > key) {

            b[i + 1] = b[i]; 
            i -= 1;
        }

        b[i + 1] = key; 

    }

    return b; 
}

// Sorting the array A = [31,41,59,26,41,58] with various methods

int main () {

    vector<int> vector1;

    int number_array[6] = {31,41,59,26,41,58};

    for (int i = 0; i < 6; i++) {
        cout <<  number_array[i] << endl;
        vector1.push_back(number_array[i]);
    }

    vector<int> result = insertionSort(vector1);

    for (int i = 0; i < result.size(); i++) {
        cout <<  result[i] << endl;
    }


    return 0;
}


