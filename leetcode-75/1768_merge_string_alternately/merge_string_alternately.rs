pub fn merge_alternately(word1: String word2: String) -> String {
    let mut result = String::with_capacity(word1.len() + word2.len());
    let mut i = 0;
    let mut j = 0;
    let word1_chars: Vec<char> = word1.chars().collect();
    let word2_chars: Vec<char> = word2.chars().collect();


    while i < word1_chars.len() && j < word2_chars.len() {
        result.push(word1_chars[i]);
        result.push(word2_chars[i]);
        i += 1;
        j += 1;
    }
    result.extend(word1_chars[i..].iter());
    result.extend(word2_chars[i..].iter());
    
    result
}
