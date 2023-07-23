#include <stdio.h>
#define MAX_COMPUTERS 101

int graph[MAX_COMPUTERS][MAX_COMPUTERS];
int visited[MAX_COMPUTERS];
int num_computers, num_edges;

int dfs(int node) {
    visited[node] = 1;
    int count = 1;

    for (int i = 1; i <= num_computers; i++) {
        if (graph[node][i] && !visited[i]) {
            count += dfs(i);
        }
    }

    return count;
}

int main() {
    scanf("%d", &num_computers);
    scanf("%d", &num_edges);

    // 그래프 초기화
    for (int i = 0; i < num_edges; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = graph[b][a] = 1;
    }

    // 1번 컴퓨터부터 시작하여 바이러스에 감염된 컴퓨터 개수 계산
    int virus_count = dfs(1) - 1;

    printf("%d\n", virus_count);

    return 0;
}
