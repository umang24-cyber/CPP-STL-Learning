#include<bits/stdc++.h> 
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<int> ans;
    void preorder(TreeNode* root){
         if(root==nullptr){
            return; 
         }
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};
int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    
    vector<int> result = s.preorderTraversal(root);
    
    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}