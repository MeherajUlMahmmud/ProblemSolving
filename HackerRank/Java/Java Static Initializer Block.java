import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

// Write your code here
static Scanner input = new Scanner(System.in);
static int B = input.nextInt();
static int H = input.nextInt();
static boolean flag = true;

static {
    try{
        if(B <= 0 || H <= 0) {
            flag = false;
            throw new Exception("Breadth and height must be positive");
        }
    } catch(Exception ex) {
        System.out.print(ex);
    }
}

public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class

