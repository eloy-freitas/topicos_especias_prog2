if __name__ == '__main__':

    cases = int(input())

    for i in range(cases):
        street_numbers = [int(i) for i in input().split()][1:]
        distance = []
        for j in street_numbers:
            sum_delta = 0
            for k in street_numbers:
                sum_delta += abs(j - k)
            distance.append(sum_delta)
        print(min(distance))