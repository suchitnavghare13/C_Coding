#include<iostream>
using namespace std;
int main()
{
    //create array:size > needed
    int m[10][10],r,c,rows,columns;
    int flag=1;//yes
    //read needed size from it
    cout<<"Enter rows and columns\n";
    cin>>rows>>columns;
    if(rows!=columns)
    {
        cout<<"\nCan not be symmetric";
    }
    else
    {
   
         //add elements to array
        for(r=0;r<rows;r++)//r=0              r=1
        {
            for(c=0;c<columns;c++)//c=0,1,2   c=0,1,2
            {
                cout<<"Enter data at ["<<r<<"] ["<<c<<"] :";
                cin>>m[r][c];
            }
        }
        cout<<"Matrix has\n";
        for(r=0;r<rows;r++)//r=0              r=1
        {
            cout<<endl;
            for(c=0;c<columns;c++)//c=0,1,2   c=0,1,2
            {
                cout<<m[r][c]<<"\t";
            }
        }
       
        //check
   
        for(r=0;r<rows;r++)//r=0              r=1
        {
   
            for(c=0;c<columns;c++)//c=0,1,2   c=0,1,2
            {
                if(m[r][c]!=m[c][r])
                {
                        flag=0;//no
                        break;            
                }
               
            }
        }
        if(flag==1)
            cout<<"\n Yes it is symmetric";
        else
            cout<<"\n No it is not symmetric";
}
    return 0;
   
}