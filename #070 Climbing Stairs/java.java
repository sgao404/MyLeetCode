public class Solution {
    public int climbStairs(int n) {
        if (n<=2) {return n;}
        int s1 = 1;
        int s2 = 2;
        for (int i = 3;i <=n;i++) {
            s2 = s1 + s2;
            s1 = s2 - s1;
        }
        return s2;
    }
}