## Introduction
Implement [strstr()](http://www.cplusplus.com/reference/cstring/strstr/).

Return the index of the first occurrence of needle in haystack, or __-1__ if needle is not part of haystack.

### Example 1:

__Input:__ haystack = "hello", needle = "ll"
__Output:__ 2
### Example 2:

__Input:__ haystack = "aaaaa", needle = "bba"
__Output:__ -1
### Clarification:

What should we return when <code>needle</code> is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when <code>needle</code> is an empty string. This is consistent to C's [strstr()](http://www.cplusplus.com/reference/cstring/strstr/) and Java's [indexOf()](https://docs.oracle.com/javase/7/docs/api/java/lang/String.html#indexOf(java.lang.String)).

## 介绍
实现 [strstr()](http://www.cplusplus.com/reference/cstring/strstr/) 函数。

给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回 __-1__。

### 示例 1:

__输入:__ haystack = "hello", needle = "ll"
__输出:__ 2
### 示例 2:

__输入:__ haystack = "aaaaa", needle = "bba"
__输出:__ -1
### 说明:

当 <code>needle</code> 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。

对于本题而言，当 <code>needle</code> 是空字符串时我们应当返回 0 。这与C语言的 [strstr()](http://www.cplusplus.com/reference/cstring/strstr/) 以及 Java的 [indexOf()](https://docs.oracle.com/javase/7/docs/api/java/lang/String.html#indexOf(java.lang.String)) 定义相符。