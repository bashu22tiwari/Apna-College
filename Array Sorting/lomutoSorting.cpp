void lomutoSorting(int arr[] , int l, int h, int p){
    int i=l-1;
    int pivot = arr[p];
    for(int j=l ; j<=h-1 ; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1] , arr[h]);
 }