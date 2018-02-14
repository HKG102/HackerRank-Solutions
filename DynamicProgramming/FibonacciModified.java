import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

static BigInteger fibonacciModified(int t1, int t2, int n) {
BigInteger bd[]=new BigInteger[n];

bd[0]=BigInteger.valueOf(t1);
bd[1]=BigInteger.valueOf(t2);

for(int i=2;i<n;i++)
{
bd[i]=bd[i-2].add(bd[i-1].multiply(bd[i-1]));
}

return (bd[n-1]);
}

public static void main(String[] args) {
Scanner in = new Scanner(System.in);
int t1 = in.nextInt();
int t2 = in.nextInt();
int n = in.nextInt();
BigInteger result = fibonacciModified(t1, t2, n);
System.out.println(result);
in.close();
}
}
