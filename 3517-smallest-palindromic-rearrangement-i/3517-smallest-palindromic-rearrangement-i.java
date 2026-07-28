class Solution {
    public String smallestPalindrome(String s) {
        int n = s.length();
        int mid = n / 2;
        char[] arr = s.toCharArray();

        Arrays.sort(arr, 0, mid);

        StringBuilder str = new StringBuilder();
        for(int i = 0; i < mid; i++){
            str.append(arr[i]);
        }

        if (n % 2 == 1) {
            str.append(arr[mid]);
        }

        for(int i = mid - 1; i >= 0; i--){
            str.append(arr[i]);
        }

        return str.toString();
    }
}