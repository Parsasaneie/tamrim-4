#include<iostream>
using namespace std;
int harekat1(int p){
    int count =0;
    while (p>0)
    {
         count+=p%10;
        p/=10;
    }  
    return count;
};
int harekat2(int a){
    int count=0;
    bool flag=1;
    for (int i = 2; i <=a; i++)
    {
        if (a%i==0)
        {
          flag=1;
          for (int s = 2; s < i; s++)
          {
            if (i%s==0)
            {
                flag=0;
                break;
            }
            
          }
          if (flag==1)
          {
            count+=i;
          }
          
        }
        
    }
    return count;
    
};
int main(){
  bool main=0;
    int sum,n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>sum;
        
        for (int j = 1; j <=sum; j++)
        {
          main=0;
          
            int t2 {harekat2(j)}
            ;
            int t3 {harekat1(j)};
           int t1=j;
          if (t1+t2+t3==sum)
          {
            main=1;
            break;  
          }
          
            
        }
        if (main==1)
        {
            cout<<"YES\n";
        }
        else{cout<<"NO\n";}
    }
    

    
}