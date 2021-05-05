def main():
	#int
	var = 1
	print("Var is ", var)

	#string
	var = "variable"
	print("Var is ", var)

	#list
	var = [1,2,3,4]
	print("Var is ", var)

	var = list()
	var.append(1)
	var.append(2)
	var.append(3)
	var.append('a')
	print(var)

	#tuple, constant list
	var = (1,2,3,4)
	#var = list(var)
	print(var)

	#dictionary
	var = {"one":1, "two":2, "three":3}
	print(var["one"])
	print(var["three"])
	var["four"] = 4
	var["one"] = 5
	print(var)

	#set
	var = {1,2,4,5}
	print(var)
	var.add(6)
	print(var)
	var.add(1)
	print(var)
	if 2 in var:
		print("Found")
	if 3 in var:
		print("Found")
	else:
		print("Not found")

if __name__ == "__main__":
	main()
