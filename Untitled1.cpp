/*
//Problem Number 1.
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b,i;
	cin>>a>>b;
	int arr[a];

	for(i=0;i<a;i++)
	{
		cin>>arr[i];
	}

	sort(arr, arr+a);

	cout<<arr[b-1]<<" ";
	cout<<arr[a-b]<<endl;
}
*/

/*
//Problem Number 2.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,flag,count = 0;
	cin>>n;
	for(i=2; i<=n; i++)
	{
		flag = 0;
		for(j=2;j<=n/2;j++)
		{
			if(i!=j && i%j == 0)
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			cout<<i<<" ";
			count++;
		}
	}
	cout<<endl<<"total prime number is "<<count<<endl;
}
*/

/*
//Problem Number 3.
	Let's say we have a sorted list of integers:
		[2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
	And we want to search for the number 12 in this list using binary search. Here's how the algorithm would work:

	We start by setting two pointers, left and right, to the first and last indices of the list, respectively:

	left = 0
	right = 9

	We calculate the index of the middle element as (left + right) // 2, which in this case is 4:

	middle = 4

	We compare the middle element 10 with the target element 12. Since 10 is less than 12, we know that the
	 target element must be in the right half of the list.

	We update the left pointer to middle + 1, which is 5:

	left = 5
	right = 9

	We calculate the new middle index as (left + right) // 2, which is 7:
	middle = 7
	We compare the middle element 16 with the target element 12. Since 16 is greater than 12, we know that the
	target element must be in the left half of the remaining list.

	We update the right pointer to middle - 1, which is 6:

	css
	Copy code
	left = 5
	right = 6
	We calculate the new middle index as (left + right) // 2, which is 5:

	middle = 5

	We compare the middle element 12 with the target element 12. Since they are equal, we have found the
	target element!

	return middle

	The binary search algorithm found the target element 12 in only three steps, even though the size of the
	list is 10. This demonstrates the efficiency of the algorithm, which has a time complexity of O(log N)
	with respect to the size of the list.

*/
/*
//Problem Number 4.
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,b,i;
	cin>>n;
	int arr[n];

	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cin>>b;
	while(b>0)
	{
		int p,q,sum=0;
		cin>>p>>q;
		for(i=p-1;i<q;i++)
		{
			sum += arr[i];
		}
		cout<<sum<<endl;
		b--;
	}


}
*/

/*
//Problem Number 5.
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,b,i;
	cin>>n;
	int arr[n];

	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cin>>b;
	while(b>0)
	{
		int p,q,sum=0;
		cin>>p>>q;
		for(i=p-1;i<q;i++)
		{
			if(arr[i]>0)
			{
				sum += arr[i];
			}

		}
		cout<<sum<<endl;
		b--;
	}
}
*/
/*
//Problem Number 6.
#include<bits/stdc++.h>
using namespace std;
int findPositionByBinarySearch(int arr[],int n, int value)
{
	int lb = 0, rb = n, mid = (lb + (rb-lb))/2;
	while(lb<=rb)
	{
		if(value == arr[mid])
		{
			return mid+1;
			break;
		}
		else if(value>arr[mid])
		{
			lb = mid+1;
			mid = (lb + rb)/2;
		}
		else if(value<mid)
		{
			rb = mid-1;
			mid = (lb + rb)/2;
		}
	}
}
int main ()
{
	int n,i,v;
	cin>>n>>v;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);

	int p = findPositionByBinarySearch(arr, n, v);
	cout<<"Position is : "<<p;

}

*/
/*
//Problem Number 7.
#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	set<int>distinct_integers;
	for(i=0;i<n;i++)
	{
		int num;
		cin>>num;
		distinct_integers.insert(num);
	}
	cout<<distinct_integers.size()<<endl;
}
*/

/*
//Problem Number 8.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,q,i,j,sum=0;
	cin>>p>>q;

	int arr[p][q];

	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			if(i%2 != 0 && j%2 == 0)
			{
				sum += arr[i][j];
			}

		}
	}
	cout<<sum;
}
*/

/*
//Problem Number 9.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,i,j;
	cin>>n>>q;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int count = 0;
	for(i=0;i<n/2;i++)
	{
		int test = arr[i];
		for(j=n-1;j>n/2;j--)
		{
			if((i != j) && (test+arr[j] == q))
			{
				cout<<test<<"+"<<arr[j]<<"="<<q<<endl;
				count++;
			}
		}
	}
	cout<<"total number of case is : "<<count;
}
*/

