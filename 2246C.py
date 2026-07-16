t = int(input())

while t:
    n = int(input())
    l = list(map(int, input().split()))

    count = {}

    def find(i, val, X):
        left = 0
        right = i - 1
        ans = [0, 0, 0]

        while left <= right:
            mid = (left + right) >> 1

            if X * l[mid] <= val:
                ans = [count[l[mid]], l[mid], mid]
                left = mid + 1
            else:
                right = mid - 1

        return ans

    def get(j, val, X):
        ans = 1

        while val > 0:
            c, x, i = find(j, val, -X)

            if c == 0:
                return 0

            ans *= c
            val -= x
            j = i

        return ans

    ans = 0

    for i in range(n):
        val1 = get(i, l[i], -1)
        val2 = get(i, -l[i], 1)

        ans += val1 + val2

        if l[i] in count:
            count[l[i]] += 1
        else:
            count[l[i]] = 1

    print(ans + 1)

    t -= 1