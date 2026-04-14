class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        int ans=0;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{-1,-1}});
        while(!q.empty()){
            int size=q.size();
            while(size--){
                if(q.front().first->left) q.push({q.front().first->left,{q.front().first->val,q.front().second.first}});
                if(q.front().first->right) q.push({q.front().first->right,{q.front().first->val,q.front().second.first}});
                if(q.front().second.second%2==0) ans+=q.front().first->val;
                q.pop();
            }
        }
        return ans;
    }
};