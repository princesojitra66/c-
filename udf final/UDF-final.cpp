#include<iostream>
#include<array>
using namespace std;

class Node
{
    public:
    Node *node;
    int data;
    Node(int data)
    {
        this->data = data;
        this->node = NULL;
    }
};

class LinkedList
{
    public:
    Node *head;
    LinkedList()
    {
        this->head = NULL;
    }

    void createLinkedList(int n)
    {
        int value;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the value of " << i + 1 << " node: ";
            cin >> value;
            Node *newNode = new Node(value);
            if (head == NULL)
            {
                head = newNode;
            }
            else
            {
                Node *temp = head;
                while (temp->node != NULL)
                {
                    temp = temp->node;
                }
                temp->node = newNode;
            }
        }   
        cout << "Linked list created." << endl;
    }

    void insertNode(int value)
    {
        int pos;
        cout << "Enter the position of the node to insert: ";
        cin >> pos;
        if (pos == 0)
        {
            Node *newNode = new Node(value);
            newNode->node = head;
            head = newNode;
            cout << "Node inserted successfully." << endl;
        }
        else 
        {
            Node *temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->node;
            }
            Node *newNode = new Node(value);
            newNode->node = temp->node;
            temp->node = newNode;
            cout << "Node inserted successfully." << endl;
        }
    }

    void deleteNode(int pos)
    {
        if (pos == 0)
        {
            Node *temp = head;
            head = head->node;
            cout << "Node deleted successfully." << endl;
        }else
        {
            Node *temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->node;
            }
            Node *temp2 = temp->node;
            temp->node = temp2->node;
            cout << "Node deleted successfully." << endl;
        }
    }

    void displayLinkedList()
    {
        Node *temp = head;          
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->node;
        }   
        cout << endl;       
    }
};

