# ./push_swap
#### Push_Swap is a sorting algorithm project that challenges you to order a list of numbers using the fewest possible moves.

## Rules

#### The program uses two stacks, a and b, and provides a limited set of operations:

- **pa** – *Push the top number from stack b to stack a.*
- **pb** – *Push the top number from stack a to stack b.*
- **sa** – *Swap the top two numbers in stack a.*
- **sb** – *Swap the top two numbers in stack b.*
- **ss** – *Perform sa and sb simultaneously.*
- **ra** – *Rotate stack a (move the top number to the bottom).*
- **rb** – *Rotate stack b.*
- **rr** – *Perform ra and rb simultaneously.*
- **rra** – *Reverse rotate stack a (move the bottom number to the top).*
- **rrb** – *Reverse rotate stack b.*
- **rrr** – *Perform rra and rrb simultaneously.*

The goal is to strategically use these moves to sort the numbers.
##### To score 100/100:

 - 5 numbers must be sorted in less than 12 moves.
 - 100 numbers in less than 700 moves.
 - 500 numbers in less than 1500 moves.

## How It Works

#### The program uses doubly linked lists for element access, traversed primarily with singly linked lists. 
##### Here's the general flow:

##### Input Validation:
- The program accepts numbers from stdin.
- It ensures all inputs are numeric, fit within an int, and are unique.

##### Index Assignment:
- Each number is assigned an index based on its relative value (e.g., -1532 666 42 68 becomes 0 3 1 2).

##### Initial Checks:
- The program determines if the list is already sorted.
- Depending on the size, it uses hardcoded solutions for 3 or 5 numbers.

##### Bucket Sort Preparation:
- For larger sets, numbers are pushed to stack b in a K-order (largest at extremes, smallest in the middle).
- Best Case Complexity: O(n√n) 
- Worst Case Complexity: O(n^2)
- Time complexity: O(1)
##### Selection Sort:
- The program sorts numbers in stack b and pushes them back to stack a, leveraging the K-order to minimize moves (e.g., at most rrb and pa per step).
- Best Case Complexity: O(n) 
- Worst Case Complexity: O(n^2)
- Time complexity: O(1)

![push_swap](https://github.com/user-attachments/assets/5b6fd246-5ba0-4f67-9594-c4399f6ebe50)


## What I learnt

- How to work with structures and linked lists.
- Ways to optimize existing sorting algorithms for specific constraints.
- Problem-solving strategies to balance efficiency and accuracy.
- Finding the most optimal solution for any set of numbers was the toughest and most rewarding part of the project.



# Bonus: ./checker

The bonus feature includes a checker program. 

- It accepts a set of numbers, allows you to input movements (pa, ra, rrb, etc.), and verifies if the result is sorted.
- This uses my precoded get_next_line function to read inputs from stdin or files.
- It checks for typos with strcmp, executes the movements, and validates the result.


![checker](https://github.com/user-attachments/assets/26c18e0e-6260-4b57-a87f-70da4ff0f9c8)
