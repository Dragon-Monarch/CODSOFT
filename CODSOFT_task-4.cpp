#include<iostream>
#include<windows.h>
using namespace std;


void print_tasks(string tasks[], int task_count)
{
    cout<<"Tasks To Do: "<<endl;
    cout<<"-----------------------------------"<<endl;
    for(int i=0; i<task_count; i++)
    {
        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
    }
}


int main()
{
    string tasks[15]= {""};

    int task_count=0;
    int option =-1;
    while(option !=0)
    {
        cout<<"--- To Do List! ---"<<endl;
        cout<<"1 - To Add a new Task"<<endl;
        cout<<"2 - To View Tasks"<<endl;
        cout<<"3 - To mark Task as completed"<<endl;
        cout<<"4 - To remove the Tasks"<<endl;
        cout<<"0 - Terminate the program"<<endl;
        cin>>option;

        switch(option)
        {
        case 1:
            {
                if(task_count >14)
                {
                    cout<<"'''TASK LIST IS FULL'''"<<endl;
                }
                else
                {
                    cout<<"Enter a New Task: ";
                    cin.ignore();
                    getline(cin,tasks[task_count]);
                    task_count++;
                }
                break;
            }
        case 2:
            system("cls");
            print_tasks(tasks, task_count);
            break;
        case 3:
            int task_number;
            cout<<"Enter the task no. to mark as completed: ";
            cin>>task_number;
            if(task_number >=0 && task_number <task_count){
                task_number=true;
                cout<<"Task "<< task_number << " marked as completed."<<endl;
            
            }else
            {
                cout<<"Invalid task."<<endl;
                break;
            }
        case 4:
            {
                system("cls");
                print_task(tasks,task_count);
                int del_task=0;
                cout<<"Enter A task to delete: ";
                cin>>del_task;

                if(del_task<0 || del_task>14)
                {
                    cout<<"You Entered Invalid Task no."<<endl;
                    break;

                }
                for(int i=del_task ; i<task_count; i++)
                {
                    tasks[i]= tasks[i+1];
                }
                task_count= task_count -1;
                break;
            }
        case 0:
        cout<<"Terminate the Program - -- --- ---------"<<endl;
            break;
        default:
            cout<<"You entered Invalid Value!"<<endl;

        }

    }

    return 0;
}
