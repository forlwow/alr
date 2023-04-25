// 邻接表
#include "iostream"
#define MaxVertexNum 100 // 最大顶点数
typedef char VertexType; // 顶点的类型
typedef int EdgeType; // 边的权值
typedef struct 
{
    VertexType vexs[MaxVertexNum]; // 顶点表
    EdgeType edges[MaxVertexNum][MaxVertexNum];
    int n, e; // 顶点数和边数
} Mgragh;

void CreateMGraph(Mgragh &G)
{
    int i, j, k, w;
    char ch;
    scanf("%d, %d", &(G.n), &(G.e));
    printf("输入顶点信息，格式为：顶点号<CR>\n");
    for (int i = 0; i < G.n; i++)
    {
        scanf("\n%c", &G.vexs[i]);
    }
    for (int i = 0; i < G.n; i++)
    {
        for (int j = 0; j < G.n; j++)
        {
            G.edges[i][j] = 0;
        }
    }
    printf("输入边：i, j:\n");
    for (int k = 0; k < G.e; k++)
    {
        scanf("\n%d, %d", &i, &j);
        G.edges[i][j] = 1;
    }
    
}
