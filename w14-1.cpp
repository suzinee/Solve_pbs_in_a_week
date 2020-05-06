/*
link: https://leetcode.com/problems/merge-k-sorted-lists/
Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.
Example:
Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6  
*/

#include <iostream>
using namespace std;

template <typename T>
struct Node
{
	public:
		T value;
		struct Node<T> *next = nullptr;
};

template <typename T>
class SingleLinked_List 
{
	private:
		Node<T> *head;
		Node<T> *tail;
		int size = 0;		
	public:
		SingleLinked_List() : head(nullptr), tail(nullptr) {} // 생성자 리스트 
		~SingleLinked_List() {} //소멸자
	void AddNode(T _value)
	{
		Node<T> *node = new Node<T>; //노드 동적할당
		size++;
		node->value = _value;
		node->next = nullptr;
		if(head == nullptr) //머리가 없는 경우
		{
			head = node;
			tail = node;
		}
		else				//머리가 있으면 연결 
		{
			tail->next = node;
			tail = tail->next;
		} 
	}		
}

// O(KN)/O(1)
void mergeKLists(int node, int res, SingleLinked_List<int> List)
{
	int i=0;
	
	List = 
	while( ) //List == 
	{
		for(i=0; i++; i<) 
	}
	return 
}

int main()
{
	int *i_arr;
	SingleLinked_List<int> List_1, List_2, List_3;
	
	List_1.AddNode(1);
	List_1.AddNode(4);
	List_1.AddNode(5);
	List_2.AddNode(1);
	List_2.AddNode(3);
	List_2.AddNode(4);
	List_3.AddNode(2);
	List_3.AddNode(6);
	
	mergeLists()
	
	/*
	printf("Enter linked list:\n");
	
	do
	{
		scanf("%d", &i_arr);
		List.AddNode(*i_arr); 
	} while (*i_arr != '\n');
	*/
	return 0;
	
}	
