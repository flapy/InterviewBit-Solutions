/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    queue<TreeLinkNode*> q;
    q.push(A);
    q.push(NULL);
    while(!q.empty())
    {
        TreeLinkNode *front=q.front();
        q.pop();
        if(front==NULL)
        {
            if(q.empty())
                break;
            else
            {
                q.push(NULL);
            }
        }
        else
        {
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
            front->next=q.front();
        }
    }
}
