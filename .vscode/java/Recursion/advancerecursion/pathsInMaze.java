package Recursion.advancerecursion;
//backtraking is used 
//vapis ana and try new approch 
public class pathsInMaze{
    public static int countPaths(int i , int j,int n,int m){
        if(i==n || j==m){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return 1;
        }
        //downward paths
        int downpaths= countPaths(i+1, j, n, m);
        //move right
        int rightPaths= countPaths(i, j+1, n, m);
        return downpaths+rightPaths;
    }
    public static void main(String[] args) {
        int n= 3,m=3;
        int totalpaths=countPaths(0, 0, n, m);
        System.out.println(totalpaths);
    }
    
}