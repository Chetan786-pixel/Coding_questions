#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	long long mod=10000000007;
	long long ans=1;

	for(int i=0;i<n;i++){
	int found=0;  // koi bhi right side smallest element nhi mila;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				int fear=(j+1)-i;
				ans=(ans*fear)%mod;
				found=1;
				break;
			}
		}
		if(found==0){
			ans=(ans*1)%mod;
		}
	}
	printf("%lld\n",ans);
}
	
	
