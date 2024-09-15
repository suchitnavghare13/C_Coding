#include<iostream>
// vowels count 

using namespace std;
int main()
{
    string line;
    int i,count=0;
    cout<<"\nEnter line:";
    getline(cin,line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]=='a' || line[i]=='e' ||  line[i]=='i' ||  line[i]=='o' ||  line[i]=='u')
            count++;
    }
    cout<<endl<<"Total vowels in line are:"<<(count);
        return 0;
   
}