#include<iostream>
using namespace std;

bool isSorted(int *arr, int num){
  if(num==0 || num==1) return true;
  return (arr[0]<=arr[1]) && isSorted(arr+1, num-1);
}

int main(){
  cout << "Enter the number of elements: ";
  int n =0;
  cin >> n;
  int *arr = new int[n];
  cout << "Enter the "<<n<<" elements:\n";
  for(int i=0;i<n;i++)
    cin>>arr[i];

  cout << "Is sorted: "<<isSorted(arr, n);
  cout << endl;
  return 0;

}