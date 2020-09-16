using namespace std; 
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        //in order > LPR
        // preorder> PLR 
        // PostORder > LRP
        if (root == NULL) return {};
        // create a a vector to store the answer and a stack to iter trhough the tree
        vector<int> ans;
        stack<Node*> stk;
        stk.push(root);
        // iter trhough the stack
        while(!stk.empty())
        {   
            // create a pointer that points to the top of the stack/ top of the tree
            Node* temp = stk.top();
            // pop the top of the stack
            stk.pop();
            // push the value into our answer
            ans.push_back(temp->val);
            cout << temp -> val << " ";
            for( int i =0; i< temp -> children.size(); i++)
            {
                // iter through the sub tree
                stk.push(temp->children[i]);
            }
            
        }
        // reverse our answer for post order trevarsal
         reverse(ans.begin(), ans.end());
         return ans;
    }
};