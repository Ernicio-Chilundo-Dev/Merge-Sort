# Merge Sort in C

This project demonstrates the **Merge Sort** algorithm implemented in the C programming language.  
Merge Sort is an efficient, stable, divide-and-conquer sorting algorithm with **O(n log n)** time complexity.

---

## ✅ Features
- Implements `mergeSort()` to recursively divide the array.
- Implements `merge()` to combine two sorted halves into a single sorted array.
- Includes a `main()` function with an example array and output display.

---

## 📂 How It Works
1. **Divide:** Split the array into two halves recursively until each subarray has one element.
2. **Conquer:** Sort each half.
3. **Combine:** Merge the sorted halves back into a single sorted array using the `merge()` function.

---

## ▶️ Usage

### **Compile the program:**
```bash
gcc merge-sort.c -o merge-sort


Run the program:
./merge-sort

Example output:
Original array: 38 88 2 4 44 22 10 
Sorted array:   2 4 10 22 38 44 88
