class Solution {
    public int prefixCount(String[] words, String pref) {
        int count = 0;
        for(String word: words){
            if(word.length() < pref.length()){
                continue;
            }
            if(word.substring(0,pref.length()).equals(pref)){
                count++;
            }
        }
        return count;
    }
}