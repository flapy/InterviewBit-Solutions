/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
#define GraphNode UndirectedGraphNode
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    GraphNode *root=new GraphNode(node->label);
    queue<GraphNode*> q;
    q.push(node);
    map<GraphNode*,GraphNode*> m;
    m[node]=root;
    while(!q.empty())
    {
        GraphNode *u=q.front();
        q.pop();
        vector<GraphNode*> v=u->neighbors;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            if(!m[v[i]])
            {
                GraphNode *gn=new GraphNode(v[i]->label);
                m[v[i]]=gn;
                gn->neighbors.clear();
                q.push(v[i]);
                // m[u]->neighbors.push_back(m[v[i]]);
            }
            m[u]->neighbors.push_back(m[v[i]]);
        }
    }
    return root;
}
