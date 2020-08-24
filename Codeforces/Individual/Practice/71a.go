package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t);
	for tt := 0; tt < t; tt++ {
		var ok string
		fmt.Scan(&ok)
		if(len(ok) <= 10) {
			fmt.Println(ok)
		} else {
			fmt.Printf("%c%d%c\n", ok[0], len(ok) - 2, ok[len(ok) - 1])
		}
	}
}