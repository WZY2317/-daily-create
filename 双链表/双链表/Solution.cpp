#include"list.cpp"
class Solution {
	static LTDataType Ques23(LTNode* str1,LTNode* str2) {
		LTNode* temp1 = str1, *temp2 = str2;
		while (str1->data!=str2->data)
		{
			str1 = str1->next;
			str2 = str2->next;
			if (str1 == nullptr)
				str2 = temp2;
			if (str2 == nullptr)
				str1 == temp1;
		}
		return str1->data;
		// ±º‰∏¥‘”∂»O()
	}
	LTNode* L;
	typedef struct Node
	{
		int data;
		struct Node* next;
	}SingeNode, * SingeNode;//2
	static void Ques25(SingeNode* h,int n)
	{
		SingeNode* p = h, *r;
		int* array,m;
		array = (int*)malloc(sizeof(int) * (n + 1));
		for (int i = 0; i <= n; i++)
		{
			*(array + i) = 0;
		}
		while (p->next)
		{
			m = p->next->data > 0 ? p->next->data : -p->next->data;
			if (array[m] == 0)
			{
				array[m] = 1;
				p = p->next;
			}
			else
			{
				r = p->next;
				p->next = r->next;
				free(r);
			}
			
		}
		free(array);

	}
	static void Ques25(LTNode* head)
	{
		LTNode* p1=head, * p2=head;
		while (p2->next)
		{
			p1 = p1->next;
			p2 = p2->next;
			if (p2->next)
				p2 = p2->next;
		}
		LTNode* pre = p1;
		LTNode* cur = p1->next;
		LTNode* nxt = cur->next;
		while (cur)
		{
			cur->next = pre;
			pre = cur;
			cur = nxt;
			nxt = cur->next;
		}
		LTNode* s = head;
		LTNode* q = p1->next;
		while (q)
		{
			LTNode* temp1 = s->next;
			s->next = q;
			s->next->next = temp1;
			s = temp1;
			LTNode* temp2 = q;
			q = q->next;
			
		}
		

		
	}
	static void Ques25p(LTNode* head)
	{
		LTNode* cur1 = head;
		LTNode* cur2 = head;
		while (cur2->next)
		{
			cur1 = cur1->next;
			cur2 = cur2->next;
			if (cur2->next)
				cur2 = cur2->next;
		}
	
		cur1->next = nullptr;
		LTNode* prev = cur1;
		LTNode* cur = prev->next;
		while (cur)
		{
			LTNode* n = cur->next;
			cur->next = prev;
			prev = cur;
			cur = n;
		}
		LTNode* s = head->next;
		LTNode* q = prev;
		
		
	}
};