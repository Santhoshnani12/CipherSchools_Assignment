import java.io.Serializable;
import java.math.BigInteger;
class Solution {
    public static int uniquePaths(int m, int n) {
        if (m > 1 && n > 1)
            return (((BigInteger) helperUniquePaths(m,n)).intValue());
        else return 1;
    }

    public static Serializable helperUniquePaths(int m, int n) {
        if (m > 1 && n > 1)
            return factorial(m + n - 2).divide(((factorial(m - 1).multiply( (factorial(n - 1))))));
        else
            return 1;
    }

    public static BigInteger factorial(int N)
    {
        // Initialize result
        BigInteger f = new BigInteger("1"); // Or BigInteger.ONE

        // Multiply f with 2, 3, ...N
        for (int i = 2; i <= N; i++)
            f = f.multiply(BigInteger.valueOf(i));

        return f;
    }
}
