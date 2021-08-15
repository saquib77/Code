package main

import "fmt"

func main() {
	add(4, 5, "sum of number")
}
func add(a, b int, name string) int {
	sum := a * b
	fmt.Printf("%s is %v", name, sum)
	return sum
}
