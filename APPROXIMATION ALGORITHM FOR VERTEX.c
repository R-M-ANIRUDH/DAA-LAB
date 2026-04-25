#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100


void findApproxVertexCover(int graph[MAX_VERTICES][MAX_VERTICES], int V) {
    bool visited[MAX_VERTICES] = {false};
    bool edges_covered[MAX_VERTICES][MAX_VERTICES] = {false};

   
    for (int u = 0; u < V; u++) {
        for (int v = 0; v < V; v++) {
            
            if (graph[u][v] == 1 && !visited[u] && !visited[v]) {
               
                visited[u] = true;
                visited[v] = true;
            }
        }
    }

   
    printf("Approximate Vertex Cover: ");
    for (int i = 0; i < V; i++) {
        if (visited[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int V = 7;
    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

  
    graph[0][1] = graph[1][0] = 1;
    graph[0][2] = graph[2][0] = 1;
    graph[1][3] = graph[3][1] = 1;
    graph[3][4] = graph[4][3] = 1;
    graph[4][5] = graph[5][4] = 1;
    graph[5][6] = graph[6][5] = 1;

    findApproxVertexCover(graph, V);

    return 0;
}
