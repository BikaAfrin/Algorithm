#include <bits/stdc++.h>
using namespace std;
// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    // Constructor to initialize
    // the node with a value
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to return the postOrder
// traversal of a binary tree using
// one stack
vector<int> postOrder(Node* root) {
    // Check if the tree is empty
    if (root == NULL)
        return {};

    Node* leftn = root;
    stack<Node*> st;
    vector<int> postorder;

    // Traverse the tree until
    // current node is not null
    // or the stack is not empty
    while (leftn != NULL || !st.empty()) {
        // If current node is not null,
        // push it onto the stack
        // and move to its left child
        if (leftn != NULL) {
            st.push(leftn);
            leftn = leftn->left;
        } else {
            // If current node is null,
            // check the right child of the
            // top node in the stack
            Node* temp = st.top()->right;

            // If right child is also null
            // or already visited, it means
            // we can process the top node now
            if (temp == NULL) {
                // Get the top node from stack
                temp = st.top();
                st.pop();
                // Add the node's data to
                // the postorder traversal list
                postorder.push_back(temp->data);

                // Check if there are more
                // nodes to pop whose right
                // subtree is also processed
                while (!st.empty() && temp == st.top()->right) {
                    temp = st.top();
                    st.pop();
                    postorder.push_back(temp->data);
                }
            } else {
                // If right child exists,
                // set current node to it
                leftn = temp;
            }
        }
    }
    // Returnt the array containing the
    // Postorder Traversal Sequence
    return postorder;
}



// Function to print the
// elements of a vector
void printVector(const vector<int>& vec) {
    // Iterate through the vector
    // and print each element
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

// Main function
int main()
{
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Getting postorder traversal
    vector<int> result = postOrder(root);

    // Printing the postorder
    // traversal result
    cout << "Postorder traversal: ";
    printVector(result);

    return 0;
}


