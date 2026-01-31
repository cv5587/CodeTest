#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Jewel {
    int weight, value;
};

bool compareJewel(const Jewel& a, const Jewel& b) {
    return a.weight < b.weight;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<Jewel> jewels(N);
    for (int i = 0; i < N; i++) 
        cin >> jewels[i].weight >> jewels[i].value;

    vector<int> bags(K);
    for (int i = 0; i < K; i++) 
        cin >> bags[i];

    sort(jewels.begin(), jewels.end(), compareJewel);
    sort(bags.begin(), bags.end());

    priority_queue<int> pq; 
    long long result = 0;
    int jewelIdx = 0;

    for (int i = 0; i < K; i++) {
        while (jewelIdx < N && jewels[jewelIdx].weight <= bags[i]) {
            pq.push(jewels[jewelIdx].value);
            jewelIdx++;
        }

        if (!pq.empty()) {
            result += pq.top();
            pq.pop();
        }
    }

    cout << result << "\n";
    return 0;
}