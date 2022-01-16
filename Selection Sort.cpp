void selectionSort ( vector<int> &arr , int n) {      //STL
    for (int i = 0; i < n-1; i++){                    //i loop for next steps & Rounds
        int minIndex = i;
        for (int j = i+1; j<n; j++){                  //j loop for comparing elements
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap( arr[minIndex], arr[i]);
    }

}
