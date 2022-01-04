package Recursion.advancerecursion;

public class placeTile {
    public static int PlaceTile(int n,int m){
        if(n==m){
            return 2;
        }
        if(n<m){
            return 1;
        }
        //vertically
        int verticalplacements= PlaceTile(n-m, m);
        //horizontally
        int horizontalplacement=PlaceTile(n-1, m);
        return verticalplacements+horizontalplacement;
    }
    public static void main(String[] args) {
        int n=40 ,m=2;
        int totalways=PlaceTile(n, m);
        System.out.println(totalways);

    }
    
}
