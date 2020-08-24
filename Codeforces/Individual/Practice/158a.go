package main

import "fmt"

func main() {
	var n int
	var k int
	fmt.Scan(&n)
	fmt.Scan(&k)
	var arr []int
	for i := 0; i < n; i++ {
		var x int
		fmt.Scan(&x)
		arr = append(arr, x)
	}
	var ans int
	for i := 0; i < n; i++ {
		if arr[i] >= arr[k - 1] && arr[i] > 0 {
			ans++
		}
	}
	fmt.Println(ans)
}