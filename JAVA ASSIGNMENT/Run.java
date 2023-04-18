//import org.w3c.dom.ls.LSOutput;

import java.util.Scanner;
class Num9
{
    static void decToBin(int n)
    {
        if(n==1)
        {
            System.out.print(n);
        }
        else
        {
            
            
            System.out.print(n%2);
            decToBin(n/2);
        }
    }
}

class Run
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number:");
        int n=sc.nextInt();
        Num9.decToBin(n);
    }
}