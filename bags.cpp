#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i=0,ta=t;
    int st[t];
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b+c<=d)
        {
        	
           st[i]=1;
           i++; 
        }
        else if(a+b<=d || b+c<=d || c+a<=d)
        {
        	
                st[i]=2;
                i++;         

        }
      
        else
        {
        	
        	
            st[i]=3;
            i++;
            
        }
        
    }
    
    for(int j=0 ; j<ta ;j++)
    {
    	cout<<st[j]<<endl;
	}

    

return 0;
}
