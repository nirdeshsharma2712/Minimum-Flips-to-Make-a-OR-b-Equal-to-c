# 📊 LeetCode Problem: Minimum Flips to Make a OR b Equal to c

## 🧩 Problem Statement

Given **3 positives numbers** `a`, `b` and `c`. Return the **minimum flips** required in some bits of `a` and `b` to make ( `a OR b == c` ). (bitwise `OR` operation).


> **Note :**
> - Flip operation consists of change any single bit `1` to `0` or change the bit `0` to `1` in their binary representation.



## 🧠 Approach: Bit manipulation

- Keep iterating until all three numbers a, b, and c become zero.
> Extract the last bit of each number:
> - d1 = a & 1
> - d2 = b & 1
> - d3 = c & 1

> Apply logic for flips:
> - If d3 == 0 -> Both d1 and d2 must be 0, so flip 1 for each bit that is 1.
> - If d3 == 1 -> At least one of d1 or d2 must be 1, so if both are 0 -> flip once.
 
- right-shifting bits -  a = a>>1, b = b>>1, c = c>>1.

- Return the total count of flips.



## ✅ Example Walkthrough

### Example 1

##### Input: a = 2, b = 6, c = 5
##### Output: 3

##### Explanation: 
<pre> 
  - After flips a = 1 , b = 4 , c = 5 such that (a OR b == c)
  
</pre>

### Example 2

##### Input: a = 4, b = 2, c = 7
##### Output: 1


### Example 3

##### Input: a = 1, b = 2, c = 3
##### Output: 0


## 🛠️ Constraints

- `1 <= a <= 10^9`
- `1 <= b <= 10^9`
- `1 <= c <= 10^9`
