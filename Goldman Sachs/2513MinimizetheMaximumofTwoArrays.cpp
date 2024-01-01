#define ll long long
class Solution {
public:
    bool isSatisfy(ll c1,ll c2,ll d1,ll d2,ll mid)
    {
        //total number of elements minus the number of elements which is divisible by the divisor
        ll ndivbydone = mid-mid/d1;
        ll ndivbydto = mid-mid/d2;
        //total number minus the number which is divsible by both the numbers
        ll ndivbyboth = mid-mid/lcm(d1,d2);
        if(ndivbydone >= c1 && ndivbydto >= c2 && ndivbyboth>=c1+c2)
        {
            return 1;
        }
        return 0;
    }
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) 
    {
        ll ans = INT_MAX,left = 1 , right = INT_MAX;
        while(left<=right)
        {
            ll mid = (left+right)/2;
            if(isSatisfy(uniqueCnt1,uniqueCnt2,divisor1,divisor2,mid))
            {
                ans=min(ans,mid);
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return ans;
    }
};
