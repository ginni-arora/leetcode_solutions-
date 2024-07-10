class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (!l1 || !l2) 
		return l1 ? l1 : l2;
		ListNode head(0);
		ListNode* c = &head;//c=current
		while (l1 && l2) {
			if (l1->val < l2->val) {
				c->next = l1;
				l1 = l1->next;
			}
			else {
				c->next = l2;
				l2 = l2->next;
			}
			c = c->next;
		}
		c->next = l1 ? l1 : l2;
		return head.next;
	}
};
