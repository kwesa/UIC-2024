library(stats)

# Set the parameters
lambda <- 11
x <- 15

# Calculate the probability using the lower tail
p_lower <- ppois(x - 1, lambda, lower.tail = TRUE)


# Calculate the probability of X ≥ 15
p_x_geq_15 <- 1 - p_lower

# Print the result
print(p_x_geq_15)
