#include <iostream>
#include <vector>

using namespace std;

class Graph
{
public:
    int numVertices;
    vector<vector<int>> adjMatrix;
    bool directed = true; // Add a flag to indicate if the graph is directed

    Graph(int V) : numVertices(V), adjMatrix(V, vector<int>(V, 0)) {}

    void addEdge(int src, int dest)
    {
        adjMatrix[src][dest] = 1; // 1 for an unweighted graph
        if (!directed)
        { // Add edge in reverse for undirected graphs
            adjMatrix[dest][src] = 1;
        }
    }

    void visualize()
    {
        // Print column headers (vertex numbers)
        cout << "   ";
        for (int i = 0; i < numVertices; i++)
        {
            cout << i << "  ";
        }
        cout << endl;

        // Print matrix with row labels
        for (int i = 0; i < numVertices; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < numVertices; j++)
            {
                cout << adjMatrix[i][j] << "  ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph graph(5); // Graph with 5 vertices

    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    cout << "Adjacency Matrix Representation:\n";
    graph.visualize();

    return 0;
}