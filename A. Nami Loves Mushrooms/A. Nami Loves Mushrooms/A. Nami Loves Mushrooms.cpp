#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> mushrooms(8);

    // Read the number of mushrooms in each slice
    for (int i = 0; i < 8; i++) {
        cin >> mushrooms[i];
    }

    int max_mushrooms = 0;

    // Try all 4-slice combinations in a circular manner
    for (int i = 0; i < 8; i++) {
        int current_sum = mushrooms[i] + mushrooms[(i + 1) % 8] +
            mushrooms[(i + 2) % 8] + mushrooms[(i + 3) % 8];
        max_mushrooms = max(max_mushrooms, current_sum);
    }

    cout << max_mushrooms << endl;
    return 0;
}
