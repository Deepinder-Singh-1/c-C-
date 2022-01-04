package Recursion.medium;
public class printSubSequence{
    public static String[] keypad={".","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

    public static void printcomb(String str,int idx,String combination){
        if(idx== str.length()){
            System.out.println(combination);
            return;
        }
        char currChar = str.charAt(idx);
        String mapping = keypad[currChar-'0'];

        for(int i =0;i<mapping.length();i++){
            printcomb(str, idx+1, combination+mapping.charAt(i));
        }
    }
    public static void main(String[] args) {
        String str ="23";
        printcomb(str, 0, "");
    }

}


// public class printSubSequence {
//     public static void subsequence(String str, int idx , String newstring){
//         if(idx==str.length()){
//             System.out.println(newstring);
//             return;
//         }
//         char currchar = str.charAt(idx);

//         //to be 
//         subsequence(str, idx+1, newstring+currchar);

//         //not to be 
//         subsequence(str, idx+1, newstring);
//     } 
//     public static void main(String[] args) {
//         String str="aaa";
        
//         subsequence(str, 0, "");
//     }

    
// }
// import java.util.HashSet;

// import javax.print.attribute.HashAttributeSet;

// public class printSubSequence {
//     public static void subsequence(String str, int idx , String newstring,HashSet<String> set){
//         if(idx==str.length()){
//             if(set.contains(newstring)){
//                 return;
//             }
//             else {
//                 System.out.println(newstring);
//                 set.add(newstring);
//                 return;
//             }
//         }
//         char currchar = str.charAt(idx);

//         //to be 
//         subsequence(str, idx+1, newstring+currchar,set);

//         //not to be 
//         subsequence(str, idx+1, newstring,set);
//     } 
//     public static void main(String[] args) {
//         String str="aaa";
//         HashSet<String> set= new HashSet<>();
//         subsequence(str, 0, "", set);
//     }
    
// }
