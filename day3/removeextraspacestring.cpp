#include<iostream>
// vowels

using namespace std;
int main()
{
    string line;
    int i,j,count=0;
    cout<<"\nEnter line:";
    getline(cin,line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]==' ' && line[i+1]==' '){
            for(j=i+1;j<line[i]!='\0';i++){
                j=j+1;
            }
        }
            
    }
    cout<<endl<<"Remove black space "<<line;
        return 0;
   
}