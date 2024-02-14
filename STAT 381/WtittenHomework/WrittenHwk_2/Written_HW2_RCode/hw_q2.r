# Number of books in the shipment
total_books <- 600

# Number of books with water damage
damaged_books <- 47

# Number of books inspected
inspected_books <- 21

# Number of books with water damage in the inspected sample
damaged_books_inspected <- 0:2

# Calculate the probability using the hypergeometric distribution
prob <- sum(dhyper(damaged_books_inspected, damaged_books, total_books - damaged_books, inspected_books))

# Print the result
print(prob)
