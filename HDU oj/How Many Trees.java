import java.math.BigInteger;
import java.util.Scanner;
import java.math.*;
import java.text.*;
public class Main{

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Scanner cin=new Scanner(System.in);
		int i=4;
		BigInteger[] big = new BigInteger[102];
		big[1] = new BigInteger("1");
		big[2] = new BigInteger("2");
		big[3] = new BigInteger("5");
		BigInteger n1 = new BigInteger("24");

		BigInteger n = new BigInteger("4");
		BigInteger cont = new BigInteger("4");
		BigInteger two = new BigInteger("2");
		BigInteger one = new BigInteger("1");
		BigInteger four = new BigInteger("4");
		
		for(i=4;i<101;i++)
		{
			big[i]=big[i-1].multiply(four.multiply(cont).subtract(two)).divide(cont.add(one));
			
			
			cont=cont.add(one);
		}
		
		while(cin.hasNext())   //等同于!=EOF
		{
			i=cin.nextInt();
			System.out.println(big[i]);
		}
	}

}