class SortArray
{
    public:
    void merge(int arr[], int start, int mid, int end)
    {
        int n1 = mid - start + 1;
        int n2 = end - mid;
        int left[n1], right[n2];
        for (int i = 0; i < n1; i++)
        {
            left[i] = arr[start + i];
        }
        for (int j = 0; j < n2; j++)
        {
            right[j] = arr[mid + 1 + j];
        }
        int i = 0, j = 0, k = start;
        while (i < n1 && j < n2)
        {
            if (left[i] <= right[j])
            {
                arr[k] = left[i];
                i++;
            }
            else
            {
                arr[k] = right[j];
                j++;
            }
            k++;
        }
        while (i < n1)
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    void mergeSort(int arr[], int start, int end)
    {
        if (start < end)
        {
            int mid = (start + end) / 2;
            mergeSort(arr, start, mid);
            mergeSort(arr, mid + 1, end);
            merge(arr, start, mid, end);
        }
    }
    void quickSort(int arr[], int start, int end)
    {
        if (start < end)
        {
            int pivot = partition(arr, start, end);
            quickSort(arr, start, pivot - 1);
            quickSort(arr, pivot + 1, end);
        }
    }
    int partition(int arr[], int start, int end)
    {
        int pivot = arr[end];
        int i = start - 1;
        for (int j = start; j < end; j++)
        {
            if (arr[j] <= pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[end]);
        return i + 1;
    }
};
class BinarySearch
{
    public:
    void binarySearch(int arr[], int start, int end, int value)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == value)
        {
            cout << "Value found at index " << mid << endl;
        }
        else if (arr[mid] > value)
        {
            binarySearch(arr, start, mid - 1, value);
        }
        else if (arr[mid] < value)
        {
            binarySearch(arr, mid + 1, end, value);
        }
        else
        {
            cout << "Value not found in the array." << endl;
        }
    }

};
int main()
{
    LinkedList l1;
    SortArray s1;
    BinarySearch s3;
    int choice1;
    do{
        cout << "========DSA Algorithm=======" << endl;
        cout << "press 1. for create and modify linked list." << endl;
        cout << "Press 2. for merge sort and quick sort." << endl;
        cout << "press 3. for search a value in a sorted array using binary search." << endl;
        cout << "Press 0. for exit." << endl;
        cout << "Enter your choice." << endl;
        cin >> choice1;
        switch (choice1)
        {
            case 1:
            {
                int choice2;
                do
                {
                    cout << "========Linked List========" << endl;
                    cout << "Press 1. for create a linked list." << endl;
                    cout << "Press 2. for insert a node in a linked list." << endl;
                    cout << "Press 3. for delete a node in a linked list." << endl;
                    cout << "Press 4. for display a linked list." << endl;
                    cout << "Press 0. for exit." << endl;
                    cout << "Enter your choice." << endl;
                    cin >> choice2;
                    switch (choice2)
                    {
                        case 1:
                        {
                            int n;
                            cout << "How many node you want to add in linked list.: ";
                            cin >> n;
                            l1.createLinkedList(n);
                            break;
                        }
                        case 2:
                        {
                            int value;
                            cout << "Enter the value of the node to insert: ";
                            cin >> value;
                            l1.insertNode(value);
                            break;
                        }
                        case 3:
                        {
                            int pos;
                            cout << "Enter the position of the node to delete: ";
                            cin >> pos;
                            l1.deleteNode(pos);
                            break;
                        }
                        case 4:
                        {
                            l1.displayLinkedList();
                            break;
                        }
                        case 0:
                        {
                            cout << "Exiting from program." << endl;
                            break;
                        }
                    }
                } while (choice2 != 0);
                break;
            }
    
            case 2:
            {
                int choice3;
                do
                {
                    cout << "========Sorting algorithms========" << endl;
                    cout << "Press 1. for merge sort." << endl;
                    cout << "Press 2. for quick sort." << endl;
                    cout << "Press 0. for exit." << endl;   
                    cout << "Enter your choice." << endl;
                    cin >> choice3;
                    switch (choice3)
                    {
                        case 1:
                        {
                            int arr[100];
                            int n;
                            cout << "Enter the number of elements in the array: ";
                            cin >> n;
                            cout << "Enter the elements of the array: ";
                            for (int i = 0; i < n; i++)
                            {
                                cout << "Enter value: " << i+1 << " : ";
                                cin >> arr[i];
                            }
                            s1.mergeSort(arr, 0, n - 1);
                            cout << "Sorted array: ";
                            for (int i = 0; i < n; i++)
                            {
                                cout << arr[i] << " ";
                            }
                            cout << endl;
                            break;
                        }
                        case 2:
                        {
                            int arr[100];
                            int n;
                            cout << "Enter the number of elements in the array: ";
                            cin >> n;
                            cout << "Enter the elements of the array: ";
                            for (int i = 0; i < n; i++)
                            {  
                                cout << "Enter value: " << i+1 << " : ";
                                cin >> arr[i];
                            }
                            s1.quickSort(arr, 0, n - 1);
                            cout << "Sorted array: ";
                            for (int i = 0; i < n; i++)
                            {
                                cout << arr[i] << " ";
                            }
                            cout << endl;
                            break;
                        }
                        case 0:
                        {
                            cout << "Exiting from program." << endl;
                            break;
                        }
                    }
                } while (choice3 != 0);
                break;
            }
    
            case 3:
            {
                int arr[100];
                int n;
                cout << "Enter the number of elements in the array: ";
                cin >> n;
                cout << "Enter the elements of the array: ";
                for (int i = 0; i < n; i++) 
                {
                    cout << "Enter value: " << i+1 << " : ";
                    cin >> arr[i];
                }
                int value;
                s1.mergeSort(arr, 0, n - 1);
                cout << "Enter the value to search: ";
                cin >> value;
                s3.binarySearch(arr, 0, n - 1, value);
                break;
            }
    
            case 0:
            {
                cout << "Exiting from program." << endl;
                break;
            }
        }
    }while (choice1 != 0);
    
}