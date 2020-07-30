import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int j=0;j<t;j++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int[] arr = new int[n];
            for(int i = 0; i < n; ++i){
                arr[i] = a;
            }
        
            for(int i = 0; i < n; ++i){
                arr[i] += (Math.pow(2,i) * b);
                if(i > 0){
                    arr[i] = arr[i-1] + (int)Math.pow(2, i)*b;
                }
            }
        
            for(int i = 0; i < n; ++i){
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
        in.close();
    }
}
