import math
n = int(input());
vec = list(map(int, input().split()))
ans = []
carry = 0
while(vec[0] > 0):
	num = 0
	for i in range(0, n):
		num += vec[i] % 10
		vec[i] /= 10
	num *= n
	num += carry
	ans.append(num % 10)
	num -= carry;
	carry = num / 10
	num += carry
	ans.append(num % 10)
	num -= carry
	carry = num / 10

if(carry != 0) ans.append(carry)

final_ans = 0
start = 1
for i in range(len(ans) - 1, -1):
	final_ans += ans[i] * start
	start *= 10

print(final_ans % 998244353)