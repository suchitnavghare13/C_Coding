#include <iostream>

using namespace std;
int main()
{
    int n,i;
    cout << "how many numbers you want to enter : ";
    cin >> n;
    int x;

    int s1 = 0;
    int s2 = 0;

    for (i = 1; i <= n; i++)
    {

        cout<<"enter "<< i<<" Value :"<<endl;
        cin>>x;
        // cout<<n;
    
        if (x >= 0)
        {
            s1 = s1 + x;
        }
        else
        {
            s2 = s2 + x;
        }
    }

    cout << "Sum of +ve number is : " << s1<<endl;
    cout << "Sum of -ve number is : " << s2<<endl;

    return 0;
}
 