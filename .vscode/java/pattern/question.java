package pattern;
public class question {
    static int min(int z,int r){
        int temp=0;
        if(z>r)
        temp=r;
        else{
            temp=z;
        }
        return(temp);
    }

    static void pattern31(int n){
        int originalN=n;
        n=2*n;
        for(int row=0;row<= n;row++){
            for(int col=0;col<=n;col++){
                //int atEveryIndex=originalN-Math.min(Math.min(row,col),Math.min(n-row,n-col));
                int x=min(min(row,col),min(n-row,n-col));
                int atEveryIndex=originalN-x;
                System.out.print(atEveryIndex+" ");
            }
            System.out.println();
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        int n=4;
        pattern31(n);
        //-pattern32(n);
       
        
    }
    
}
