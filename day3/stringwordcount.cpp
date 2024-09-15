#include<iostream>
//withour using any special options check string palindrome or not
//nitin----nitin----nitin

using namespace std;
int main()
{
    string line;
    int i,count=0;
    cout<<"\nEnter line:";
    getline(cin,line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]==' ')
            count++;
    }
    cout<<endl<<"Total words in line are:"<<(count+1);
        return 0;
   
}