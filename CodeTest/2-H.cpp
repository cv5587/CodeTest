#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    if (a.size() != b.size()) {
        return a.size() < b.size(); 
    }
    return a < b; 
}

int main() {
    int N;
    cin >> N;
    vector<string> result;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        string num = "";

        for (int j = 0; j <= s.size(); j++) {
            if (j < s.size() && isdigit(s[j])) {
                num += s[j];
            }
            else if (!num.empty()) {
                while (num.size() > 1 && num[0] == '0') {
                    num.erase(0, 1);
                }
                result.push_back(num);
                num = "";
            }
        }
    }

    sort(result.begin(), result.end(), compare);

    for (const string& n : result) {
        cout << n << "\n";
    }

    return 0;
}