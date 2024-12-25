#include <iostream>
#include <vector>
using namespace std;

void alyonaHappyDays(int t, vector<pair<int, vector<int>>> &testCases) {
    for (int i = 0; i < t; ++i) {
        int n = testCases[i].first;
        vector<int> pieces = testCases[i].second;

        int happyDays = 0;
        int totalPieces = 0;
        int layerSize = 1; // Current layer size to complete
        int nextLayerIncrement = 8;

        for (int j = 0; j < n; ++j) {
            totalPieces += pieces[j];

            while (totalPieces >= layerSize) {
                if (totalPieces == layerSize) {
                    ++happyDays;
                }
                layerSize += nextLayerIncrement;
                nextLayerIncrement += 8; // Next layer has 8 more pieces than the current one
            }
        }

        cout << happyDays << endl;
    }
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, vector<int>>> testCases;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> pieces(n);
        for (int j = 0; j < n; ++j) {
            cin >> pieces[j];
        }
        testCases.push_back({n, pieces});
    }

    alyonaHappyDays(t, testCases);

    return 0;
}
