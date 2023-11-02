#include <stdio.h>

#define N 5
#define M 5

char maze[N][M] = {
    {'S', 'O', 'O', 'W', 'W'},
    {'O', 'W', 'O', 'O', 'W'},
    {'O', 'O', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'E', 'W'}
};
int visited[N][M] = {0};
int isSafe(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M && maze[x][y] != 'W' && !visited[x][y]);
}
int findPath(int x, int y) {
    visited[x][y] = 1;
    if (maze[x][y] == 'E') {
        return 1;
    }
    if (isSafe(x, y + 1) && findPath(x, y + 1)) {
        printf("%d,%d ", x, y);
        return 1;
    }
    if (isSafe(x + 1, y) && findPath(x + 1, y)) {
        printf("%d,%d ", x, y);
        return 1;
    }
    visited[x][y] = 0;
    return 0;
}

int main() {
    int startX, startY;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (maze[i][j] == 'S') {
                startX = i;
                startY = j;
                break;
            }
        }
    }
    printf("Output Maze after traversal:\n");

    if (findPath(startX, startY)) {
        printf("%d,%d\n", startX, startY);
    }
}
