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
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<Integer>();
        Stack<TreeNode> stack = new Stack<TreeNode>();
        if(root == null) {
            return result;
        }
        TreeNode current = root;
        while(true) {
            stack.push(current);
            result.add(current.val);
            
            if(current.left != null) {
                current = current.left;
                continue;
            }
            if(current.right != null) {
                current = current.right;
                continue;
            }
            
            while(true) {
               stack.pop();
               if(stack.empty()) {
                   return result;
               }
               if(current == stack.peek().right || current == stack.peek().left && stack.peek().right == null) {
                   current = stack.peek();
                   continue;
               }
               current = stack.peek().right;    
               break;
            }
        }
    }
}
