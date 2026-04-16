#include<iostream>
#define size 5
using namespace std;

template<class type>
class Stack
{
	public:
		int top, count;
		type stk[size];
		//      public:
		Stack()
		{
			top=-1;
		}

		void display()
		{
			int i;
			if(top==-1)
			{
				cout<<"\033[31;5mSTACK EMPTY\033[0m"<<endl;
				return;
			}
                        cout<<endl;
			for(i=0;i<=top;i++)
				cout<<stk[i]<<" ";
			cout<<endl;
		}

		void Push()
		{
			if(top>=size-1)
			{      
				cout<<"\033[31;5mSTACK OVERFLOW\033[0m"<<endl;
				return;
			}
			cout<<"...Enter the data..."<<endl;
			if (!(cin >> stk[++top])) {
				cout << "\nInvalid input\n";
				cin.clear();              // clear error flag
				cin.ignore(1000, '\n');   // discard wrong input
				--top;
				return;
			}
		}

		void Pop()
		{
			if(top==-1)
			{
				cout<<"\033[31;5mSTACK EMPTY\033[0m"<<endl;
				return;
			}
			else if(size<=-1)
			{
				cout<<"\033[31;5mSTACK UNDERFLOW\033[0m"<<endl;
				return;
			}
			cout<<"\n\033[31mDeleted: "<<stk[top--]<<"\033[0m\n"<<endl;
		}

		void data_stk()
		{
			int op;
			if(top>=0)
			{
				cout<<"\n\033[32m1:     Continue with old object\n\n2.     Create new object\033[0m"<<endl;
				cin>>op;
				switch(op)
				{
					case 1: break;
					case 2: top=-1;break;
					default: cout<<"\033[31;5minvalid option :(\033[0m"<<endl;
				}
			}

			while(1)
			{
				cout<<"\n\033[33;1m1.Push  2.Pop  3.Display  4.Main Menu\n\033[0m"<<endl;
				cin>>op;
				switch(op)
				{
					case 1:Push();break;
					case 2:Pop();break;
					case 3:display();break;
					case 4:return;
					default: cout<<"\n\033[31mInvalid Option\033[0m\n"<<endl;
				}//switch
			}
		}

};
int main()
{
	int op;
	Stack<int>c;
	Stack<int>obj1;
	Stack<char>obj2;
	Stack<float>obj3;
	Stack<double>obj4;
	Stack<string>obj5;
	while(1)
	{
		cout<<"\n\033[36;1m         ***MAIN MENU**\033[0m\n"<<endl;
		cout<<"+--------------------------------+"<<endl;
		cout<<"|   1   |       INTEGER          |"<<endl;
		cout<<"|       |                        |"<<endl;
		cout<<"|   2   |       CHARACTER        |"<<endl;
		cout<<"|       |                        |"<<endl;
		cout<<"|   3   |       FLOAT            |"<<endl;
		cout<<"|       |                        |"<<endl;
		cout<<"|   4   |       DOUBLE           |"<<endl;
		cout<<"|       |                        |"<<endl;
		cout<<"|   5   |       STRING           |"<<endl;
		cout<<"|       |                        |"<<endl;
		cout<<"|   6   |       EXIT             |"<<endl;
		cout<<"+--------------------------------+\n"<<endl;

		cout<<"\033[36;1m**Enter the Choice**\033[0m"<<endl;

		cin>>op;
		switch(op)
		{
			case 1: c.count=0;
				cout<<"\n+++++ Int stack application ready to use ++++"<<endl;
				obj1.data_stk();
				break;
			case 2: c.count=0;
				cout<<"\n+++++ Char stack application ready to use +++++"<<endl;
				obj2.data_stk();
				break;
			case 3: c.count=0;
				cout<<"\n+++++ float stack application ready to use +++++"<<endl;
				obj3.data_stk();
				break;
			case 4: c.count=0;
				cout<<"\n+++++ Double stack application ready to use +++++"<<endl;
				obj4.data_stk();
				break;
			case 5: c.count=0;
				cout<<"\n+++++ String stack application ready to use +++++"<<endl;
				obj5.data_stk();
				break;

			case 6:exit(0);
			default:
			       ++(c.count);
			       if(c.count==1)
				       cout<<"\n\033[32;1m***Please read the options carefully***\n\033[0m"<<endl;
			       else if(c.count==2)
				       cout<<"\n\033[31;5m^^^^^Last chance please take care^^^^^\033[0m\n"<<endl;
			       else if(c.count==3){
				       cout<<"\n\033[32;1mThanks for using our application, Try again after some times \033[0m\n"<<endl;;
				       exit(0);}
		}//switch
	}//while(1)
}//main

