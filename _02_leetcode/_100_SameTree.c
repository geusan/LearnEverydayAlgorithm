/**

	LeetCode 08. Nov. 16
	
	Same Tree
	
	트리를 비교한다. 모든 트리가 일치한다는 가정을 해야하고 메모리 참조 에러를 위해 NULL값을 예외처리 해준다.	
	
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p == NULL && q ==NULL) return true;
    else if((p == NULL && q != NULL) || (p != NULL && q == NULL) || p->val != q->val) return false;
    if((isSameTree(p->left,q->left) && isSameTree(p->right,q->right))) return true;
    else return false;
    
}