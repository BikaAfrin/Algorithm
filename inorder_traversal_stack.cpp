#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Define the TreeNode structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
// Function to perform inorder traversal
// of a binary tree iteratively
vector<int> inorderTraversal(TreeNode* root){
    // Initialize a stack to track nodes
    stack<TreeNode*> st;
    // Start from the root node
    TreeNode* node = root;
    // Initialize a vector to store
    // inorder traversal result
    vector<int> inorder;

    // Start an infinite
    // loop for traversal
    while(true){
        // If the current node is not NULL
        if(node != NULL){
            // Push the current
            // node to the stack
            st.push(node);
            // Move to the left child
            // of the current node
            node = node->left;
        }
        else{
            // If the stack is empty,
            // break the loop
            if(st.empty()){
                break;
            }
            // Retrieve a node from the stack
            node = st.top();
            // Remove the node from the stack
            st.pop();
            // Add the node's value to
            // the inorder traversal list
            inorder.push_back(node->val);
            // Move to the right child
            // of the current node
            node = node->right;
        }
    }
    // Return the inorder
    // traversal result
    return inorder;
}

};

int main() {
    // Creating a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(8);
    root->right->right->left = new TreeNode(9);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(6);
    root->left->right->right = new TreeNode(7);

    // Initializing the Solution class
    Solution sol;

    // Getting the inorder traversal
    vector<int> result = sol.inorderTraversal(root);

    // Displaying the inorder traversal result
    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
