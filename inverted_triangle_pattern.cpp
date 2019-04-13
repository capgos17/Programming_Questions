#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[n][n];
    cin>>n;
    for (int i=n;i>0;i--)
    {
        for(int k=0;k<n-i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
        
}

/*


*  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
    *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
      *  *  *  *  *  *  *  *  *  *  *  *  *  *
        *  *  *  *  *  *  *  *  *  *  *  *  *
          *  *  *  *  *  *  *  *  *  *  *  *
            *  *  *  *  *  *  *  *  *  *  *
              *  *  *  *  *  *  *  *  *  *
                *  *  *  *  *  *  *  *  *
                  *  *  *  *  *  *  *  *
                    *  *  *  *  *  *  *
                      *  *  *  *  *  *
                        *  *  *  *  *
                          *  *  *  *
                            *  *  *
                              *  *
                                *


*/
