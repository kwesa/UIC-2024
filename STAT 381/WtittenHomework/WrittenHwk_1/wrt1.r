# ducks in each category
n1 <- 200  # Category 1
n2 <- 60   # Category 2
n3 <- 1000 - n1 - n2 - 500  # Category 3 (remaining ducks)
n4 <- 500  # Category 4

# ducks sponsored by Elizabeth in each category
k1 <- 90   # Category 1
k2 <- 25   # Category 2
k3 <- 450 - k1 - k2 - 225  # Category 3 (remaining ducks)
k4 <- 225  # Category 4

# Calculate the probability of each individual category
p1 <- k1 / n1
p2 <- k2 / n2
p3 <- k3 / n3
p4 <- k4 / n4

# print the probability of each individual category
print(p1)
print(p2)
print(p3)
print(p4)
