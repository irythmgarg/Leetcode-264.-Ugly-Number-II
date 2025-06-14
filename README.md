# Leetcode-264.-Ugly-Number-II
# Nth Ugly Number 💡

## 🎓 Problem Statement

Ugly numbers are positive numbers whose prime factors only include **2, 3, 5**. The task is to find the **n-th** ugly number.

---

## 📚 Approach Explained

We use a **dynamic programming** approach with **three pointers** to efficiently generate the ugly numbers in increasing order.

### 📈 Key Concepts

* An ugly number must be generated from a smaller ugly number multiplied by 2, 3, or 5.
* Maintain three pointers (`i2`, `i3`, and `i5`) for each multiplier.
* Use a `dp[]` array to store ugly numbers in order.

### 🧲 Algorithm Steps

1. Initialize `dp[1] = 1` (first ugly number).
2. Start three pointers `i2`, `i3`, and `i5` at position 1.
3. For each index from 2 to `n`:

   * Calculate next multiples: `val1 = dp[i2] * 2`, `val2 = dp[i3] * 3`, `val3 = dp[i5] * 5`.
   * The next ugly number is the **minimum** of these.
   * Move the pointer(s) forward if their multiple was chosen.
4. Return `dp[n]`.

---

## 🌐 Example

```text
Input: n = 10
Ugly Numbers: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12
Output: 12
```

---

## 📊 Time and Space Complexity

* **Time Complexity:** $O(n)$
* **Space Complexity:** $O(n)$

---

## 👤 Author

**Ridham Garg**
B.Tech CSE, Thapar University 🎓

---

## 📄 Summary

This optimized approach ensures that all ugly numbers are built only using previously found ugly numbers, and avoids duplicates and unnecessary calculations using a smart pointer-based generation strategy. This guarantees efficient and correct results for large values of `n`.

Happy coding! 🚀
