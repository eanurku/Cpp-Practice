#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    std::deque<int> deque;
    int maxElement=-1;
    for(int i=0;i<n;i++){
        deque.push_back(arr[i]);
        if(maxElement<arr[i]){

        	maxElement=arr[i];
        }

        if(deque.size()==k){

            cout<<maxElement;

            if(i==n-1){
                cout<<"";
            }else{
                cout<<" ";
            }
            int removedElement=deque.front();
            deque.pop_front();
            if(maxElement==removedElement){
            	maxElement=*(std::max_element(deque.begin(), deque.end()));
            }

        }
    }
    cout<<"\n";
}



int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
