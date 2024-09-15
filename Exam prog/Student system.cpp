#include<iostream>
using namespace std;
class Student
{
	private:
		string name,gender;
		float pointer;
		int sno;
		static int seat_no;
	public:
		void get_data(string name="unknown",string gender="default",float pointer=0.0)
		{
			this->name=name;
			this->gender=gender;
			this->pointer=pointer;
			sno=++seat_no;
			cout<<endl<<"Hi "<<name<<"\t Your Seat no is"<<sno;
		}
		int get_sno()
		{
			return sno;
		}
		void display()
		{
			cout<<endl<<"The Student Name :"<<name<<"\tGender is :"<<gender<<"\tPointer is :"<<pointer;
		}
		void edit(string name)
		{
			
			this->name=name;
			cout<<endl<<"Successfully Changed";
		}
		void editg(string gender)
		{
			this->gender=gender;
			cout<<endl<<"Successfully Changed";
		}
		void editp(float pointer)
		{
			this->pointer=pointer;
			cout<<endl<<"Successfully Changed";
		}		
};

int Student::seat_no=109800;
int main()
{
	Student Sid[8];
	int index=0,i;
	int ch;
	string name,gender;
	float pointer;
	int sno;
	
	do{
		cout<<endl<<"--------------------------------";
		cout<<endl<<"--------STUDENT PORTAL----------";
		cout<<endl<<"================================";
		cout<<endl<<"-----1.CREATE NEW PROFILE-------";
		cout<<endl<<"-----2.VIEW PROFILE-------------";
	    cout<<endl<<"-----3.EDIT PROFILE-------------";
	    cout<<endl<<"-----0.Exit---------------------";
	    cout<<endl<<"--------------------------------";
	    cout<<endl<<":";
	    cin>>ch;
	    Student temp;
	    int count=0;
	    switch(ch)
	    {
	    	case 1:
	    		cout<<"\nEnter the Name\n";
	    		cin>>name;
	    		cout<<"\nEnter the Gender\n";
	    		cin>>gender;
	    		cout<<"\nEnter the Pointer\n";
	    		cin>>pointer;
                temp.get_data(name,gender,pointer);//created account
                Sid[index++]=temp;
	    		break;
	    	
	    	case 2:
	    		cout<<"\n Enter the Seat no ";
	    		cin>>sno;
	    		for(i=0;i<index;i++)
                {
                    if(Sid[i].get_sno()==sno)
                    {
                    	cout<<endl<<"Seat Number found";
                    	Sid[i].display();
						count++; 
					}
                	else if(count==0)
                	{
                		cout<<endl<<"Seat Number "<<sno<<" not found";
					}
                }
	    		break;
	    		
	    	case 3:
	    		cout<<"\n Enter the Seat no ";
	    		cin>>sno;
	    		int ch1;
	    		for(i=0;i<index;i++)
                {
                    if(sno==Sid[i].get_sno())
                    {
                    	do{
	                        cout<<"\n Seat Number Found\n";
	                        Sid[i].display();
	                        cout<<endl<<"--------------------------------";
							cout<<endl<<"--------STUDENT PORTAL----------";
							cout<<endl<<"================================";
							cout<<endl<<"--------1.EDIT NAME-------------";
							cout<<endl<<"--------2.EDIT GENDER-----------";
						    cout<<endl<<"--------3.EDIT POINTER----------";
						    cout<<endl<<"--------0.Exit------------------";
						    cout<<endl<<"--------------------------------";
						    cout<<endl<<":";
						    cin>>ch1;
						    switch(ch1)
						    {
						    	case 1:
						    		cout<<endl<<"Enter the New Name";
						    		cin>>name;
									Sid[i].edit(name);					    		
						    		break;
						    	case 2:
						    		cout<<endl<<"Enter the New Gender";
						    		cin>>gender;
									Sid[i].editg(gender);			    		
						    		break;
						    	case 3:
						    		cout<<endl<<"Enter the New Pointer";
						    		cin>>pointer;
						    		Sid[i].editp(pointer);
						    		break;
						    	case 0:
						    		cout<<endl<<"Thank You ";
						    		break;
						    	default:
						    		cout<<endl<<"Please select correct option from the given Menu";				
									break;
							}
						}while(ch1!=0);
                    }
            	}
	    		break;
	    	case 0:
	    		cout<<endl<<"Thank You ";
	    		break;
	    	default:
	    		cout<<endl<<"Please select correct option from the given Menu";				
				break;
		}
	}while(ch!=0);
	return 0;
}