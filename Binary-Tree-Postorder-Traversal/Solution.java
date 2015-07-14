/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<Integer>();
        Stack<java.util.AbstractMap.SimpleEntry<TreeNode,Boolean>> stack = new Stack<java.util.AbstractMap.SimpleEntry<TreeNode,Boolean>>();
        if(root == null) {
            return result;
        }
        stack.push(new java.util.AbstractMap.SimpleEntry(root, false));
        while(!stack.empty()) {
            java.util.AbstractMap.SimpleEntry<TreeNode,Boolean> entry = stack.pop();
            if(entry.getValue() == true || entry.getKey().left == entry.getKey().right && entry.getKey().right == null) {
                result.add(entry.getKey().val);
            } else {
                entry.setValue(true);
                stack.push(entry);
                if(entry.getKey().right != null) {
                    stack.push(new java.util.AbstractMap.SimpleEntry(entry.getKey().right, false));
                }
                if(entry.getKey().left != null) {
                    stack.push(new java.util.AbstractMap.SimpleEntry(entry.getKey().left, false));
                }
            }
        }
        
        return result;
    }
}
