#include<iostream>
using namespace std;
class binarysearch{
    int arr[100],n,i,x;
public:
    void get(){     //function definition to get data
        cout<<"Enter how many nos?"<<endl;
        cin>>n;
        cout<<"Enter nos"<<endl;
        for(i=0;i<n;i++)     //for loop to input nos in array
            cin>>arr[i];
        cout<<"Enter no. to be searched"<<endl;  //which no. to be searched
        cin>>x;
    }
    int search(){   //function definition to search no.
        int mid,lb=0;   //lb=lower bound of array
        int loc=-1,ub=n-1;  //ub=upper bound of array
        while(lb<=ub){
            mid=(lb+ub)/2;  //mid is the index of array’s mid
            if(arr[mid]==x){    //is middle element of array the no. to be found?
                loc=mid;
                break;
            }
            else if(arr[mid]>x){
                ub=mid-1;   //upperbound changed
            }
            else{
                lb=mid+1;   //lowerbound changed
            }
        }
    return loc;
    }
};
int main(){
    int pos;
    binarysearch bs;
    bs.get();    //get function called
    pos=bs.search();    //search function called
    if(pos!=-1)
        cout<<"Item found at position "<<pos+1<<endl;
    else
        cout<<"Item not found"<<endl;
    return 0;
}

