#include<iostream>
#define MAX_SIZE 100
using namespace std;

class Stack
{
        private:
                int ele;
                int        Top=0;
                int arr_Stack[MAX_SIZE];

        public:

                void Push()
                {
                        if(Top==MAX_SIZE-1)
                        {
                                cout<<"You cannot inserted Becoz Stack is full.....Overflow"<<endl;
                        }
                        else
                        {
                                cout<<"Enter element for insertion: ";
                                cin>>ele;

                                Top=Top+1;
                                arr_Stack[Top]=ele;
                                cout<<endl<<"Element inserted Successfully";

                        }
                }

                void Pop()
                {
                        if(arr_Stack[Top]==0)
                        {
                                cout<<"Your Stack is empty....Underflow"<<endl;
                        }
                        else
                        {
                                Top--;
                                cout<<"Element Poped successfully"<<endl;
                        }
                }

                void Display()
                {
                        for(int i=Top;i>0;i--)
                        {
                                cout<<arr_Stack[i]<<" ";
                        }
                }
};
int main()
{
         Stack s1;
         int val=1;
         int choice;
        do
        {
                cout<<endl;
                        cout<<"1.Push"<<endl;
                cout<<"2.Pop"<<endl;
                cout<<"3.Display"<<endl;
                cout<<"Enter Your Choice:"<<endl;
                cin>>choice;

                switch(choice)
                {
                        case 1:
                                s1.Push();
                                break;

                        case 2:
                                s1.Pop();
                                break;

                        case 3:
                                s1.Display();
                                break;

                        default:
                                val=0;
                                cout<<"Invalid choice"<<endl;
                }

        }while(val);

        return 0;
}
