import java.util.*;
public class Word_length
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        ArrayList<String> words = getWords(s);

        Map<String, Integer> map = new HashMap<>();
        for (String word : words) {
            map.put(word, word.length());
        }

        int maxLength = 0, minLength = Integer.MAX_VALUE;
        ArrayList<String> maxWords = new ArrayList<>(), minWords = new ArrayList<>();

        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            if (entry.getValue() > maxLength) {
                maxWords.clear();
                maxLength = entry.getValue();
                maxWords.add(entry.getKey());
            }
            else if (entry.getValue() == maxLength) {
                maxWords.add(entry.getKey());
            }
            if (entry.getValue() < minLength) {
                minWords.clear();
                minLength = entry.getValue();
                minWords.add(entry.getKey());
            }
            else if (entry.getValue() == minLength) {
                minWords.add(entry.getKey());
            }
        }

        System.out.println("Longest word(s): " + maxWords + " Length: " + maxLength);
        System.out.println("Shortest word(s): " + minWords + " Length: " + minLength);
    }

    public static ArrayList<String> getWords(String s) {
        ArrayList<String> words = new ArrayList<>();
        String word = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                words.add(word);
                word = "";
            } else {
                word += s.charAt(i);
            }
        }
        if (!word.isEmpty()) {
            words.add(word);
        }
        return words;
    }
}