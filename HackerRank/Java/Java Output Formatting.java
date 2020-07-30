import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                System.out.print(s1);
                int count = 0;
                for(int k = 0; k < s1.length(); ++k){
                    if(s1.charAt(k) != ' '){
                        count++;
                    }
                }
                for(int j = 0; j < 15-count; ++j){
                    System.out.print(" ");
                }
                if(x < 100 && x > 9){
                    System.out.println("0" + x);
                }
                else if(x < 10){
                    System.out.println("00" + x);
                }
                else{
                    System.out.println(x);
                }
            }
            System.out.println("================================");

    }
}
