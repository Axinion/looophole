// Solution 1 - Recursion

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int findIndex(vector<int> inorder, int value, int size){
        for(int i=0;i<size;i++){
            if(inorder[i]==value){
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &preIndex, int inIndexS, int inIndexE, int size){
        // base case
        if(preIndex>size-1 || inIndexS>inIndexE){
            return NULL;
        }

        int value = preorder[preIndex++];
        TreeNode* root = new TreeNode(value);
        int pos = findIndex(inorder, value, size);

        root->left = solve(preorder, inorder, preIndex, inIndexS, pos-1, size);
        root->right = solve(preorder, inorder, preIndex, pos+1, inIndexE, size);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int preIndex = 0;
        TreeNode* res = solve(preorder, inorder, preIndex, 0, n-1, n);
        return res;
    }
};


// Solution 2 - Recursion + HAshmap


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void createMapping(vector<int> inorder, map<int,int> &nodeToIndex, int size){
        for(int i=0;i<size;i++){
            nodeToIndex[inorder[i]] = i;;
        }
    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &preIndex, int inIndexS, int inIndexE, int size, map<int,int> &nodeToIndex){
        // base case
        if(preIndex>size-1 || inIndexS>inIndexE){
            return NULL;
        }

        int value = preorder[preIndex++];
        TreeNode* root = new TreeNode(value);
        int pos = nodeToIndex[value];

        root->left = solve(preorder, inorder, preIndex, inIndexS, pos-1, size, nodeToIndex);
        root->right = solve(preorder, inorder, preIndex, pos+1, inIndexE, size, nodeToIndex);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int preIndex = 0;
        map<int, int> nodeToIndex;
        createMapping(inorder, nodeToIndex, n);
        TreeNode* res = solve(preorder, inorder, preIndex, 0, n-1, n, nodeToIndex);
        return res;
    }
};