/*
//Problem Number 10.
For a sorted array, both Bubble Sort and Insertion Sort will have better performance compared to when the
array is unsorted, but Counting Sort may not have any advantage.

Bubble Sort:
When the array is already sorted, Bubble Sort will have the best-case time complexity of O(n). This is because
it only needs to make one pass through the array to confirm that it is already sorted. For example, if we have
an array [1, 2, 3, 4, 5], Bubble Sort will make only one pass and perform no swaps.

Insertion Sort:
Insertion Sort also benefits from a sorted array. In this case, the inner loop of Insertion Sort will exit
quickly as each element is compared to the one before it and found to be in the correct order. This results
in an overall time complexity of O(n) in the best-case scenario, similar to Bubble Sort. For example, if we
have an array [1, 2, 3, 4, 5], Insertion Sort will make one pass and perform no swaps.

Counting Sort:
Counting Sort is not designed to take advantage of a sorted array. Its time complexity is dependent on the
range of the values in the array, not their order. Even if the array is sorted, Counting Sort will still have
to traverse the entire range of values and count the frequency of each element before sorting. Therefore, the
time complexity of Counting Sort for a sorted array will be O(n+k), where k is the range of the values in the
array.

In summary, both Bubble Sort and Insertion Sort will take less time for a sorted array, with a best-case time
complexity of O(n). Counting Sort, on the other hand, may not have any advantage over an unsorted array and
will have a time complexity of O(n+k).

*/

/*
//number 11 - 15
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int value;
	Node *next;

	Node(int val)
	{
		this->value = val;
		next = NULL;
	}
};
int count_node(Node *&head)
{
	Node *temp = head;
	if(temp == NULL)
	{
		return -1;
	}
	else
	{
		int count = 0;
		while(temp)
		{
			count++;
			temp = temp->next;
		}
		return count;
	}
}

void insert_node(Node *&head, int value)
{
	Node *temp = head;
	Node *newNode = new Node(value);
	if(temp == NULL)
	{
		head = newNode;
		return;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;

	}
}

void insert_node_by_position(Node *&head, int position, int value)
{
	Node *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else if(position == 1)
	{
		Node *newNode = new Node(value);
		newNode->next = head;
		head = newNode;
	}
	else if(position > count_node(head)+1)
	{
		cout<<"Position is out of the Range."<<endl;
	}
	else
	{
		int count = 0;
		Node *newNode = new Node(value);
		while(temp)
		{
			count++;
			if(count == position - 1)
			{
				break;
			}
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;


	}
}

void delete_node_by_position(Node *&head, int position)
{
	Node *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else if(position == 1)
	{
		Node *delNode = NULL;
		delNode = head;
		head = delNode->next;
		delete delNode;
	}
	else if(position > count_node(head))
	{
		cout<<"Position is Out of Range."<<endl;
	}
	else
	{
		int count = 0;
		Node *delNode = NULL;
		while(temp)
		{
			count++;
			if(count == position - 1)
			{
				break;
			}
			temp = temp->next;
		}
		delNode = temp->next;
		temp->next = delNode->next;
		delete delNode;
	}
}

void  swapping_between_head_and_tail(Node *&head)
{
	Node *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else if(count_node(head) == 1)
	{
		cout<<"Only one Node is available."<<endl;
	}
	else if(count_node(head) > 1)
	{
		while(temp->next != NULL)
		{
			temp=temp->next;
		}

		swap(head->value,temp->value);
		cout<<"Tail and Head swapped Successfully."<<endl;
	}
}


void move_tail(Node *&head)
{
	Node *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else if(count_node(head) == 1)
	{
		cout<<"Only one Node is available."<<endl;
	}
	else if(count_node(head) > 1)
	{
		while(temp->next->next != NULL)
		{
			temp=temp->next;
			if(temp->next == NULL)
			{
				break;
			}
		}
		Node *delNode = NULL;
		delNode = temp->next;

		insert_node_by_position(head, 1, delNode->value);

		temp->next = NULL;
		delete delNode;

		cout<<"Tail Moved Successfully."<<endl;

	}
}

void display(Node *&head)
{
	Node *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else
	{
		cout<<"List is : ";
		while(temp)
		{
			cout<<temp->value;
			if(temp->next != NULL)
			{
				cout<<" -> ";
			}
			temp = temp->next;
		}
		cout<<endl;
	}
}

int main()
{
	cout<<"1 .  Insert a Value."<<endl;
	cout<<"2 .  Insert Node by Position."<<endl;
	cout<<"3 .  Delete Node by Position."<<endl;
	cout<<"4 .  Swapping between Head and Tail."<<endl;
	cout<<"5 .  Move Tail."<<endl;
	cout<<"8 .  Count Length."<<endl;
	cout<<"9 .  Display."<<endl;
	cout<<"0 .  Exit."<<endl;

	Node *head = NULL;
	int choice = 1,value,position,length;
	while(choice)
	{
		cout<<endl<<"Your Choice : ";
	    cin>>choice;

	    switch(choice)
	    {
		case 1:
			cout<<"enter the value : ";
			cin>>value;
			insert_node(head,value);
			break;

		case 2:
			cout<<"enter the Position to Insert : ";
			cin>>position;
			cout<<"enter the value : ";
			cin>>value;
			insert_node_by_position(head, position, value);
			break;

		case 3:
			cout<<"enter the Position to Delete : ";
			cin>>position;
			delete_node_by_position(head,position);
			break;

		case 4:
			swapping_between_head_and_tail(head);
			break;

		case 5:
			move_tail(head);
			break;

		case 8:
			length = count_node(head);
			break;

		case 9:
			display(head);
			break;

		case 0:
			default : break;
	    }
	}

}
*/

