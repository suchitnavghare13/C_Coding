#include<iostream>
//withour using any special options check string palindrome or not
//nitin----nitin----nitin

using namespace std;
int main()
{
    string word;
    int i,j,flag=1;
    cout<<"\nEnter word:";
    cin>>word;
    for(j=0;word[j]!='\0';j++);//null for loop
    j--;
    for(i=0;i<j;i++,j--)
    {
        if(word[i]!=word[j])
        {
                flag=0;
                break;
        }
    }
    if(flag==1)
        cout<<endl<<word<<" is plaindrome";
    else
        cout<<endl<<word<<" is not plaindrome";
        return 0;
   
}