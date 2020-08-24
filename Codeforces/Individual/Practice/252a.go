package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	var ans int
	for i := 0; i < n; i++ {
		var s string
		fmt.Scan(&s)
		if(string(s[0]) == "X") {
			if(string(s[2]) == "+") {
				ans++
			} else {
				ans--
			}
		} else {
			if(string(s[0]) == "+") {
				ans++
			} else {
				ans--
			}
		}
	}
	fmt.Println(ans)
}