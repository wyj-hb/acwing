//#include<iostream>
//using namespace std;
//typedef struct node {
//	node* next;
//	int value;
//	node(int data):value(data),next(nullptr){}
//}*ListNode;
//int main()
//{
//	ListNode head = new node(5);
//	//��ǰ���ת,����ָ��ָ��
//	ListNode slow = head;
//	ListNode fast = slow->next;
//	slow->next = nullptr;
//	while (fast)
//	{
//		ListNode temp = fast->next;
//		fast->next = slow;
//		slow = fast;
//		if (temp == nullptr)
//		{
//			break;
//		}
//		fast = temp;
//	}
//}