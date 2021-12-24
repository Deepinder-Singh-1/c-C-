package sorting;

public class insertion {
    public static void printArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    } 
    public static void main(String[] args) {
          //insertion
          int arr[]={7,8,3,1,2};
          for(int i=0;i<arr.length;i++){
              int current = arr[i];
              int j=i-1;
              while(j>=0 && arr[current]<arr[j]){
                  arr[j+1]=arr[j];
                  j--;
              }
              //placement
              arr[j+1]=current;
            }
            printArray(arr);
    }
}
