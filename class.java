import util.*;
public class{
    public static void main(String x[]){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int odd =0,even=1,prefix=0,sum=0;
        for(int i:arr){
            arr=in.nextInt();
        }
        for(int i=0;i<n;i++){
            prefix+=arr[i];
            if(prefix % 2==0){
                sum+=odd;

            }
            else{
                sum+=even;
            }
            if(prefix%2==0){
                odd++;
            }else{
                even++;
            }
        }
        System.out.println("odd count is :"+odd);
    }
}