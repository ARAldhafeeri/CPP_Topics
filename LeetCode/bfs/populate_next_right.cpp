// You are given a perfect binary tree where all leaves are on the same level, and every parent has two children.The binary tree has the following definition :

//  Populate each next pointer to point to its next right node.If there is no next right node, the next pointer should be set to NULL.
// Initially, all next pointers are set to NULL.
// Follow up:
// You may only use constant extra space.
// Recursive approach is fine, you may assume implicit stack space does not count as extra space for this problem.

// Definition for a Node.
class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node *next;

  Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}

  Node(int _val) : val(_val), left(nullptr), right(nullptr), next(nullptr) {}

  Node(int _val, Node *_left, Node *_right, Node *_next)
      : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
public:
  Node *connect(Node *root)
  {
    if (root && root->left)
    {
      root->left->next = root->right;
      if (root->next)
      {
        root->right->next = root->next->left;
      }
      connect(root->left);
      connect(root->right);
    };
    return root;
  }
};