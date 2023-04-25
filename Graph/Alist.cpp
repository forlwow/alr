// 邻接表
#define MaxVerNum 100
typedef char VertexType; // 顶点的类型
typedef int EdgeType; // 边的权值
typedef struct node // 边表结点
{
    int adjvex; // 邻接点域
    struct node *next; // 指向下一个邻接点的指针域
} EdgeNode;

typedef struct vnode // 顶点表节点
{
    VertexType vertex; // 顶点域
    EdgeNode *firstedge; // 边表头指针
} VertexNode;

typedef VertexNode AdjList[MaxVerNum]; // 邻接表类型

typedef struct 
{
    AdjList adjlist;
    int n, e;
} ALGraph;

void CreateALGraph(ALGraph &G)
{
    int i, j, k;
    EdgeNode *s;

}

