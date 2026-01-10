#include<iostream>
using namespace std;

// ============================================
// BITWISE OPERATORS IN C++
// ============================================

// 1. BITWISE AND (&)
// Returns 1 if both bits are 1, otherwise 0
int bitwiseAND() {
    int x = 3, y = 6;
    // x = 3 → Binary: 011
    // y = 6 → Binary: 110
    // x&y   → Binary: 010 = 2
    cout << "Bitwise AND (3 & 6): " << (x & y) << endl;
    return 0;
}

// 2. BITWISE OR (|)
// Returns 1 if at least one bit is 1
int bitwiseOR() {
    int x = 3, y = 6;
    // x = 3 → Binary: 011
    // y = 6 → Binary: 110
    // x|y   → Binary: 111 = 7
    cout << "Bitwise OR (3 | 6): " << (x | y) << endl;
    return 0;
}

// 3. BITWISE XOR (^)
// Returns 1 if bits are different, 0 if same
int bitwiseXOR() {
    int x = 3, y = 6;
    // x = 3 → Binary: 011
    // y = 6 → Binary: 110
    // x^y   → Binary: 101 = 5
    cout << "Bitwise XOR (3 ^ 6): " << (x ^ y) << endl;
    return 0;
}

// 4. BITWISE NOT (~)
// Inverts all bits (0→1, 1→0)
int bitwiseNOT() {
    int x = 3;
    // x = 3  → Binary: 00000011
    // ~x     → Binary: 11111100 (in 2's complement = -4)
    cout << "Bitwise NOT (~3): " << (~x) << endl;
    return 0;
}

// 5. LEFT SHIFT (<<)
// Shifts bits to the left, fills with 0
// Equivalent to multiplying by 2^n
int leftShift() {
    int x = 3;
    // x = 3      → Binary: 011
    // x << 1     → Binary: 0110 = 6 (multiply by 2^1)
    // x << 2     → Binary: 1100 = 12 (multiply by 2^2)
    cout << "Left Shift (3 << 1): " << (x << 1) << endl;  // Output: 6
    cout << "Left Shift (3 << 2): " << (x << 2) << endl;  // Output: 12
    return 0;
}

// 6. RIGHT SHIFT (>>)
// Shifts bits to the right, discards rightmost bits
// Equivalent to dividing by 2^n
int rightShift() {
    int x = 12;
    // x = 12     → Binary: 1100
    // x >> 1     → Binary: 0110 = 6 (divide by 2^1)
    // x >> 2     → Binary: 0011 = 3 (divide by 2^2)
    cout << "Right Shift (12 >> 1): " << (x >> 1) << endl;  // Output: 6
    cout << "Right Shift (12 >> 2): " << (x >> 2) << endl;  // Output: 3
    return 0;
}

// ============================================
// PRACTICAL APPLICATIONS
// ============================================

// Check if a number is even or odd
void checkEvenOdd(int n) {
    if (n & 1)
        cout << n << " is Odd" << endl;
    else
        cout << n << " is Even" << endl;
}

// Swap two numbers without temp variable
void swapNumbers(int a, int b) {
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

// Check if nth bit is set
void checkBitSet(int num, int n) {
    if (num & (1 << n))
        cout << "Bit " << n << " is SET in " << num << endl;
    else
        cout << "Bit " << n << " is NOT SET in " << num << endl;
}

// Set nth bit
int setBit(int num, int n) {
    return num | (1 << n);
}

// Clear nth bit
int clearBit(int num, int n) {
    return num & (~(1 << n));
}

// Toggle nth bit
int toggleBit(int num, int n) {
    return num ^ (1 << n);
}

// ============================================
// MAIN FUNCTION - DEMONSTRATION
// ============================================
int main() {
    cout << "=== BASIC BITWISE OPERATORS ===" << endl;
    bitwiseAND();
    bitwiseOR();
    bitwiseXOR();
    bitwiseNOT();
    leftShift();
    rightShift();
    
    cout << "\n=== PRACTICAL APPLICATIONS ===" << endl;
    checkEvenOdd(7);
    checkEvenOdd(8);
    
    cout << endl;
    swapNumbers(5, 10);
    
    cout << endl;
    checkBitSet(5, 0);  // Check bit 0 in 5 (binary: 101)
    checkBitSet(5, 1);  // Check bit 1 in 5
    
    cout << endl;
    cout << "Set bit 1 in 5: " << setBit(5, 1) << endl;      // 5 | (1<<1) = 7
    cout << "Clear bit 0 in 5: " << clearBit(5, 0) << endl;  // 5 & ~1 = 4
    cout << "Toggle bit 2 in 5: " << toggleBit(5, 2) << endl; // 5 ^ 4 = 1
    
    return 0;
}
// ```

// **Key Additions:**
// 1. ✅ **Bitwise NOT (~)** - The missing operator
// 2. ✅ **Right Shift (>>)** - Complement to left shift
// 3. ✅ Clear explanations with binary representations
// 4. ✅ Practical applications (even/odd, swap, bit manipulation)
// 5. ✅ Better organization with sections
// 6. ✅ Comprehensive comments

// **Output when run:**
// ```
// === BASIC BITWISE OPERATORS ===
// Bitwise AND (3 & 6): 2
// Bitwise OR (3 | 6): 7
// Bitwise XOR (3 ^ 6): 5
// Bitwise NOT (~3): -4
// Left Shift (3 << 1): 6
// Left Shift (3 << 2): 12
// Right Shift (12 >> 1): 6
// Right Shift (12 >> 2): 3

// === PRACTICAL APPLICATIONS ===
// 7 is Odd
// 8 is Even

// Before swap: a = 5, b = 10
// After swap: a = 10, b = 5

// Bit 0 is SET in 5
// Bit 1 is NOT SET in 5

// Set bit 1 in 5: 7
// Clear bit 0 in 5: 4
// Toggle bit 2 in 5: 1
