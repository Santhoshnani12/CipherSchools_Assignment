#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    int hd;
    Node *left, *right;

    Node(int key)
    {
        data = key;
        hd = INT_MAX;
        left = right = NULL;
    }
};

void bottomView(Node *root)
{
    if (root == NULL)
        return;
    int hd = 0;

    map<int, int> m;

    queue<Node *> q;

    root->hd = hd;


    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();


        hd = temp->hd;


        m[hd] = temp->data;

        if (temp->left != NULL)
        {
            temp->left->hd = hd-1;
            q.push(temp->left);
        }


        if (temp->right != NULL)
        {
            temp->right->hd = hd+1;
            q.push(temp->right);
        }
    }

    for (auto i = m.begin(); i != m.end(); ++i)
        cout << i->second << " ";
}

void leftViewUtil(struct Node* root, int level,
                  int* max_level)
{
    if (root == NULL)
        return;

    if (*max_level < level) {
        printf("%d\t", root->data);
        *max_level = level;
    }

    leftViewUtil(root->left, level + 1, max_level);
    leftViewUtil(root->right, level + 1, max_level);
}

void leftView(struct Node* root)
{
    int max_level = 0;
    leftViewUtil(root, 1, &max_level);
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(25);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);


    bottomView(root);

    leftView(root);


    return 0;
}
