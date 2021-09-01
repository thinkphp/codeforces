def main
  n = gets.to_i
  while n != 0
    x = gets.chomp.split(" ")
    arr = x.map{|value| value.to_i}
    a, b = arr[0], arr[1]
    x = (a + b - 1) / b
    ans = b * x - a
    p ans
    n -= 1
  end
end
main
