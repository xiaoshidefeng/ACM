import java.math.BigInteger;
import java.util.Scanner;
import java.math.*;
import java.text.*;
public class Main {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		Scanner cin=new Scanner(System.in);
		int i;
		BigInteger[] big = new BigInteger[12000];
		big[1] = new BigInteger("1");
		big[2] = new BigInteger("1");
		big[3] = new BigInteger("1");
		big[4] = new BigInteger("1");
		for(i=5;i<11111;i++)
		{
			 big[i] =big[i-1].add(big[i-2]);
			 big[i] = big[i].add(big[i-3]);
			 big[i] = big[i].add(big[i-4]);
		}
		
		while(cin.hasNext())   //等同于!=EOF
		{
			i=cin.nextInt();
			System.out.println(big[i]);
		}
	}

}
