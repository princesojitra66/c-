#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkList
{
public:
    Node *head;
    int count;

    LinkList()
    {
        this->head = NULL;
        this->count = 0;
    }

     void insert_At_beginning(int data)
    {

        Node *node = new Node(data);
        node->next = head;
        head = node;
        cout << "Node inserted at start successfully..." << endl;
        count++;
    }

    void display()
    {
        Node *temp = head;
        if(temp == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void search(int position)
    {
        Node *temp = head;
        for (int i = 1; i < position; i++)
        {
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
   void Delete(int position){
		Node *temp = this->head;
		if(position==1){
			this->head=temp->next;
                cout<< " Node deleted successfully..." << endl;
			return;
		}
		for(int i=1;i<position;i++){
			if(i==position-1){
				temp->next=temp->next->next;
                cout<< " Node deleted successfully..." << endl;
				return;
			}
			temp=temp->next;
		}
	}

    void reverse()
        { 
            Node *prev = NULL;
            Node *current = head;
            Node *next = NULL;
            if (head == NULL)
            {
                cout << "List is empty" << endl;
                return;
            }
            while (current != NULL)
            {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            head = prev;
        }

};
int main()
{
    int choice;
    LinkList list;
    do
    {
        cout << "======MENU======" << endl;
        cout << " Press 1. for insert_at_beginning." << endl;
        cout << " Press 2. for dispaly." << endl;
        cout << " Press 3. for search." << endl;
        cout << " Press 4. for delete_node." << endl;
        cout << " Press 5. for reverse." << endl;
        cout << " Press 0. for exit." << endl;
        cout << "Enter your choice :- ";
        cin >> choice;
        switch (choice)
        {
        case 1:
                int data;
                cout << "Enter the data: ";
                cin >> data;
                list.insert_At_beginning(data);
            break;
        case 2:
                list.display();
            break;    
        case 3:
                int position;
                cout << "Enter the position: ";
                cin >> position;
                list.search(position);
            break;
        case 4:
                int delete_position;
                cout << "Enter the position: ";
                cin >> delete_position;
                list.Delete(delete_position);
            break;
        case 5:
                list.reverse();
            break;
        case 0:
                cout << "Exiting from program..." << endl;
            break;
        default:
                cout << "Invalid choice" << endl;
                
            break;
        }
    } while (choice != 0);
}