/*
 * This file demonstrates the use of references by
 * computing the absolute value of a vector in-place.
 */

#include <vector>
#include <iostream>

using namespace std;

// Compute the absolute value of all integers in a vector in-place
void abs_value(vector<int> &v) {
    // Iterate over every integer in the vector
    for(int i = 0; i < v.size(); i++) {
        // We can use normal subscripting here because the vector
        // is a reference.
        if (v[i] < 0) {
            v[i] = -v[i];
        }
    }
}

int main() {
    vector<int> myVector {1, -2, 3, 71, -99};
    abs_value(myVector);

    cout << myVector[1] << endl;
}