# [Longest Span in two Binary Arrays](https://www.geeksforgeeks.org/problems/longest-span-with-same-sum-in-two-binary-arrays5142/1)
## Medium
Given two binary arrays, a1[] and a2[] of equal length. Find the length of longest common span (i, j), where i&lt;= j such that a1[i] + a1[i+1] + .... + a1[j] =&nbsp; a2[i] + a2[i+1] + ... + a2[j].
Examples:
Input: a1[] = [0, 1, 0, 0, 0, 0], a2[] = [1, 0, 1, 0, 0, 1]
Output: 4
Explanation: The longest span with same sum is from index 1 to 4 (0-based indexing).

Input: a1[] = [0, 1, 0, 1, 1, 1, 1], a2[] = [1, 1, 1, 1, 1, 0, 1]
Output: 6Explanation: The longest span with same sum is from index 1 to 6 (0-based indexing).
Input: a1[] = [0, 0, 0], a2[] = [1, 1, 1]
Output: 0
Explanation: There is no span where the sum of the elements in a1[] and a2[] is equal.
Constraints:1 ≤ a1.size() = a2.size() ≤ 1060 ≤ a1[i], a2[i] ≤ 1