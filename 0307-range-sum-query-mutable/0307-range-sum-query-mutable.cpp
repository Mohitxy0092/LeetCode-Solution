class NumArray {
public:
    int n;
    vector<int>ar,tree;
    void constructTree(int s,int e,int treeidx) {
        if(s==e) {
            tree[treeidx]=ar[s];
            return;
        }
        int mid=s+((e-s)>>1);
        constructTree(s,mid,2*treeidx+1);
        constructTree(mid+1,e,2*treeidx+2);
        tree[treeidx]=tree[2*treeidx+1]+tree[2*treeidx+2];
    }
    void treeUpdater(int s,int e,int treeidx,int index,int val) {
        if(s==e) {
            ar[index]=val;
            tree[treeidx]=val;
            return;
        }
        int mid=s+((e-s)>>1);
        if(index>mid) {
            treeUpdater(mid+1,e,2*treeidx+2,index,val);
        }else {
             treeUpdater(s,mid,2*treeidx+1,index,val);
        }
        tree[treeidx]=tree[2*treeidx+1]+tree[2*treeidx+2];
    }
    int query(int s,int e,int treeidx,int l,int r) {
        if(s>r || l>e) return 0;
        if(s>=l && e<=r) {
            return tree[treeidx];
        }
        int mid=s+((e-s)>>1);
        int ans1=query(s,mid,2*treeidx+1,l,r);
        int ans2=query(mid+1,e,2*treeidx+2,l,r);
        return ans1+ans2;
    }
    NumArray(vector<int>& nums) {
        n=nums.size();
        ar.resize(n);
        tree.resize(4*n);
        for(int  i=0;i<n;++i) {
            ar[i]=nums[i];
        }
        constructTree(0,n-1,0);
    }
    void update(int index, int val) {
        treeUpdater(0,n-1,0,index,val);
    }
    
    int sumRange(int left, int right) {
        return query(0,n-1,0,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */