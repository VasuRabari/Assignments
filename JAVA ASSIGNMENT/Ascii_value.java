import java.util.Scanner;

public class Ascii_value
{
public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	
	System.out.println("Enter a chracter: ");
	char ch = sc.next().charAt(0);
	int ascii = ch;
	System.out.println("ASCII value of "+ch+" is:"+ascii);
}
}