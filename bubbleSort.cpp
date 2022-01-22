void selectionSort(vector<int>& arr, int n){
	for(int i=0; i<n-1; i++){     //for rounds like round1 , round2, ...... round n-1
        int minIndex=i;             //let the ith index element be the smallest 
        for(int j=i+1; j<n; j++){     //For number of comparisons in each round
            if(arr[minIndex]>arr[j]){    //In case any element at any index found to be smaller than ith index then swap it with minIndex
				minIndex=j;	
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
