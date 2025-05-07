#include<iostream>
#include<string>
#include<vector>
using namespace std;

void common_prefix(const vector<string> &arr, int n, int m, string &ans) {
    for (int j = 0; j < m; j++) {
        char current_char = arr[0][j];
        for (int i = 1; i < n; i++) {
            if (arr[i][j] != current_char) {
                return; // mismatch found
            }
        }
        ans.push_back(current_char); // all matched, add to answer
    }
}

int main() {
    vector<string> arr = {"flin", "flight", "flies"};
    int n = arr.size();
    int m = arr[0].size();

    // Find minimum length among all strings
    for (int i = 1; i < n; i++) {
        if (arr[i].size() < m) {
            m = arr[i].size();
        }
    }

    string ans = ""; // start with empty string

    common_prefix(arr, n, m, ans);

    cout << "Longest common prefix: " << ans << endl;

    return 0;
}
