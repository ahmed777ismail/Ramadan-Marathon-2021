#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> reds(N), blues(N);

    for (int i = 0; i < N; ++i) {
        cin >> reds[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> blues[i];
    }

    sort(reds.begin(), reds.end());
    sort(blues.begin(), blues.end());

    bool redFront = true, blueFront = true;

    for (int i = 0; i < N; ++i) {
        if (reds[i] >= blues[i]) {
            redFront = false;
        }
        if (blues[i] >= reds[i]) {
            blueFront = false;
        }
    }

    if (redFront || blueFront) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}