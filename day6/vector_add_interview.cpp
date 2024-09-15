#include<iostream>
//we have call vector that has array of n
//methods 1.set_vector(size) 2.add data(passes n elements to internal vector array)
//3.overload + to add scalar value to vector


//Vector.set_vector(5)-----array of 5 element
//Vector.add_data(11,22,33,44,55)---set to internal vector array
//Vector v   v+10---->operator+--->21,32,43,54,65 to internal



using namespace std;
//forward decleration
class Vector
{
	private:
		int v[100],size;
	public:
		void set_vector(int size)
		{
		  this->size=size;
		  cout<<this->size<<" set";
		}
		void add_element(int temp[])
		{
			
			cout<<"\nVector has:";
			for(int i=0;i<size;i++)
				{
				 v[i]=temp[i];	
				 cout<<v[i]<<",";
				}
				
		}
		void display_vector()
		{
			cout<<"\nVector has:";
			for(int i=0;i<size;i++)
				{	
				 cout<<v[i]<<",";
				}
		}
		
	  friend void operator+(Vector &obj,int data);// proto-typed within class

};
void operator+(Vector &obj,int data)
{
	for(int i=0;i<obj.size;i++)
		obj.v[i]=obj.v[i]+data;
}

int main()
{
	Vector v;
	v.set_vector(3);
	int a[]={11,22,33};
	v.add_element(a);
	v+10;
	v.display_vector();
}