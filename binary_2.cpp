vector<int> reverseLevelOrder(Node *root)
{
    vector<int>v;
    stack<Node*>s;
    queue<Node*>q;
    q.push(root);
    while(q.size()>0)
    {
        Node* temp=q.front();
        q.pop();
        s.push(temp);
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
    }
    while(s.size()>0)
    {
        int t=s.top()->data;
        s.pop();
        v.push_back(t);
    }
    return v;
    
}
