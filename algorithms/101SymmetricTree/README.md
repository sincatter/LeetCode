## Symmetric Tree
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).  
For example, this binary tree <code>[1,2,2,3,4,4,3]</code> is symmetric:  
```
    1
   / \
  2   2
 / \ / \
3  4 4  3
```
But the following <code>[1,2,2,null,3,null,3]</code> is not:
```
    1
   / \
  2   2
   \   \
   3    3
```
__Note__:  
Bonus points if you could solve it both recursively and iteratively.

## 对称二叉树
给定一个二叉树，检查它是否是镜像对称的。  
例如，二叉树 [1,2,2,3,4,4,3] 是对称的。
```
    1
   / \
  2   2
 / \ / \
3  4 4  3
```
但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:  
```
    1
   / \
  2   2
   \   \
   3    3
```
__说明__:  
如果你可以运用递归和迭代两种方法解决这个问题，会很加分。