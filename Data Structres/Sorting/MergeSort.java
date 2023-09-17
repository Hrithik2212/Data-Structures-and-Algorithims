// Merge Sort - by Hrithik 

public class MergeSort{
    public static void conquer(int arr[], int s, int mid, int e) {
        int merged[] = new int[e - s + 1];
        int p = s;
        int q = mid + 1;
        int k = 0;

        while (p <= mid && q <= e) {
            if (arr[p] <= arr[q]) {
                merged[k] = arr[p];
                p++;
            } else {
                merged[k] = arr[q];
                q++;
            }
            k++;
        }

        while (p <= mid) {
            merged[k++] = arr[p++];
        }

        while (q <= e) {
            merged[k++] = arr[q++];
        }

        for (int i = 0, j = s; i < merged.length; i++, j++) {
            arr[j] = merged[i];
        }
    }
    public static void mergeSort(int arr[], int s, int e) {
        if (s < e) {
            int mid = s + (e - s) / 2; // Corrected calculation of mid
            mergeSort(arr, s, mid);
            mergeSort(arr, mid + 1, e);
            conquer(arr, s, mid, e);
        }
    }
    public static void main(String args[]){
        int arr[] = {6,3,9,5,2,6} ;
        int n = arr.length ;
        mergeSort(arr ,0 , n-1);
        for(int i=0 ; i < arr.length ; i++){
            System.out.println(arr[i]);
        }

    }
}
