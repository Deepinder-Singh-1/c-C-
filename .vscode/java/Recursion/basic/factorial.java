package Recursion.basic;

public class factorial {
    public static int calfctorial(int n){
        if(n==0||n==1){
            return 1;
        }
        int fact=calfctorial(n-1);
        int fact_n=n*fact;
        return fact_n;

    }
    public static void main(String[] args) {
        int n= 5;
        int ans = calfctorial(n);
        System.out.println(ans);
    }
    
}
