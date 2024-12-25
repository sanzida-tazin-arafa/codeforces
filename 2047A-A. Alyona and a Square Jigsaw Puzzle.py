def alyona_happy_days(t, test_cases):
    results = []
    
    for case in test_cases:
        n, pieces = case
        happy_days = 0
        total_pieces = 0
        layer_size = 1
        current_layer_pieces = 8
        
        for day_pieces in pieces:
            total_pieces += day_pieces
            
            while total_pieces >= layer_size:
                if total_pieces == layer_size:
                    happy_days += 1
                layer_size += current_layer_pieces
                current_layer_pieces += 8  # Increase the next layer size
        
        results.append(happy_days)
    
    return results

# Input Reading
t = int(input())
test_cases = []

for _ in range(t):
    n = int(input())
    pieces = list(map(int, input().split()))
    test_cases.append((n, pieces))

# Solve and Print Results
results = alyona_happy_days(t, test_cases)
for result in results:
    print(result)