//number 16 - 19

#include<bits/stdc++.h>
using namespace std;
class doublyNode
{
public:
	int value;
	doublyNode *prev;
	doublyNode *next;

	doublyNode(int val)
	{
		this->value = val;
		prev = NULL;
		next = NULL;
	}
};

int count_node(doublyNode *&head)
{
	doublyNode *temp = head;
	if(temp == NULL)
	{
		return -1;
	}
	else
	{
		int count = 0;
		while(temp)
		{
			count++;
			temp = temp->next;
		}
		return count;
	}
}

void insert_node(doublyNode *&head, int value)
{
	doublyNode *temp = head;
	doublyNode *newNode = new doublyNode(value);
	if(temp == NULL)
	{
		head = newNode;
		return;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;

	}
}

void insert_node_by_position(doublyNode *&head, int position, int value)
{
	doublyNode *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else if(position == 1)
	{
		doublyNode *newNode = new doublyNode(value);
		newNode->next = head;
		head = newNode;
	}
	else if(position > count_node(head)+1)
	{
		cout<<"Position is out of the Range."<<endl;
	}
	else
	{
		int count = 0;
		doublyNode *newNode = new doublyNode(value);
		while(temp)
		{
			count++;
			if(count == position - 1)
			{
				break;
			}
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		newNode->prev = temp;


	}
}

void delete_node_by_position(doublyNode *&head, int position)
{
	doublyNode *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else if(position == 1)
	{
		doublyNode *delNode = NULL;
		delNode = head;
		head = delNode->next;
		head->prev = NULL;
		delete delNode;
	}
	else if(position > count_node(head))
	{
		cout<<"Position is Out of Range."<<endl;
	}
	else
	{
		int count = 0;
		doublyNode *delNode = NULL;
		while(temp)
		{
			count++;
			if(count == position - 1)
			{
				break;
			}
			temp = temp->next;
		}
		delNode = temp->next;
		temp->next = delNode->next;
		delNode->next->prev = temp;
		delete delNode;
	}
}

void  swapping_between_head_and_tail(doublyNode *&head)
{
	doublyNode *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else if(count_node(head) == 1)
	{
		cout<<"Only one Node is available."<<endl;
	}
	else if(count_node(head) > 1)
	{
		while(temp->next != NULL)
		{
			temp=temp->next;
		}

		swap(head->value,temp->value);
		cout<<"Tail and Head swapped Successfully."<<endl;
	}
}

void move_head(doublyNode *&head)
{
	doublyNode *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else if(count_node(head) == 1)
	{
		cout<<"Only one Node is available."<<endl;
	}
	else if(count_node(head) > 1)
	{

		doublyNode *delNode = head;
		head = delNode->next;
		head->prev = NULL;

		insert_node_by_position(head, count_node(head)+1, delNode->value);

		delete delNode;

		cout<<"Head Moved Successfully."<<endl;

	}
}

void display(doublyNode *&head)
{
	doublyNode *temp = head;
	if(temp == NULL)
	{
		cout<<"NO Nodes are in the List."<<endl;
	}
	else
	{
		cout<<"List is : ";
		while(temp)
		{
			cout<<temp->value;
			if(temp->next != NULL)
			{
				cout<<" <=> ";
			}
			temp = temp->next;
		}
		cout<<endl;
	}
}

int main()
{
	cout<<"1 .  Insert a Value."<<endl;
	cout<<"2 .  Insert Node by Position."<<endl;
	cout<<"3 .  Delete Node by Position."<<endl;
	cout<<"4 .  Swapping between Head and Tail."<<endl;
	cout<<"5 .  Move Head."<<endl;
	cout<<"8 .  Count Length."<<endl;
	cout<<"9 .  Display."<<endl;
	cout<<"0 .  Exit."<<endl;

	doublyNode *head = NULL;
	int choice = 1,value,position,length;
	while(choice)
	{
		cout<<endl<<"Your Choice : ";
	    cin>>choice;

	    switch(choice)
	    {
		case 1:
			cout<<"enter the value : ";
			cin>>value;
			insert_node(head,value);
			break;

		case 2:
			cout<<"enter the Position to Insert : ";
			cin>>position;
			cout<<"enter the value : ";
			cin>>value;
			insert_node_by_position(head, position, value);
			break;

		case 3:
			cout<<"enter the Position to Delete : ";
			cin>>position;
			delete_node_by_position(head,position);
			break;

		case 4:
			swapping_between_head_and_tail(head);
			break;

		case 5:
			move_head(head);
			break;

		case 8:
			length = count_node(head);
			if(length == -1)
			{
				cout<<"No Nodes are in the List."<<endl;
			}
			else
			{
				cout<<"Length of the List is : "<<length<<endl;
			}

			break;

		case 9:
			display(head);
			break;

		case 0:
			default : break;
	    }
	}

}
















