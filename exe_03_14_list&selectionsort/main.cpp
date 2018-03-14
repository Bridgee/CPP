#include <iostream>
#include "Node.h"
#include "List.h"
using namespace std;

void SelectionSort(int Arr[], int n)
{
    for (int i= 0; i < n; i++)
    {
        int idxMini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Arr[j] < Arr[idxMini])
                idxMini = j;
        }
        swap(Arr[i], Arr[idxMini]);
    }
}

int main()
{
    cout << "Test for List" << endl;
    List *my_list = new List;
    my_list->PrintList();

    cout<< "add Something" << endl;
    my_list->AddListTail(1);
    my_list->AddListTail(2);
    my_list->AddListTail(3);
    Node *n1 = new Node;
    Node *n2 = new Node;
    n1->setData(4);
    n2->setData(5);
    my_list->AddListTail(n1);
    my_list->AddListTail(n2);
    my_list->PrintList();
    cout << "Length = " << my_list->Length() << endl;

    my_list->AddList(99,3);
    my_list->PrintList();
    cout << "Length = " << my_list->Length() << endl;

    my_list->AddList(88);
    my_list->PrintList();
    cout << "Length = " << my_list->Length() << endl;

/////////////////////////////////////////////////////////////////////////


    int arr[my_list->m_listLength];
    for (int i = 0; i < my_list->m_listLength; i++)
    {
        arr[i] = my_list->VisitList(i);
    }

    for (int i = 0; i < my_list->m_listLength; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "Now We have a array" << endl;


//////////////////////////////////////////////////////////////////////////

    SelectionSort(arr, my_list->m_listLength);
    for (int i = 0; i < my_list->m_listLength; i++)
        {
            cout << arr[i] << ", ";
        }
    cout << "Sorted" << endl;

    int testArr[8] = {4, 3, 5, 9, 10, 7, 2, 6};
    SelectionSort(testArr, 8);
    for (int i = 0; i < 8; i++)
        {
            cout << testArr[i] << ", ";
        }
    cout << "Sorted" << endl;
/*
    int tail1;
    my_list->DeleteListTail(tail1);
    my_list->PrintList();
    cout << "Length = " << my_list->Length() << endl;

    int tail2;
    my_list->DeleteList(tail2);
    my_list->PrintList();
    cout << "Length = " << my_list->Length() << endl;

    int tail3;
    my_list->DeleteList(tail3,3);
    my_list->PrintList();
    cout << "Length = " << my_list->Length() << endl;

    int tail4;
    my_list->DeleteList(tail4,100);
    my_list->PrintList();
    cout << "Length = " << my_list->Length() << endl;

    cout << "Deleted Data: " << tail1 <<", " << tail2 <<", "<< tail3 << endl;

    {
        int arr[my_list->m_listLength];
        for (int i = 0; i < my_list->m_listLength; i++)
        {
            arr[i] = my_list->VisitList(i);
        }

        for (int i = 0; i < my_list->m_listLength; i++)
        {
            cout << arr[i] << ", ";
        }
        cout << "finished" << endl;
    }
*/
    return 0;
}
