#include <bits/stdc++.h>
using namespace std;

// Function to check whether a page exists
// in a frame or not
bool search(int key, vector<int>& fr)
{
    for (int i = 0; i < fr.size(); i++)
        if (fr[i] == key)
            return true;
    return false;
}

// Function to find the frame that will not be used
// recently in the future after the given index in pg[0..pn-1]
int predict(int pg[], vector<int>& fr, int pn, int index)
{
    // Store the index of pages which are going
    // to be used recently in the future
    int res = -1, farthest = index;
    for (int i = 0; i < fr.size(); i++) {
        int j;
        for (j = index; j < pn; j++) {
            if (fr[i] == pg[j]) {
                if (j > farthest) {
                    farthest = j;
                    res = i;
                }
                break;
            }
        }

        // If a page is never referenced in the future,
        // return its index in the frame array.
        if (j == pn)
            return i;
    }

    // If all of the frames were not in the future,
    // return any of them, we return 0. Otherwise,
    // we return the index of the frame to be replaced.
    return (res == -1) ? 0 : res;
}

void printFrames(vector<int>& fr)
{
    cout << "Page frames:";
    for (int i = 0; i < fr.size(); i++) {
        cout << fr[i] << "  ";
    }
    cout << endl;
}

void optimalPage(int pg[], int pn, int fn)
{
    // Create an array for the given number of
    // frames and initialize it as empty.
    vector<int> fr;

    // Traverse through the page reference array
    // and check for miss and hit.
    int hit = 0;
    for (int i = 0; i < pn; i++) {

        // Page found in a frame: HIT
        if (search(pg[i], fr)) {
            hit++;
            printFrames(fr);
            continue;
        }

        // Page not found in a frame: MISS

        // If there is space available in frames.
        if (fr.size() < fn) {
            fr.push_back(pg[i]);
        } else {
            int j = predict(pg, fr, pn, i + 1);
            fr[j] = pg[i];
        }

        printFrames(fr);
    }
    cout << "No. of hits = " << hit << endl;
    cout << "No. of misses = " << pn - hit << endl;
}

// Driver Function
int main()
{
    int pg[] = { 7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0, 1, 7, 0, 1 };
    int pn = sizeof(pg) / sizeof(pg[0]);
    int fn = 3;
    optimalPage(pg, pn, fn);
    return 0;
}
