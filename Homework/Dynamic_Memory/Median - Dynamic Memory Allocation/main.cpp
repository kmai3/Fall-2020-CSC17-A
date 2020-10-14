#include <iostream>
#include <iomanip>
using namespace std;
int *getData(int &);         //Return the array size and the array
void prntDat(int *,int);    //Print the integer array
float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data
void prntMed(float *);     //Print the median Array
int main(){
	//your code here
	int n;
	int *arr=getData(n);
    prntDat(arr, n);
    int n2=n+2;
    float *arr2=median(arr, n);
    prntMed(arr2);
    delete arr;
    delete arr2;
	return 0;
}
int *getData(int &n){
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>*(arr+i);
    }
    return arr;
}
void prntDat(int *arr, int n){
    for(int i=0; i<n-1; i++){
        cout<<*(arr+i)<<" ";   
    }
    cout<<*(arr+n-1);
    cout<<endl;
}
float *median(int *arr,int n){
    int l; // Location of the median
    float *arr2= new float[n];
    l=n/2;
    arr2[0]=n+2;
    for(int i=2, j=0; i<n+2; i++, j++){
        arr2[i]=arr[j];
    }
    for(int i=0;i<n-1;i++){
        //Swap as you go to place the smallest element at the top
        for(int j=i+1;j<n;j++){
            //Logic swap
            if(*(arr+i)>*(arr+j)){
                *(arr+i)=*(arr+i)^*(arr+j);
                *(arr+j)=*(arr+i)^*(arr+j);
                *(arr+i)=*(arr+i)^*(arr+j);
            }
        }
    }
    arr2[1]=(n%2==1)?arr[l]: (arr2[l+2]+arr2[l+1])/2;
    
    return arr2;
}
void prntMed(float *arr){
    int n=static_cast<int>(arr[0]);
    cout<<arr[0]<<" ";
    for(int i=1; i<n-1; i++){
        cout<<setprecision(2)<<fixed;
        cout<<*(arr+i)<<" ";
    }
    cout<<*(arr+n-1);
}