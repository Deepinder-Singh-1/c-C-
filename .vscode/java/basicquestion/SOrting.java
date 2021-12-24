package basicquestion;
import java.util.*;
public class SOrting {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int i,t,n;
        System.out.println("please ente the number");
        n=sc.nextInt();
        i=0;t=0;
        i=n%10;
        System.out.println(i);
        while(n>0){
            n=n/10;
            System.out.println(n);
        }
        t=i+n;
        System.out.println(t);

        //forsum of all nummber
        // int i=0;
        // int t,n; 
        // n=sc.nextInt();
        // t=0;
        // while(n>0){
        //     i=n%10;
        //     t=t+i;
        //     n=n/10;
        // }
        // System.out.print(t);
         
    }
    
}
