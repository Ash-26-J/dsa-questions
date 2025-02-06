import java.util.*;

public class Main {
    
    public static void printPair(int[] arr,int arr2[], int n,int n2, int sum) {
        // Pair to store the result
        int[] pair = {-1, -1};
        int difference = Integer.MAX_VALUE;
        
        // Two pointers approach
        int L = 0, R = n2 - 1;
        
        // Sort the array before using two pointers
        Arrays.sort(arr);
		Arrays.sort(arr2);

        while (L < R) {
            int cur = Math.abs(arr[L] + arr2[R] - sum);
            if (cur < difference) {
                difference = cur;
                pair[0] = arr[L];
                pair[1] = arr2[R];
            }
            
            if (arr[L] + arr2[R] < sum) {
                L++;
            } else {
                R--;
            }
        }

        System.out.println("The required pair is: " + pair[0] + " " + pair[1]);
    }

    public static void main(String[] args) {
        int n = 6;
		int n2 =5;
        int x = 43;
        int[] arr = {10, 25, 28, 39, 40, 49};
		int[] arr2={1,2,3,5,6,9};
        
        printPair(arr,arr2, n,n2, x);
    }
}
