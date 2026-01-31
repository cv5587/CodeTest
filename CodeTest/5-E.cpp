#include <bits/stdc++.h>
using namespace std;

struct Meeting {
    int St, Et;
    bool operator<(const Meeting& other) const {
        if (Et == other.Et) {
            return St > other.St;
        }
        return Et > other.Et;
    }
};

int main() {
    ios_base::sync_with_stdio(false); // 입출력 가속
    cin.tie(NULL);

    int N;
    cin >> N;
    priority_queue<Meeting> pq;

    for (int i = 0; i < N; i++) {
        int s, e;
        cin >> s >> e;
        pq.push({ s, e });
    }

    int count = 0;
    int lastEndTime = 0; // 마지막으로 선택된 회의의 종료 시간을 저장

    while (!pq.empty()) {
        Meeting mt = pq.top();
        pq.pop();

        // 현재 회의의 시작 시간이 마지막 회의 종료 시간 이후라면 선택 가능!
        if (mt.St >= lastEndTime) {
            lastEndTime = mt.Et; // 종료 시간 업데이트
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}