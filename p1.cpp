#include <iostream>
using namespace std;
class mainmenu1{
    public:
    int size, item , k, bubblesort,num,N=0 ;
	const int lb=0;
	int* A,*left,*right; //Pointer for Array
	int FA,RA;
	int*Q; // For Queue
	int*S; // For Stack
	int element , index, chi;
int choice,sitem;
		struct Node{ 
        public:
        	Node*prev;
        int info;
        Node* next;
    };
		 Node* start=NULL;
    Node*ptr=start;
    Node*TOP=NULL;   // For stack on Sing;e linke list
    Node*TOP_DLL=NULL;   //For Stack Double linked list 
    int Top=lb-1;  //For Stack On Array 
	Node*F=NULL,*R=NULL; // For Queue On linked List 
		void main_menu(){
	cout<<" _____________________________________________________________________________________ "<<endl;
	cout<<"|                                                                                     |"<<endl;
	cout<<"|                              Data structure and algorithms                          |"<<endl;
	cout<<"|                           BSCS-3A(Spring 2023), Obaid hussain                       |"<<endl;
	cout<<"|                            Assigment#1 (Data Structure Array)                       |"<<endl;
	cout<<"|                              Data structure and algorithms                          |"<<endl;   
	cout<<"|_____________________________________________________________________________________|"<<endl<<endl;
	cout<<endl;
	cout<<" _____________________________________________________________________________________ "<<endl;
    cout<<"|______________________________________MAIN MENU______________________________________|"<<endl<<endl;

cout<<"1:- Data Structure of Array"<<endl;
cout<<"2:- Data Structure of Stack"<<endl;
cout<<"3:- Data Structure of queue"<<endl;
cout<<"4:- Data Structure of Linked List"<<endl;
cout<<"5:- Exit Program"<<endl;
cout<<"kindly enter your choice:";
cin>>num;
cout<<endl<<endl;
switch(num){
	case 1:
		Data_structure_array();
	break;
}
		}
		void Data_structure_array(){
			
			start4:
	cout<<" _____________________________________________________________________________________ "<<endl;
    cout<<"|_______________________________Data Structure Of Array_______________________________|"<<endl<<endl;
	
	cout<<" _____________________________________________________________________________________ "<<endl;
	cout<<"|______________________________Kindly enter your array size___________________________|"<<endl<<endl;
				
	cout << "Enter Array Size:";
	cin >> size;
	int Array[size];
	if(size<=1){
		cout<<"Invalid insertion!";
        return ;
	}
	int ent;
	start:
		cout<<endl;
	cout<<" _____________________________________________________________________________________ "<<endl;
    cout<<"|______________________________________MAIN MENU______________________________________|"<<endl<<endl;
  	cout<<"1)    Traverse"<<endl;
	cout<<"2)    Insertion"<<endl;
	cout<<"3)    Deletion "<<endl;
	cout<<"4)    Searching"<<endl;
	cout<<"5)    Sorting"<<endl;
	cout<<"6)    Exit"<<endl<<endl;
	cout<<"Enter you choice:";
	cin>>ent;
//	---------> For traverse <---------
	if(ent == 1){
        cout<<endl;
	cout<<" _____________________________________________________________________________________ "<<endl;
    cout<<"|______________________________________Traverse_______________________________________|"<<endl<<endl;
	
		if(N==0){
			cout<<endl<<"Array is empty";
			return;
		}
		cout<<endl<<"Your Array is:";
		for(int i=0; i<=(N+lb-1); i++){
			cout<<endl<<"["<<Array[i]<<"]"<<endl;
		}
	
	
		

        cout << endl<<endl;
        int choc;
	cout<<" _____________________________________________________________________________________ "<<endl;
    cout<<"|_____________________Main menu after implementation of operation_____________________|"<<endl<<endl;
        cout<<"1- want to re-insert size and elements?"<<endl;
        cout<<"2- want to Go back to the main menu?"<<endl;
        cout<<"3- Exit?"<<endl<<endl;
        cout<<"Enter your choice:";
        cin>>choc;
        switch(choc){
        	case 1:
        		goto start4;
        		break;
        	case 2:
        		goto start;
        		break;
        	case 3:
        		return;
        		break;
        	default:
                cout << "Invalid choice!!" << endl;
                break;
		}
	}
//	---------> For insertion <---------
	else if(ent == 2){
       start5:
		cout<<endl<<"Enter the value you want to insert:";
		cin>>item;
		if(N==size){
			cout<<endl<<"Array is already full";
			return;
		}	
		cout<<endl<<"Enter the position in which you want to insert the element:";
		cin>>k;
		if((k<lb) || (k>(N+lb))){
			cout<<endl<<"Invalid Selection";
			return;
		}
		else{
			for(int i=(N+lb-1); i>=k; i--){
				Array[i+1]=Array[i];
			}
				Array[k]=item;
				N++;
				cout<<endl<<"Insertion Completed";	
		}
	
    	cout<<endl;
    int choc;
  	cout<<" _____________________________________________________________________________________ "<<endl;
    cout<<"|_____________________Main menu after implementation of operation_____________________|"<<endl<<endl; 
        cout<<"1- again insertion?"<<endl;
        cout<<"2- want to Go back to the main menu?"<<endl;
        cout<<"3- You want to see the current changes?";
        cout<<"4- Exit?"<<endl<<endl;
        cout<<"Enter your choice:";
        cin>>choc;
        switch(choc){
        	case 1:
        		goto start5;
        		break;
        	case 2:
        		goto start;
        		break;
        	case 3:
    cout<<" _____________________________________________________________________________________ "<<endl;
    cout<<"|____________________________Printing Array after insertion___________________________|"<<endl<<endl;
		cout<<endl;
		cout << "elements after insertion are:";
        for (int i = 0; i < size; i++) {
        cout << Array[i] << " ";
        }
        	case 4:
        		return;
        		break;
        	default:
                cout << "Invalid choice." << endl;
                break;
		}
        
	}

//	---------> For deletion <---------
	else if(ent == 3){
	if(N==0){
			cout<<endl<<"Array is Empty";
			return;
		}
		cout<<endl<<"Enter the position of value you want to delete";
		cin>>k;
		if((k<lb)||(k>(N+lb-1))){
            cout<<endl<<"You have choosed invalid postion";
            return;
        }else{
            item=Array[k];
            for(int i=(k+1); i<=(N+lb-1); i++){
                Array[i-1]=Array[i];
            }
            N--;
            cout<<endl<<"Deletion Completed";
        }
	
	        cout << endl<<endl;
                int choc;
        cout<<"-----> Menu Show after implementation of operations<-----"<<endl<<endl;
        cout<<"1- want to re-insert size and elements?"<<endl;
        cout<<"2- want to Go back to the main menu?"<<endl;
        cout<<"3- Exit?"<<endl<<endl;
        cout<<"Enter your choice:";
        cin>>choc;
        switch(choc){
        	case 1:
        		goto start4;
        		break;
        	case 2:
        		goto start;
        		break;
        	case 3:
        		return;
        		break;
        	default:
                cout << "Invalid choice." << endl;
                break;
		}
}
//	---------> For searching <---------	
	else if(ent==4){
			cout<<endl;
			cout<<"-----> Searching <-----"<<endl;
            cout<<"1) Single Search"<<endl;
         	cout<<"2) Multi Search"<<endl;
			cout<<"3) Back"<<endl;
			cout<<"4) Exit"<<endl;
			int ent2;
			cout<<"Enter your choice:";
			cin>>ent2;
			if(ent2 == 1){
			 cout<<endl<<"Enter the value which you want to searh for";
        cin>>item;
		int searchtype;
		cout<<endl<<"{Single search includes}:\n"
		"1)Linear Search\n"
		"2)Binary Search\t";
		cin>>searchtype;
		switch(searchtype){
			case 1:
			{	for(int i=lb; i<=(N+lb-1); i++){
                    if(A[i]==item){
                        cout<<endl<<item<<" Found";
                    return;
            		}
            	}cout<<endl<<item<<" not Found";
			}break;
			case 2:{
				bubblesort=1;
//				BubbleSort();
				int low=lb;
				int high=(N+lb-1);
				int mid;
				while(low<=high){
					mid=(low+high)/2;
						if(A[mid]==item){
							cout<<endl<<item<<" found";
							return;
						}else if(A[mid]>item){
							high=mid-1;
						}else{
							low=mid+1;
						}
				}
			cout<<endl<<item<<" not found";
			}break;
			default:
				cout<<"Invalid Selection";
			}
				
			}
			else if(ent2 == 2){
				cout<<endl<<"Enter the value which you want to searh for";
    	cin>>item;
		int count=0, searchtype;
		cout<<endl<<"Choose your operation\n"
		"1)Linear Search\n"
		"2)Binary Search\t";
		cin>>searchtype;
		switch (searchtype)
		{
		case 1:{
			for(int i=lb; i<=(N+lb-1); i++){
                if(A[i]==item){
                    count+=1;
                }
            }
            if(count==0){
                cout<<endl<<item<<" not found";
            return;
            }else{
	            cout<<endl<<item<<" found "<<count<<" times";
            }
		}break;
		case 2:{
			bubblesort=1;
//			BubbleSort();
			int low=lb;
			int high=(N+lb-1);
			int mid;
			while(low<=high){
				mid=(low+high)/2;
					if(A[mid]==item){
						count++;
						int i=mid-1;
						while((i>=lb)&&(A[i]==item)){
								count++;
								i--;
						}
						 i=mid+1;
						while ((i<(N+lb))&&(A[i]==item)){
								count++;
								i++;
						}
						cout<<endl<<item<<" found "<<count<<" times.";
						return;
						}else if(A[mid]>item){
							high=mid-1;
						}else{
							low=mid+1;
						}
				}
			cout<<endl<<"Item not found";
		}break;
		default:
			cout<<"Invalid Selection";
		}
			
		}}
	else if(ent==5){
			cout<<endl<<endl;
			cout<<"-----> Sorting Algoritham <-----"<<endl;
			cout<<"1) Bubble sort"<<endl;
			cout<<"2) Insetion sort"<<endl;
			cout<<"3) Selection sort"<<endl;
			cout<<"4) Back"<<endl;
			cout<<"5) Exit"<<endl;
			int ent3;
			cout<<"enter your choice:";
			cin>>ent3;
			if(ent3 == 1){
				cout<<endl<<"Enter the value which you want to bubble sort for ";
		cin>>item;
		int bubblesorttype;
		cout<<endl<<"choose your operation\n"
			"1)Ascending \n"
			"2)Descending\t";
		cin>>bubblesorttype;	 
		int last=(N+lb-1);
		switch(bubblesorttype){
			case 1:{
				for(int i=0; i<(N-1); i++){
					for(int j=lb; j<=(last-1); j++){
						if(A[j]>A[j+1]){
							A[j]=A[j]+A[j+1];
							A[j+1]=A[j]-A[j+1];
							A[j]=A[j]-A[j+1];
						}
					}
				}cout<<endl<<"Bubble Sorting in Ascending Completed";
			}break;
			case 2:{
				for(int i=0; i<(N-1); i++){
					for(int j=lb; j<=(last-1); j++){
						if(A[j]<A[j+1]){
							A[j]=A[j]+A[j+1];
							A[j+1]=A[j]-A[j+1];
							A[j]=A[j]-A[j+1];
						}
					}
				}cout<<endl<<"Bubble Sorting in Descending Completed";
			}break;
			default:
				cout<<endl<<"Invalid Selection";
				break;
		}
			}
			else if(ent3 == 4){
				goto start;
			}
			else if(ent3 == 5){
				return ;
			}
				else{
					cout<<endl<<endl;
		cout<<"you've enter a the wrong number!"<<endl;
		cout<<"1) Go back"<<endl;
		cout<<"2) exit"<<endl;
		int ent3;
		cout<<"Enter:";
		cin>>ent3;
		if(ent3 ==1){
			goto start;
		}
		else if(ent3 == 2){
			return ;
		}
		else{
			cout<<"you've enter a the wrong number!";
		}
	}
	}
	else if(ent == 6){
		return ;
	}
	else{
		cout<<endl<<endl;
		cout<<"you've enter a wrong number!"<<endl;
		cout<<"1) Re-enter your choice"<<endl;
		cout<<"2) exit"<<endl;
		int ent3;
		cout<<"Enter:";
		cin>>ent3;
		if(ent3 ==1){
			goto start;
		}
		else if(ent3 == 2){
			return ;
		}
		else{
			cout<<"you've enter a wrong number!";
		}
	}
}

};

int main()
{ 
	mainmenu1 m1;
	m1.main_menu();
		
}
