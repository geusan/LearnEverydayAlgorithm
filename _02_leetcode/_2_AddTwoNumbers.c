/**

	LeetCode 08. Nov. 16
	
	Add Two Number
	
	엄청 틀렸다... 여러가지 경우의 수에 대해서 더 생각해보는 시간을 가지는 것이 좋겠다.
	링크드리스트를 사용에서는 문제가 없었는데 로직짜는 곳에서 문제였다. 여러가지 경우의 수! 예외처리 확실하게 하자!
	
*/

#include <stdio.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

	struct ListNode *sol = l1;
	
    while(l1 != NULL && l2 != NULL){
    	
		if(l1->next == NULL && l2->next == NULL){
			if(l1->val + l2->val >= 10){
				//create new node
				struct ListNode *n = (struct ListNode *) malloc (sizeof(struct ListNode*));
				n->val = 1;
        		n->next = NULL;
        		l1->val = l1->val + l2->val - 10;
        		l1->next = n;
        		
			}else{
				l1->val += l2->val;
			}
			break;
		}else if(l1->next == NULL && l2->next != NULL){
				//create new node l2->next copy
				//l2 make NULL
				struct ListNode *n = (struct ListNode *) malloc (sizeof(struct ListNode*));
				n->val = 0;
				n->next = NULL;
				if(l1->val + l2->val >= 10){
					l1->val = l1->val + l2->val - 10;
					n->val += 1;
				}
				else{
					l1->val += l2->val;
				}
				l1->next = n;	
		}else {
			if(l1->val + l2->val >= 10){
				l1->val = l1->val + l2->val - 10;
				if(l2->next == NULL){
					struct ListNode *n = (struct ListNode *) malloc (sizeof(struct ListNode*));
					n->val = 1;
        			n->next = NULL;
        			l2->next = n;
				}else{
					l1->next->val += 1;
				}
			}
			else l1->val += l2->val;
			
		}
		l1 = l1->next;
        l2 = l2->next;
    }
    
    return sol;
}

int main() {
	struct ListNode *sample11 = (struct ListNode*) malloc (sizeof(struct ListNode*));
	struct ListNode *sample12 = (struct ListNode*) malloc (sizeof(struct ListNode*));
	struct ListNode *sample13 = (struct ListNode*) malloc (sizeof(struct ListNode*));
	struct ListNode *sample21 = (struct ListNode*) malloc (sizeof(struct ListNode*));
	struct ListNode *sample22 = (struct ListNode*) malloc (sizeof(struct ListNode*));
	struct ListNode *sample23 = (struct ListNode*) malloc (sizeof(struct ListNode*));
	
	sample11->val = 9;
	sample12->val = 9;
	sample13->val = 3;
	
	sample21->val = 9;
	sample22->val = 9;
	sample23->val = 4;
	
	sample11->next = sample12;
	sample12->next = NULL;
	sample13->next = NULL;
	
	sample21->next = NULL;
	sample22->next = NULL;
	sample23->next = NULL;
	
	struct ListNode *solution = addTwoNumbers(sample11, sample21);
	
	while(solution != NULL){
		printf("%d\n", solution->val);
		solution = solution->next;		
	}
	


    return 0;
}1