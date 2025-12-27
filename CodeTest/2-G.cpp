#include <bits/stdc++.h>
using namespace std;
//boj 2910
struct Num {
    int val, cnt, first_idx;

    // 구조체 내부에 정렬 기준 정의 (cmp 함수 대체)
    bool operator<(const Num& other) const {
        if (cnt != other.cnt) {
            return cnt > other.cnt; // 빈도수 내림차순
        }
        return first_idx < other.first_idx; // 등장 순서 오름차순
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, C;
    cin >> N >> C;

    // 숫자별 {빈도수, 첫 등장 위치} 저장
    unordered_map<int, pair<int, int>> m;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (m.find(num) == m.end()) {
            m[num] = { 1, i };
        }
        else {
            m[num].first++;
        }
    }

    // 정렬을 위해 vector에 담기
    vector<Num> vec;
    for (auto const& iter : m) {
        vec.push_back({ iter.first, iter.second.first, iter.second.second });
    }

    // 세 번째 인자(cmp) 없이 정렬 실행! (구조체의 operator< 사용)
    sort(vec.begin(), vec.end());

    // 출력
    for (const auto& n : vec) {
        for (int i = 0; i < n.cnt; i++) {
            cout << n.val << " ";
        }
    }

    return 0;
}