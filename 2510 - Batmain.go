package main

import "fmt"

func main() {
	var n int
	fmt.Scanln(&n)

	var vill string

	for i := 0; i < n; i++ {
		fmt.Scanln(&vill)
		fmt.Println("Y")
	}

}
