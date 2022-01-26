#include<bits/stdc++.h>
using namespace std;
    
int main()
{     int i,r=3,c=3,row=0,col=0,rowend=r-1,colend=c-1,arr[r][c]={{1,2,3},{8,9,4},{7,6,5}};
    
    while(row<r && col<c)
    {      for(i=row;i<=colend;i++)
    {          
        cout<<" "<<arr[row][i]<<" ";
    }
    row++;
             for(i=row;i<=rowend;i++)
             {
                        cout<<" "<<arr[i][colend]<<" ";
 
             }
             colend--;
             for(i=colend;i>=col;i--)
             {
                         cout<<" "<<arr[rowend][i]<<" ";

             }
             rowend--;
             for(i=rowend;i>=row;i--)
             {
                         cout<<" "<<arr[i][col]<<" ";

             }
             col++;
    }

return 0;
}