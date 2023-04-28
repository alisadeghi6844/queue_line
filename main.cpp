#include <iostream>

using namespace std;

int queue_size;
int* queue;
int front = -1;
int rear=-1;
int result;

int addQueue(int value){
    if(rear == (queue_size-1)){
        return 0;
    }else{
        rear++;
        queue[rear]=value;
        return 1;
    }
}

int removeItem(){
    if(rear==front){
        return 0;
    }else{
        front++;
        queue[front]=NULL;
        return 1;
    }
}

int show(){
    if(rear!=-1){
        for(int i=0;i<queue_size;i++){
            cout << queue[i];
        }
    }
}

int main()
{
    cout<<"place inter queue size";
    cin>>queue_size;
    queue = new int[queue_size];
    int command;
    while(true){
    cout << "Enter 1 to add ; Enter 2 to delete ; Enter 3 to show ; Enter 4 to exit";
    cin>>command;

    switch(command){
case 1:
    int value;
    cout << "Enter your value";
    cin >> value;
    result = addQueue(value);
    if(result == 0){
        cout << "queue is full";
    }else{
    cout << "add item to queue is successful";
    }
    break;
case 2:
    result = removeItem();
    if(result==0){
        cout << "queue is empty";
    }else{
        cout << "remove is successful";
    }
    break;
case 3 :
    show();
    break;
case 4 :
    return 0;
    break;
default:
    cout << "command is not definde";
    break;
    }
    }
    return 0;
}
