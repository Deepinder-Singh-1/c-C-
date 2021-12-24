import java.util.*;

class FirstClass{
    public static void main(String args[]){
        int a,b,c,d,e,f,g,h,k,l,m;
      System.out.println("please enter the amount");
      Scanner sc= new Scanner(System.in);
      a =sc.nextInt();
      b=a/2000;
      c=a%2000;
      d=c/500; 
      e=c%500;
      f=e/200;
      k=e%200;
      g=k/100;
      h=g%100;
      l=h/10;
      m=l%10;
      System.out.println("2000 :"+b);
      System.out.println("500 :"+d);
      System.out.println("200 :"+f);
      System.out.println("100 :"+g);
      System.out.println("10 :"+m);
    }
}