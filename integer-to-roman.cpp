// https://leetcode.com/problems/integer-to-roman/

class Solution {
public:
    string intToRoman(int num) {
        
        int arr[4]={0},n=num,i=0;
        while(n) {
            arr[i++]=n%10;
            n/=10;
        }
        // for(int m=0; m<4; ++m) {
        //     cout << arr[m] << " " << i << endl;
        // }
        string ans;
        for(int x=i-1; x>=0; --x) {
            // cout << x << " " << arr[x] << endl;
            if(arr[x] && arr[x]>=1 && arr[x] <=3) {
                if(x==3) {
                    while(arr[x]--) {
                        ans+='M';
                    }
                } else if(x==2) {
                    while(arr[x]--) {
                        ans+='C';
                    }
                } else if(x==1) {
                    while(arr[x]--) {
                        ans+='X';
                    }
                } else if(x==0) {
                    while(arr[x]--) {
                        ans+='I';
                    }
                }
            }
            else if(arr[x] && arr[x]==4) {
                if(x==2) {
                    ans+="CD";
                } else if(x==1) {
                    ans+="XL";
                } else if(x==0) {
                    ans+="IV";
                }
            }
            else if(arr[x] && arr[x]>=5 && arr[x] <=8) {
                if(x==2) {
                    ans+='D';
                    arr[x]-=5;
                    while(arr[x]--) {
                        ans+='C';
                    }
                } else if(x==1) {
                    ans+='L';
                    arr[x]-=5;
                    while(arr[x]--) {
                        ans+='X';
                    }
                } else if(x==0) {
                    ans+='V';
                    arr[x]-=5;
                    while(arr[x]--) {
                        ans+='I';
                    }
                }
            }
            else if(arr[x] && arr[x]==9) {
                if(x==2) {
                    ans+="CM";
                } else if(x==1) {
                    ans+="XC";
                } else if(x==0) {
                    ans+="IX";
                }
            }
        }
        return ans;
    }
};
