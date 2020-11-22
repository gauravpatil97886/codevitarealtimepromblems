#include <iostream>
using namespace std;

int main() 
{
    int i,j;
    int num_box=0,k=0,sum=0,times=0,tst_case,temp=0;
    long c[10000],s[10000];
    cout<<("Enter the number of test case:");
    cin>>tst_case;
    cout<<("Enter the number of boxes:");
    for(int l=0;l<tst_case;l++) { cin>>num_box;
    }
    cout<<("Enter the number of candies in each box:");
    for(i=0;i<num_box;i++) { cin>>c[i];
    }
    for(i=0;i<num_box;i++)
    {
        for(j=i+1;j<num_box;j++) { if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    sum=0;
    k=0;
    for(i=0;i<num_box;i++)
    {
        sum=sum+c[i];
        s[k]=sum;
        k++;
    }
    times=0;
    cout<<("Minimum time requried:");
    for(i=1;i<k;i++)
    times=times+s[i];
    
    cout<<times;
    
    return 0;
}
