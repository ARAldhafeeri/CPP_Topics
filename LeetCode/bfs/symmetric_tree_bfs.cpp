
// Definition for a binary tree node. This code return True if binary tree is symmtric, false if not.
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
  bool isSymmetric(TreeNode *root)
  {
    return (root == nullptr || isSym(root->left, root->right));
  }
  bool isSym(TreeNode *left, TreeNode *right)
  {
    if (left == nullptr && right == nullptr)
    {
      return true;
    }
    if (left == nullptr || right == nullptr)
    {
      return false;
    }
    return left->val == right->val && isSym(left->right, right->left) && isSym(right->right, left->left);
  }
};
