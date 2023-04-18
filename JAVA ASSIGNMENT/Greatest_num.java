import java.util.*;
class Greatest_num
{
    public static void main(String args[])
    {
        Scanner sin = new Scanner(System.in);
        int a = sin.nextInt();
        int b = sin.nextInt();
        int c = sin.nextInt();
        if(a>b)
        {
            if(a>c)
            {
                System.out.println("a is greater");
            }
            else
            {
                System.out.println("c is greater");
            }
        }
        else{

        
        if(b>c)
        {
           
            
                System.out.println("b is greater");

        }
         else{
                System.out.println("c is greater");
            }
        }
    }
}