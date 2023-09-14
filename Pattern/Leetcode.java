public class Leetcode{
    public static void main(String[] args) {
       String []strs = {"flower","flow","flight","fly"};



       if (strs == null || strs.length == 0) {
            System.out.println("0");
        }

        String commonPrefix = strs[0];
        for (int i = 1; i < strs.length; i++) {
            while (strs[i].indexOf(commonPrefix) != 0) {
                commonPrefix = commonPrefix.substring(0, commonPrefix.length()-1);
                System.out.println(commonPrefix);
            }
        }
        System.out.println(commonPrefix);
    }  
}