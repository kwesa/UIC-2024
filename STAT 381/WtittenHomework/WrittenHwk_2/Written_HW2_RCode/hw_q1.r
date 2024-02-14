# Parameters
n <- 11
p <- 0.67

# Probability calculation
prob <- pbinom(4, n, p)

# Output

cat("The Binomial distribution probability of X <= 4 is:", prob, "\n")
