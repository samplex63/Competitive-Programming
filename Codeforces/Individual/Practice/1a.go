package main

import "fmt"

func main() {
	var a, b, c int64
	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)
	var one int64 = (a + c - 1) / c
	var two int64 = (b + c - 1) / c
	fmt.Print(one * two)
}