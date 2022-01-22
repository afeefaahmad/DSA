//Selection Sort
void selectionSort  ( vector <int> &arr ; int n ) {
    for(int i=0; i<=n; i++){
        int minIndex=i;
        for(arr k=i+1; j<n; j++){
            if(arr[j] < arr[minIndex])
                minIndex=j;
        }
        swap(arr[midIndex], arr[i]);
    }
}