#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void printV(vi &v) {
    printf("[");
    for (vi::iterator it = v.begin(); it != v.end(); it++)
        printf("%d ", *it + 1);
    printf("] ");
}

void printV(vi &v, int c) {
    int n = v.size();
    printf("[");
    int i = 0;
    for (; i <= c; i++)
        printf("%d ", v[i]);
    for (; i < n; i++)
        printf("x ");
    
    printf("] ");
}

bool check(vi &v, int c) {
    int n = v.size();
    for (int i = 0; i < c; i++)
        if (v[i] == v[c] || c - i == abs(v[c] - v[i]))
            return false;
    return true;
}

bool nqueen(vi &v, int c) {
    int n = v.size();
    if (c >= n) {
        printV(v);
        return true;
    }
    
    bool solvable = false;
    for (int j = 0; j < n; j++) {
        v[c] = j;
        if (check(v, c))
            solvable |= nqueen(v, c + 1);
    }
    return solvable;
}

int main() {
    int T, n;
    vi v;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        v.resize(n);
        if (!nqueen(v, 0))
            printf("-1");
        printf("\n");
    }
	return 0;
}
