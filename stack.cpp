#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int top = -1;
using namespace std;
void push(int arr[],int n,int val);
void pop(int arr[],int n);
void display(int arr[],int n);
int main() {
	int choice,item,arr[100],n;
    cout << "Enter the size of stack:";
    cin >> n;
	
	while (1) {
		cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\n" ;
		cout << "Enter the choice:";
		cin >> choice;
        switch (choice)
        {
        case 1:
            if (top == n - 1) {
                cout << "\nStack overflow!"<<endl;
            }
            else{
                cout << "\nEnter the element to be pushed:"<<endl;
                cin >> item;
                push(arr,n,item);
            }
            break;
        case 2:
            if (top == -1) {
                cout << "\nStack Underflow!"<<endl;
            }
            else {
                pop(arr,n);
            }
            break;
        case 3:
            display(arr,n);
            break;
        case 4:
            exit(0);

        default:
            cout << "\nInvalid choice!!";
        }
	}
}
void push(int arr[], int n, int val) {
    arr[++top] = val;
}
void pop(int arr[], int n) {
    cout << "\n" << arr[top] << " element popped!" << endl;
    top = top - 1;
}
void display(int arr[], int n) {
    cout << "\nElements present in the stack: \n";
    for (int i = top; i >= 0; --i)
        cout << arr[i] << ",";
}