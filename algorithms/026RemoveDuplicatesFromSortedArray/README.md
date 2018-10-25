## Introduction
Given a sorted array nums, remove the duplicates [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by __modifying the input array__ [in-place](https://en.wikipedia.org/wiki/In-place_algorithm) with O(1) extra memory.

### Example 1:

```
Given *nums* = __[1,1,2]__,
Your function should return length = <code>2</code>, with the first two elements of <code>*nums*</code> being <code>__1__</code> and <code>__2__</code> respectively.

It doesn't matter what you leave beyond the returned length.
```
### Example 2:
```
Given *nums* = __[0,0,1,1,1,2,2,3,3,4]__,
Your function should return length = <code>__5__</code>, with the first five elements of <code>*nums*</code> being modified to <code>__0__</code>, <code>__1__</code>, <code>__2__</code>, <code>__3__</code>, and <code>__4__</code> respectively.

```
### Clarification:

Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by __reference__, which means modification to the input array will be known to the caller as well.

Internally you can think of this:

```
// __nums__ is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);
// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first __len__ elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
```

## 介绍
给定一个排序数组，你需要在[原地](https://en.wikipedia.org/wiki/In-place_algorithm)删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。

不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。

### 示例 1:
```
给定数组 *nums* = __[1,1,2]__, 

函数应该返回新的长度 <code>2</code>, 并且原数组 <code>*nums*</code> 的前两个元素被修改为 <code>__1__</code>, <code>__2__</code>。 

你不需要考虑数组中超出新长度后面的元素。
```
### 示例 2:
```
给定 *nums* = __[0,0,1,1,1,2,2,3,3,4]__,

函数应该返回新的长度 <code>__5__</code>, 并且原数组 <code>*nums*</code> 的前五个元素被修改为 <code>__0__</code>, <code>__1__</code>, <code>__2__</code>, <code>__3__</code>, <code>__4__</code>。

你不需要考虑数组中超出新长度后面的元素。
```
### 说明:

为什么返回数值是整数，但输出的答案是数组呢?

请注意，输入数组是以“__引用__”方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

你可以想象内部操作如下:
```
// __nums__ 是以“引用”方式传递的。也就是说，不对实参做任何拷贝
int len = removeDuplicates(nums);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中该长度范围内的所有元素。
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
```