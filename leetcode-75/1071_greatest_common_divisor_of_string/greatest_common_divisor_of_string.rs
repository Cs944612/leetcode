struct Solution;

impl Solution {
    pub fn gcd_of_strings(str1: String, str2: String) -> String {
        // Check if the concatenated strings are equal in both orders
        if format!("{}{}", &str1, &str2) != format!("{}{}", &str2, &str1) {
            return String::new(); 
        }

        // Compute the GCD of the lengths of the two strings
        let gcd_length = gcd(str1.len(), str2.len());

        // Return the substring of length equal to the GCD
        str1[..gcd_length].to_string()
    }
}

// Helper function to compute the GCD of two numbers using the Euclidean algorithm
fn gcd(a: usize, b: usize) -> usize {
    let mut a = a;
    let mut b = b;
    while b != 0 {
        let temp = b;
        b = a % b;
        a = temp;
    }
    a
}

fn main() {
    println!("{}", Solution::gcd_of_strings("ABCABC".to_string(), "ABC".to_string())); // Output: "ABC"
    println!("{}", Solution::gcd_of_strings("ABABAB".to_string(), "ABAB".to_string())); // Output: "AB"
    println!("{}", Solution::gcd_of_strings("LEET".to_string(), "CODE".to_string()));   // Output: ""
}
