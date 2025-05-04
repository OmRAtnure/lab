public class practiceShellSort{
    static void sort(int [] arr) {
        int n=arr.length;
        for(int gap=n/2;gap>0;gap=gap/2) {
            for(int i=0;i<n;i++) {
                int temp=arr[i];
                int j=i;

                while(j>=gap && arr[j-gap]>temp) {
                    arr[j]=arr[j-gap];
                    j=j-gap;
                }
                arr[j]=temp;
            }
        }
    }
    static void print(int []arr) {
        for(int num:arr) {
            System.out.print(num+" ");
        }
    }

    public static void main(String [] args) {
        int []arr={5,3,4,2,1};
        System.out.print("Original array: ");
        print(arr);
        sort(arr);
        System.out.print("Sorted array: ");
        print(arr);
    }
}